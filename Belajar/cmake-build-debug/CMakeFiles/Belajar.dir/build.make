# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\DATA\Code\PRAKTIKUM STRUKDAT\Belajar"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\DATA\Code\PRAKTIKUM STRUKDAT\Belajar\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Belajar.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Belajar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Belajar.dir/flags.make

CMakeFiles/Belajar.dir/single-linked-list.c.obj: CMakeFiles/Belajar.dir/flags.make
CMakeFiles/Belajar.dir/single-linked-list.c.obj: CMakeFiles/Belajar.dir/includes_C.rsp
CMakeFiles/Belajar.dir/single-linked-list.c.obj: ../single-linked-list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\DATA\Code\PRAKTIKUM STRUKDAT\Belajar\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Belajar.dir/single-linked-list.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Belajar.dir\single-linked-list.c.obj -c "C:\DATA\Code\PRAKTIKUM STRUKDAT\Belajar\single-linked-list.c"

CMakeFiles/Belajar.dir/single-linked-list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Belajar.dir/single-linked-list.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\DATA\Code\PRAKTIKUM STRUKDAT\Belajar\single-linked-list.c" > CMakeFiles\Belajar.dir\single-linked-list.c.i

CMakeFiles/Belajar.dir/single-linked-list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Belajar.dir/single-linked-list.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\DATA\Code\PRAKTIKUM STRUKDAT\Belajar\single-linked-list.c" -o CMakeFiles\Belajar.dir\single-linked-list.c.s

# Object files for target Belajar
Belajar_OBJECTS = \
"CMakeFiles/Belajar.dir/single-linked-list.c.obj"

# External object files for target Belajar
Belajar_EXTERNAL_OBJECTS =

Belajar.exe: CMakeFiles/Belajar.dir/single-linked-list.c.obj
Belajar.exe: CMakeFiles/Belajar.dir/build.make
Belajar.exe: CMakeFiles/Belajar.dir/linklibs.rsp
Belajar.exe: CMakeFiles/Belajar.dir/objects1.rsp
Belajar.exe: CMakeFiles/Belajar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\DATA\Code\PRAKTIKUM STRUKDAT\Belajar\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Belajar.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Belajar.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Belajar.dir/build: Belajar.exe
.PHONY : CMakeFiles/Belajar.dir/build

CMakeFiles/Belajar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Belajar.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Belajar.dir/clean

CMakeFiles/Belajar.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\DATA\Code\PRAKTIKUM STRUKDAT\Belajar" "C:\DATA\Code\PRAKTIKUM STRUKDAT\Belajar" "C:\DATA\Code\PRAKTIKUM STRUKDAT\Belajar\cmake-build-debug" "C:\DATA\Code\PRAKTIKUM STRUKDAT\Belajar\cmake-build-debug" "C:\DATA\Code\PRAKTIKUM STRUKDAT\Belajar\cmake-build-debug\CMakeFiles\Belajar.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Belajar.dir/depend
