# Volition [![License](https://img.shields.io/github/license/soulwax/Volition.svg)](https://github.com/soulwax/Volition/blob/master/LICENSE)

![Volition](/Resources/Branding/Volition_Logo_Text_Light_Square.png?raw=true "Volition")

Volition is primarily an early-stage interactive application and rendering engine for Windows.
***

## Short description of components

`Volition` contains the core engine
`Volition-ScriptCore` contains the scripting language logic for the Volition core engine
`Spine` is the frontend gui employing and tying togetherthe aforementioned modules.
`Sandbox` is what `Spine` used to be, but with no gui, and it does not use `-ScriptCore` but games can be programmed using the full engine capabilities purely programmatically.

## Getting Started

Visual Studio 2017, 2019 or 2022 is recommended (tested and developed with Visual Studio 2022) Volition is officially untested on other development environments whilst I focus on a Windows build.

<ins>**1. Downloading the repository:**</ins>

Start by cloning the repository with `git clone --recursive https://gitlab.com/soulwax/volition`.

If the repository was cloned non-recursively previously, use `git submodule update --init` to clone the necessary submodules.

<ins>**2. Configuring the dependencies:**</ins>

1. Run the [Setup.bat](https://github.com/soulwax/Volition/blob/main/scripts/Setup.bat) file found in `scripts` folder. This will download the required prerequisites for the project if they are not present yet.
2. One prerequisite is the Vulkan SDK. If it is not installed, the script will execute the `VulkanSDK.exe` file, and will prompt the user to install the SDK.
3. After installation, run the [Setup.bat](https://github.com/soulwax/Volition/blob/master/scripts/Setup.bat) file again. If the Vulkan SDK is installed properly, it will then download the Vulkan SDK Debug libraries. (This may take a longer amount of time)
4. After downloading and unzipping the files, the [Win-GenProjects.bat](https://github.com/soulwax/Volition/blob/master/scripts/Win-GenProjects.bat) script file will get executed automatically, which will then generate a Visual Studio solution file for user's usage.

If changes are made, or if you want to regenerate project files, rerun the [Win-GenProjects.bat](https://github.com/soulwax/Volition/blob/master/scripts/Win-GenProjects.bat) script file found in `scripts` folder.

***

## The Plan

Volition is mainly a learning project for C++ and graphics programming. The main goal is to create a fully featured game engine, with a focus on high-fidelity 3D rendering and fast 2D rendering. The engine will be designed to be as modular as possible, with a focus on performance and flexibility.

### Main features to come

- Fast 2D rendering (UI, particles, sprites, etc.)
- High-fidelity Physically-Based 3D rendering (this will be expanded later, 2D to come first)
- Support for Mac, Linux, Android and iOS
  - Native rendering API support (DirectX, Vulkan, Metal)
- Fully featured viewer and editor applications
- Fully scripted interaction and behavior
- Integrated 3rd party 2D and 3D physics engine
- Procedural terrain and world generation
- Artificial Intelligence
- Audio system
