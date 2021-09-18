workspace "Lime"
    architecture "x64"

    configurations { "Debug", "Release" }

outputdir = "%{cfg.buildcfg}-%{cfg.architecture}"

project "Lime"
    location "Lime"
    kind "StaticLib"
    language "C++"
    cppdialect "C++17"

    targetdir("bin/" .. outputdir .. "/%{prj.name}")
    objdir("obj/" .. outputdir .. "/%{prj.name}")

    staticruntime "On"

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs
    {
        "Lime/src",
    }

    filter "configurations:Debug"
        defines "Lime_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "Lime_RELEASE"
        optimize "On"

project "Sandbox"
    location "Sandbox"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"

    targetdir("bin/" .. outputdir .. "/%{prj.name}")
    objdir("obj/" .. outputdir .. "/%{prj.name}")

    files
    {
        "%{prj.name}/src/**.h",
        "%{prj.name}/src/**.cpp"
    }

    includedirs
    {
        "Lime/src"
    }

    links
    {
        "Lime"
    }

    filter "configurations:Debug"
        defines "Lime_DEBUG"
        symbols "On"

    filter "configurations:Release"
        defines "Lime_RELEASE"
        optimize "On"
