# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\devin\Downloads\cpe-553hw-dbelmar\HwRegex

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\devin\Downloads\cpe-553hw-dbelmar\HwRegex\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HwRegex.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HwRegex.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HwRegex.dir/flags.make

CMakeFiles/HwRegex.dir/main.cpp.obj: CMakeFiles/HwRegex.dir/flags.make
CMakeFiles/HwRegex.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\devin\Downloads\cpe-553hw-dbelmar\HwRegex\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HwRegex.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HwRegex.dir\main.cpp.obj -c C:\Users\devin\Downloads\cpe-553hw-dbelmar\HwRegex\main.cpp

CMakeFiles/HwRegex.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HwRegex.dir/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\devin\Downloads\cpe-553hw-dbelmar\HwRegex\main.cpp > CMakeFiles\HwRegex.dir\main.cpp.i

CMakeFiles/HwRegex.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HwRegex.dir/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\devin\Downloads\cpe-553hw-dbelmar\HwRegex\main.cpp -o CMakeFiles\HwRegex.dir\main.cpp.s

# Object files for target HwRegex
HwRegex_OBJECTS = \
"CMakeFiles/HwRegex.dir/main.cpp.obj"

# External object files for target HwRegex
HwRegex_EXTERNAL_OBJECTS =

HwRegex.exe: CMakeFiles/HwRegex.dir/main.cpp.obj
HwRegex.exe: CMakeFiles/HwRegex.dir/build.make
HwRegex.exe: CMakeFiles/HwRegex.dir/linklibs.rsp
HwRegex.exe: CMakeFiles/HwRegex.dir/objects1.rsp
HwRegex.exe: CMakeFiles/HwRegex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\devin\Downloads\cpe-553hw-dbelmar\HwRegex\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HwRegex.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HwRegex.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HwRegex.dir/build: HwRegex.exe

.PHONY : CMakeFiles/HwRegex.dir/build

CMakeFiles/HwRegex.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HwRegex.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HwRegex.dir/clean

CMakeFiles/HwRegex.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\devin\Downloads\cpe-553hw-dbelmar\HwRegex C:\Users\devin\Downloads\cpe-553hw-dbelmar\HwRegex C:\Users\devin\Downloads\cpe-553hw-dbelmar\HwRegex\cmake-build-debug C:\Users\devin\Downloads\cpe-553hw-dbelmar\HwRegex\cmake-build-debug C:\Users\devin\Downloads\cpe-553hw-dbelmar\HwRegex\cmake-build-debug\CMakeFiles\HwRegex.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HwRegex.dir/depend

