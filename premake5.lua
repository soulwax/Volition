include "./vendor/premake/premake_customization/solution_items.lua"
include "Dependencies.lua"

workspace "Volition"
	architecture "x86_64"
	startproject "Spine"

	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

	solution_items
	{
		".editorconfig"
	}

	flags
	{
		"MultiProcessorCompile"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

group "Dependencies"
	include "vendor/premake"
	include "Volition/vendor/Box2D"
	include "Volition/vendor/GLFW"
	include "Volition/vendor/Glad"
	include "Volition/vendor/msdf-atlas-gen"
	include "Volition/vendor/imgui"
	include "Volition/vendor/yaml-cpp"
group ""

group "Core"
	include "Volition"
	include "Volition-ScriptCore"
group ""

group "Tools"
	include "Spine"
group ""

group "Misc"
	include "Sandbox"
group ""
