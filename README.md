Linux make instructions

Rename the unzipped JUCE folder to JUCE and move it to the home folder

Unzip this repository/clone inside the JUCE folder

To make the Projucer, change into ~/JUCE/extras/Projucer/Builds/LinuxMakefile.
Edit the Makefile and add "-DJUCER_ENABLE_GPL_MODE=1" to both the JUCE_CPPFLAGS lines.
Then enter into the Terminal, 
make CONFIG=Release

Run the Projucer and load the jucer file in the unzipped repository/clone folder and save the project (disable JUCE_VST3_CAN_REPLACE_VST2 in the juce_audio_plugin_client module options before saving).

---------
 
Some libraries need to be preinstalled

sudo apt-get -y install git pkg-config libfreetype6-dev libx11-dev libxinerama-dev libxrandr-dev libxcursor-dev mesa-common-dev libasound2-dev freeglut3-dev libxcomposite-dev libcurl4-gnutls-dev

(also webkit2gtk-4.0 if using webkit)

For the Luftikus PitchedDelay ReFine and SuperSpread plugins

cd into Builds/LinuxMakefile and run make CONFIG=Release

vst3's are installed into ~/.vst3

------------

The lv2 version needs JUCE lv2 from the lv2 branch at https://github.com/lv2-porting-project/JUCE

Install the lv2 development files.
sudo apt-get install lv2-dev or sudo pacman -Sy lv2 for Manjaro

Make the Projucer as above and save the project as a vst2 (change from vst3 to vst2 in the Projucer settings).

Unzip the plugin-name-lv2-make.zip file in the Builds/LinuxMakefile/lv2 folder and copy the Makefile to the Builds/LinuxMakefile folder

cd into the Builds/LinuxMakefile folder

make CONFIG=Release

then

cd build

copy lv2_ttl_generator and lvmake and makelv2 (might need a chmod +x to make them executable) from the unzipped plugin-name-lv2-make.zip file to the build folder

./makelv2

---------

# lkjb Open Source Plugins

This repository contains all lkjb open source plugins which are:
- PitchedDelay (previously a separate repository)
- Luftikus
- Refine
- SuperSpread

A JUCE fork is included as submodule which contains the JUCE 5.4.3 sources with the following modifications:
- GPL mode in Projucer enabled
- Disabled analytics (usage reporting) in sources as well as in Projucer
- Disabled update checking in Projucer as it should be possible to build the plugins without any further modifications from the repository
- Changed Projucer settings directory to "Projucer (lkjb mod)". This allows to use the lkjb fork Projucer in parallel to the normal Projucer.

# Building

The following steps should suffice to build the plugins:
1. Build Projucer in `juce/extras/Projucer/Builds`. Choose the fitting IDE's subfolder.
2. Run Projucer and save the plugin's `.jucer` files in their respective plugins directories. If you want to also build VST2 plugins copy the VST2.4 SDK inside the `vstsdk2.4` directory. Only the `extras\Projucer\Builds` and `public.sdk` folders are needed. Currently (07/2019) the SDK can be download from [archive.org](https://archive.org/details/VST2SDK).
3. After saving the `.jucer` files open the created IDE projects and compile.

The build process was tested using VisualStudio 2017 on Windows 10 and XCode 8.2.1 on macOS 10.11 (El Capitan).

# License
JUCE is licensed under the GPL v3 or a commercial license. See juce.com for more details.
The lkjb part of the code is now licensed under the MIT license. Feel free to use the code in other products or create (hopefully freeware) AAX plugins.
