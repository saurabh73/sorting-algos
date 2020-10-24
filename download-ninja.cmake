set(cmake_version 3.18.3)
set(ninja_version 1.10.1)

message(STATUS "Using host CMake version: ${CMAKE_VERSION}")

if ("${{ runner.os }}" STREQUAL "Windows")
set(ninja_suffix "win.zip")
set(cmake_suffix "win64-x64.zip")
set(cmake_dir "cmake-${cmake_version}-win64-x64/bin")
elseif ("${{ runner.os }}" STREQUAL "Linux")
set(ninja_suffix "linux.zip")
set(cmake_suffix "Linux-x86_64.tar.gz")
set(cmake_dir "cmake-${cmake_version}-Linux-x86_64/bin")
elseif ("${{ runner.os }}" STREQUAL "macOS")
set(ninja_suffix "mac.zip")
set(cmake_suffix "Darwin-x86_64.tar.gz")
set(cmake_dir "cmake-${cmake_version}-Darwin-x86_64/CMake.app/Contents/bin")
endif()

set(ninja_url "https://github.com/ninja-build/ninja/releases/download/v${ninja_version}/ninja-${ninja_suffix}")
file(DOWNLOAD "${ninja_url}" ./ninja.zip SHOW_PROGRESS)
execute_process(COMMAND ${CMAKE_COMMAND} -E tar xvf ./ninja.zip)

set(cmake_url "https://github.com/Kitware/CMake/releases/download/v${cmake_version}/cmake-${cmake_version}-${cmake_suffix}")
file(DOWNLOAD "${cmake_url}" ./cmake.zip SHOW_PROGRESS)
execute_process(COMMAND ${CMAKE_COMMAND} -E tar xvf ./cmake.zip)

# Add to PATH environment variable
file(TO_CMAKE_PATH "$ENV{GITHUB_WORKSPACE}/${cmake_dir}" cmake_dir)
set(path_separator ":")
if ("${{ runner.os }}" STREQUAL "Windows")
set(path_separator ";")
endif()
file(APPEND "$ENV{GITHUB_PATH}" "$ENV{GITHUB_WORKSPACE}${path_separator}${cmake_dir}")

if (NOT "${{ runner.os }}" STREQUAL "Windows")
execute_process(
COMMAND chmod +x ninja
COMMAND chmod +x ${cmake_dir}/cmake
)
endif()