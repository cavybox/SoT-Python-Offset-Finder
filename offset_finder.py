"""
Script that is responsible for looking through our SDK and determining
all of the offsets we specify automatically. Can that pass the output file
into the SoT ESP Framework
@Author https://github.com/DougTheDruid
@Source https://github.com/DougTheDruid/SoT-Python-Offset-Finder
@Framework https://github.com/DougTheDruid/SoT-ESP-Framework
For community support, please contact me on Discord: DougTheDruid#2784
"""
import json


ATHENA = "SDKs\\JSON-SDK\\Athena_Classes.json"
ENGINE = "SDKs\\JSON-SDK\\Engine_Classes.json"
ATHENA_AI = "SDKs\\JSON-SDK\\AthenaAI_Classes.json"
ENGINE_STRUCT = "SDKs\\JSON-SDK\\Engine_Structs.json"
ATHENA_STRUCT = "SDKs\\JSON-SDK\\Athena_structs.json"


def get_offset(file_name, title, memory_object):
    """
    Opens the file the offset lives within, then reads through the lines within
    the file until we find the offset in hex.
    :param file_name: The file name where the offset lives within
    :param title: The title of the primary object which contains the value we
    want to pull data from
    :param memory_object: The data name from a parent object we want to pull
    the offset from
    :return: The int-converted version of the offset for a specific data field
    out of a parent object
    """
    offset = "Not Found"
    with open(file_name) as file_to_check:
        json_sdk_file = json.load(file_to_check)
        components = json_sdk_file.get(title, None)
        if components:
            attributes = components.get('Attributes', None)
            for attribute in attributes:
                if attribute['Name'] == memory_object:
                    offset = int(attribute.get('Offset'), 16)
    return offset


if __name__ == '__main__':
    """
    We build a dictionary which contains all offset data, then save the 
    information into an offset file.
    """

    output = {
        "Actor.actorId": 24,  # The ID number associated with an actor type
        "SceneComponent.ActorCoordinates": 0x12c,  # Currently located at SceneComponent.RelativeScale3D+0xC
        # SDK Generator is incapable of pulling this automatically, may need to fix if you have issues
        "Actor.rootComponent": get_offset(ENGINE, "Actor", "RootComponent"),
        "PlayerState.PlayerName": get_offset(ENGINE, "PlayerState", "PlayerName"),
        "GameInstance.LocalPlayers": get_offset(ENGINE, "GameInstance", "LocalPlayers"),
        "LocalPlayer.PlayerController": get_offset(ENGINE, "Player", "PlayerController"),
        "World.OwningGameInstance": get_offset(ENGINE, "World", "OwningGameInstance"),
        "World.PersistentLevel": get_offset(ENGINE, "World", "PersistentLevel"),
        "PlayerController.CameraManager": get_offset(ENGINE, "PlayerController", "PlayerCameraManager"),
        "PlayerCameraManager.CameraCache": get_offset(ENGINE, "PlayerCameraManager", "CameraCache"),
        "CameraCacheEntry.MinimalViewInfo": get_offset(ENGINE_STRUCT, "CameraCacheEntry", "POV"),

    }
    with open("offsets.json", "w+") as outfile:
        outfile.write(json.dumps(output, indent=2, sort_keys=True))
