# 12th Marine Expeditionary Unit Assets

## Git Description

This repository is for the 12th MEU ArmA unit.

## This Mods Contains:

### `./addons/` Folder

The `./addons/` folder contains all of the folders used in the building process. Each folder within /addons can be thought of as an unpacked PBO file.

`12th_vests`: Contains any and all customized vests.
`12th_backpacks`: Contains any and all customized backpacks.
`12th_custom_helms`: Contains all individually customized helmets.
`12th_armor`: Contains any and all customized uniforms, including non-custom helmets.
`12th_tagging`: Contains a set of spray cans with 12th-specific tags programmed in.
`12th_weapons`: Contains any and all customized weapons.
`12th_aircraft`: Contains any and all customized aircraft.
`12th_vehicles`: Contains any and all customized ground vehicles.
`12th_supply_pods`: Contains all of our supply pod re-textures and custom configurations.
`12th_music`: Contains all of the custom music that is in use.
`12th_misc`: Contains all other relevant assets (if needed).
`12th_ui`: Contains a set of loading screens and splash screens. This is made to be a separate PBO specifically to allow people to use our other PBOs without seeing the 12th's branding.

### `./pbo_include` Folder

The ./pbo_include folder contains all of our 3rd party PBOs that are to be included in the mod. The currently included PBOs are listed here: https://pastebin.com/RPFdREG3

## How to Build the Mod

### Windows

To build a development version, follow these steps:

1. Run the build.ps1 script by right-clicking the file and selecting the Run With Powershell option.

2. This script will produce a folder labeled `.hemttout/build`. You can load this folder as a mod directly into ArmA 3 for testing purposes.

To build a release version, follow these steps:

1. Run the release.ps1 script.

2. This will produce a zip file in the `./releases` directory and a folder in .hemttout/release.