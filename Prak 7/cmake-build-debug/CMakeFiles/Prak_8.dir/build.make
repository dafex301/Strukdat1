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
CMAKE_SOURCE_DIR = "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Prak_8.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Prak_8.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Prak_8.dir/flags.make

CMakeFiles/Prak_8.dir/list1.c.obj: CMakeFiles/Prak_8.dir/flags.make
CMakeFiles/Prak_8.dir/list1.c.obj: CMakeFiles/Prak_8.dir/includes_C.rsp
CMakeFiles/Prak_8.dir/list1.c.obj: ../list1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Prak_8.dir/list1.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Prak_8.dir\list1.c.obj -c "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\list1.c"

CMakeFiles/Prak_8.dir/list1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Prak_8.dir/list1.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\list1.c" > CMakeFiles\Prak_8.dir\list1.c.i

CMakeFiles/Prak_8.dir/list1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Prak_8.dir/list1.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\list1.c" -o CMakeFiles\Prak_8.dir\list1.c.s

CMakeFiles/Prak_8.dir/mainlist1.c.obj: CMakeFiles/Prak_8.dir/flags.make
CMakeFiles/Prak_8.dir/mainlist1.c.obj: CMakeFiles/Prak_8.dir/includes_C.rsp
CMakeFiles/Prak_8.dir/mainlist1.c.obj: ../mainlist1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Prak_8.dir/mainlist1.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Prak_8.dir\mainlist1.c.obj -c "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\mainlist1.c"

CMakeFiles/Prak_8.dir/mainlist1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Prak_8.dir/mainlist1.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\mainlist1.c" > CMakeFiles\Prak_8.dir\mainlist1.c.i

CMakeFiles/Prak_8.dir/mainlist1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Prak_8.dir/mainlist1.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\mainlist1.c" -o CMakeFiles\Prak_8.dir\mainlist1.c.s

# Object files for target Prak_8
Prak_8_OBJECTS = \
"CMakeFiles/Prak_8.dir/list1.c.obj" \
"CMakeFiles/Prak_8.dir/mainlist1.c.obj"

# External object files for target Prak_8
Prak_8_EXTERNAL_OBJECTS =

Prak_8.exe: CMakeFiles/Prak_8.dir/list1.c.obj
Prak_8.exe: CMakeFiles/Prak_8.dir/mainlist1.c.obj
Prak_8.exe: CMakeFiles/Prak_8.dir/build.make
Prak_8.exe: CMakeFiles/Prak_8.dir/linklibs.rsp
Prak_8.exe: CMakeFiles/Prak_8.dir/objects1.rsp
Prak_8.exe: CMakeFiles/Prak_8.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Prak_8.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Prak_8.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Prak_8.dir/build: Prak_8.exe
.PHONY : CMakeFiles/Prak_8.dir/build

CMakeFiles/Prak_8.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Prak_8.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Prak_8.dir/clean

CMakeFiles/Prak_8.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8" "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8" "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\cmake-build-debug" "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\cmake-build-debug" "C:\DATA\Code\PRAKTIKUM STRUKDAT\Prak 8\cmake-build-debug\CMakeFiles\Prak_8.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Prak_8.dir/depend
