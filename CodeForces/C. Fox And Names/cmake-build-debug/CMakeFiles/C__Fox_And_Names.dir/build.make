# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\cs\problem solving\Competitive-Programming\CodeForces\C. Fox And Names"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\cs\problem solving\Competitive-Programming\CodeForces\C. Fox And Names\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/C__Fox_And_Names.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C__Fox_And_Names.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C__Fox_And_Names.dir/flags.make

CMakeFiles/C__Fox_And_Names.dir/main.cpp.obj: CMakeFiles/C__Fox_And_Names.dir/flags.make
CMakeFiles/C__Fox_And_Names.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\cs\problem solving\Competitive-Programming\CodeForces\C. Fox And Names\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C__Fox_And_Names.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\C__Fox_And_Names.dir\main.cpp.obj -c "D:\cs\problem solving\Competitive-Programming\CodeForces\C. Fox And Names\main.cpp"

CMakeFiles/C__Fox_And_Names.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C__Fox_And_Names.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\cs\problem solving\Competitive-Programming\CodeForces\C. Fox And Names\main.cpp" > CMakeFiles\C__Fox_And_Names.dir\main.cpp.i

CMakeFiles/C__Fox_And_Names.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C__Fox_And_Names.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\cs\problem solving\Competitive-Programming\CodeForces\C. Fox And Names\main.cpp" -o CMakeFiles\C__Fox_And_Names.dir\main.cpp.s

# Object files for target C__Fox_And_Names
C__Fox_And_Names_OBJECTS = \
"CMakeFiles/C__Fox_And_Names.dir/main.cpp.obj"

# External object files for target C__Fox_And_Names
C__Fox_And_Names_EXTERNAL_OBJECTS =

C__Fox_And_Names.exe: CMakeFiles/C__Fox_And_Names.dir/main.cpp.obj
C__Fox_And_Names.exe: CMakeFiles/C__Fox_And_Names.dir/build.make
C__Fox_And_Names.exe: CMakeFiles/C__Fox_And_Names.dir/linklibs.rsp
C__Fox_And_Names.exe: CMakeFiles/C__Fox_And_Names.dir/objects1.rsp
C__Fox_And_Names.exe: CMakeFiles/C__Fox_And_Names.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\cs\problem solving\Competitive-Programming\CodeForces\C. Fox And Names\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C__Fox_And_Names.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\C__Fox_And_Names.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C__Fox_And_Names.dir/build: C__Fox_And_Names.exe

.PHONY : CMakeFiles/C__Fox_And_Names.dir/build

CMakeFiles/C__Fox_And_Names.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\C__Fox_And_Names.dir\cmake_clean.cmake
.PHONY : CMakeFiles/C__Fox_And_Names.dir/clean

CMakeFiles/C__Fox_And_Names.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\cs\problem solving\Competitive-Programming\CodeForces\C. Fox And Names" "D:\cs\problem solving\Competitive-Programming\CodeForces\C. Fox And Names" "D:\cs\problem solving\Competitive-Programming\CodeForces\C. Fox And Names\cmake-build-debug" "D:\cs\problem solving\Competitive-Programming\CodeForces\C. Fox And Names\cmake-build-debug" "D:\cs\problem solving\Competitive-Programming\CodeForces\C. Fox And Names\cmake-build-debug\CMakeFiles\C__Fox_And_Names.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/C__Fox_And_Names.dir/depend
