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
CMAKE_SOURCE_DIR = C:\Users\devin\Downloads\cpe-553hw-dbelmar\InClassDictionary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\devin\Downloads\cpe-553hw-dbelmar\InClassDictionary\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/InClassDictionary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/InClassDictionary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/InClassDictionary.dir/flags.make

CMakeFiles/InClassDictionary.dir/main.cpp.obj: CMakeFiles/InClassDictionary.dir/flags.make
CMakeFiles/InClassDictionary.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\devin\Downloads\cpe-553hw-dbelmar\InClassDictionary\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/InClassDictionary.dir/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\InClassDictionary.dir\main.cpp.obj -c C:\Users\devin\Downloads\cpe-553hw-dbelmar\InClassDictionary\main.cpp

CMakeFiles/InClassDictionary.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/InClassDictionary.dir/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\devin\Downloads\cpe-553hw-dbelmar\InClassDictionary\main.cpp > CMakeFiles\InClassDictionary.dir\main.cpp.i

CMakeFiles/InClassDictionary.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/InClassDictionary.dir/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\devin\Downloads\cpe-553hw-dbelmar\InClassDictionary\main.cpp -o CMakeFiles\InClassDictionary.dir\main.cpp.s

# Object files for target InClassDictionary
InClassDictionary_OBJECTS = \
"CMakeFiles/InClassDictionary.dir/main.cpp.obj"

# External object files for target InClassDictionary
InClassDictionary_EXTERNAL_OBJECTS =

InClassDictionary.exe: CMakeFiles/InClassDictionary.dir/main.cpp.obj
InClassDictionary.exe: CMakeFiles/InClassDictionary.dir/build.make
InClassDictionary.exe: CMakeFiles/InClassDictionary.dir/linklibs.rsp
InClassDictionary.exe: CMakeFiles/InClassDictionary.dir/objects1.rsp
InClassDictionary.exe: CMakeFiles/InClassDictionary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\devin\Downloads\cpe-553hw-dbelmar\InClassDictionary\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable InClassDictionary.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\InClassDictionary.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/InClassDictionary.dir/build: InClassDictionary.exe

.PHONY : CMakeFiles/InClassDictionary.dir/build

CMakeFiles/InClassDictionary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\InClassDictionary.dir\cmake_clean.cmake
.PHONY : CMakeFiles/InClassDictionary.dir/clean

CMakeFiles/InClassDictionary.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\devin\Downloads\cpe-553hw-dbelmar\InClassDictionary C:\Users\devin\Downloads\cpe-553hw-dbelmar\InClassDictionary C:\Users\devin\Downloads\cpe-553hw-dbelmar\InClassDictionary\cmake-build-debug C:\Users\devin\Downloads\cpe-553hw-dbelmar\InClassDictionary\cmake-build-debug C:\Users\devin\Downloads\cpe-553hw-dbelmar\InClassDictionary\cmake-build-debug\CMakeFiles\InClassDictionary.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/InClassDictionary.dir/depend

