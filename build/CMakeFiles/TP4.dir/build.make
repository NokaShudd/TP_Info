# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\ntrem\ECE\Info\TP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\ntrem\ECE\Info\TP\build

# Include any dependencies generated for this target.
include CMakeFiles/TP4.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TP4.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TP4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TP4.dir/flags.make

CMakeFiles/TP4.dir/main2.c.obj: CMakeFiles/TP4.dir/flags.make
CMakeFiles/TP4.dir/main2.c.obj: C:/Users/ntrem/ECE/Info/TP/main2.c
CMakeFiles/TP4.dir/main2.c.obj: CMakeFiles/TP4.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\ntrem\ECE\Info\TP\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TP4.dir/main2.c.obj"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TP4.dir/main2.c.obj -MF CMakeFiles\TP4.dir\main2.c.obj.d -o CMakeFiles\TP4.dir\main2.c.obj -c C:\Users\ntrem\ECE\Info\TP\main2.c

CMakeFiles/TP4.dir/main2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/TP4.dir/main2.c.i"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\ntrem\ECE\Info\TP\main2.c > CMakeFiles\TP4.dir\main2.c.i

CMakeFiles/TP4.dir/main2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/TP4.dir/main2.c.s"
	C:\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\ntrem\ECE\Info\TP\main2.c -o CMakeFiles\TP4.dir\main2.c.s

# Object files for target TP4
TP4_OBJECTS = \
"CMakeFiles/TP4.dir/main2.c.obj"

# External object files for target TP4
TP4_EXTERNAL_OBJECTS =

TP4.exe: CMakeFiles/TP4.dir/main2.c.obj
TP4.exe: CMakeFiles/TP4.dir/build.make
TP4.exe: CMakeFiles/TP4.dir/linkLibs.rsp
TP4.exe: CMakeFiles/TP4.dir/objects1.rsp
TP4.exe: CMakeFiles/TP4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\ntrem\ECE\Info\TP\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable TP4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TP4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TP4.dir/build: TP4.exe
.PHONY : CMakeFiles/TP4.dir/build

CMakeFiles/TP4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TP4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TP4.dir/clean

CMakeFiles/TP4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\ntrem\ECE\Info\TP C:\Users\ntrem\ECE\Info\TP C:\Users\ntrem\ECE\Info\TP\build C:\Users\ntrem\ECE\Info\TP\build C:\Users\ntrem\ECE\Info\TP\build\CMakeFiles\TP4.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/TP4.dir/depend

