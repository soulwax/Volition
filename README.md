# Volition [![License](https://img.shields.io/github/license/soulwax/Volition.svg)](https://github.com/soulwax/Volition/blob/master/LICENSE)

![Volition](/Resources/Branding/Volition_Logo_Text_Light_Square.png?raw=true "Volition")

Volition is an early-stage interactive application and rendering engine for Windows, built using C++. The project aims to create a modular, high-performance game engine with a focus on high-fidelity 3D rendering and fast 2D rendering.

## Project Structure

The Volition project consists of several key components:

- `Volition`: The core engine module containing the fundamental engine functionality.
- `Volition-ScriptCore`: A module providing scripting language support for the Volition engine.
- `Spine`: The frontend GUI application that integrates the engine modules and provides a user interface.
- `Sandbox`: A standalone application that demonstrates the engine's capabilities without using the scripting module or GUI.

## Dependencies

Volition relies on the following key dependencies:

- **Vulkan SDK**: The engine utilizes the Vulkan graphics API for rendering. The Vulkan SDK is a crucial dependency that provides the necessary libraries and tools for Vulkan development.
- **GLFW**: A lightweight utility library for creating windows, receiving input, and handling events.
- **GLM**: A mathematics library for graphics software, providing classes and functions for common vector and matrix operations.
- **ImGui**: A bloat-free immediate mode GUI library for creating interactive user interfaces.
- **spdlog**: A fast, header-only C++ logging library for efficient logging and debugging.
- **EnTT**: A header-only library for managing entities and components in a modular and efficient way.

The project also includes several third-party libraries as submodules, which are automatically downloaded and set up during the project configuration process.

## Getting Started

To set up the Volition project on your local machine, follow these steps:

1. **Clone the repository:**:

```sh
git clone --recursive https://gitlab.com/soulwax/volition
```

If you have previously cloned the repository without the `--recursive` flag, run `git submodule update --init --recursive` to download the necessary submodules.

2. **Configure the dependencies:**
- Run the `Setup.bat` script located in the `scripts` folder. This script will download and set up the required dependencies, including the Vulkan SDK.
- If the Vulkan SDK is not installed, the script will prompt you to install it. Follow the installation instructions provided by the Vulkan SDK installer.
- After installing the Vulkan SDK, run the `Setup.bat` script again to download the Vulkan SDK debug libraries. This process may take some time.

3. **Generate project files:**
- Once the dependencies are set up, the `Win-GenProjects.bat` script will automatically run and generate the Visual Studio solution files for the project.
- If you need to regenerate the project files after making changes, you can manually run the `Win-GenProjects.bat` script located in the `scripts` folder.

## Build Instructions

To build the Volition project:

1. Open the generated Visual Studio solution file (`Volition.sln`).
2. Select the desired build configuration (Debug or Release) and target platform (x64).
3. Build the solution by clicking on "Build" -> "Build Solution" or pressing `Ctrl+Shift+B`.

The built executable files will be located in the `bin` folder, organized by configuration and platform.

## Roadmap

Volition is an ongoing learning project, and the following features are planned for future development:

- Fast 2D rendering (UI, particles, sprites, etc.)
- High-fidelity Physically-Based 3D rendering
- Support for multiple platforms (Mac, Linux, Android, iOS)
- Native rendering API support (DirectX, Vulkan, Metal)
- Fully featured viewer and editor applications
- Fully scripted interaction and behavior
- Integrated 3rd party 2D and 3D physics engine
- Procedural terrain and world generation
- Artificial Intelligence
- Audio system

## License

Volition is released under the [MIT License](https://github.com/soulwax/Volition/blob/master/LICENSE).
