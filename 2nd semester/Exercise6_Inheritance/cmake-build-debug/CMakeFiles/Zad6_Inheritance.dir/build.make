# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "D:\Programy\Jetbrain Toolbox\apps\CLion\ch-0\211.6693.114\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programy\Jetbrain Toolbox\apps\CLion\ch-0\211.6693.114\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Dysk Google\NAUKA\KODOWANIE\.GitHub Repositories\Isnt-CPP-just-a-D\2nd semester\Exercise6_Inheritance"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Dysk Google\NAUKA\KODOWANIE\.GitHub Repositories\Isnt-CPP-just-a-D\2nd semester\Exercise6_Inheritance\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Zad6_Inheritance.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Zad6_Inheritance.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Zad6_Inheritance.dir/flags.make

CMakeFiles/Zad6_Inheritance.dir/main.cpp.obj: CMakeFiles/Zad6_Inheritance.dir/flags.make
CMakeFiles/Zad6_Inheritance.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Dysk Google\NAUKA\KODOWANIE\.GitHub Repositories\Isnt-CPP-just-a-D\2nd semester\Exercise6_Inheritance\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Zad6_Inheritance.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Zad6_Inheritance.dir\main.cpp.obj -c "D:\Dysk Google\NAUKA\KODOWANIE\.GitHub Repositories\Isnt-CPP-just-a-D\2nd semester\Exercise6_Inheritance\main.cpp"

CMakeFiles/Zad6_Inheritance.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zad6_Inheritance.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Dysk Google\NAUKA\KODOWANIE\.GitHub Repositories\Isnt-CPP-just-a-D\2nd semester\Exercise6_Inheritance\main.cpp" > CMakeFiles\Zad6_Inheritance.dir\main.cpp.i

CMakeFiles/Zad6_Inheritance.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zad6_Inheritance.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Dysk Google\NAUKA\KODOWANIE\.GitHub Repositories\Isnt-CPP-just-a-D\2nd semester\Exercise6_Inheritance\main.cpp" -o CMakeFiles\Zad6_Inheritance.dir\main.cpp.s

# Object files for target Zad6_Inheritance
Zad6_Inheritance_OBJECTS = \
"CMakeFiles/Zad6_Inheritance.dir/main.cpp.obj"

# External object files for target Zad6_Inheritance
Zad6_Inheritance_EXTERNAL_OBJECTS =

Zad6_Inheritance.exe: CMakeFiles/Zad6_Inheritance.dir/main.cpp.obj
Zad6_Inheritance.exe: CMakeFiles/Zad6_Inheritance.dir/build.make
Zad6_Inheritance.exe: CMakeFiles/Zad6_Inheritance.dir/linklibs.rsp
Zad6_Inheritance.exe: CMakeFiles/Zad6_Inheritance.dir/objects1.rsp
Zad6_Inheritance.exe: CMakeFiles/Zad6_Inheritance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Dysk Google\NAUKA\KODOWANIE\.GitHub Repositories\Isnt-CPP-just-a-D\2nd semester\Exercise6_Inheritance\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Zad6_Inheritance.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Zad6_Inheritance.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Zad6_Inheritance.dir/build: Zad6_Inheritance.exe

.PHONY : CMakeFiles/Zad6_Inheritance.dir/build

CMakeFiles/Zad6_Inheritance.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Zad6_Inheritance.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Zad6_Inheritance.dir/clean

CMakeFiles/Zad6_Inheritance.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Dysk Google\NAUKA\KODOWANIE\.GitHub Repositories\Isnt-CPP-just-a-D\2nd semester\Exercise6_Inheritance" "D:\Dysk Google\NAUKA\KODOWANIE\.GitHub Repositories\Isnt-CPP-just-a-D\2nd semester\Exercise6_Inheritance" "D:\Dysk Google\NAUKA\KODOWANIE\.GitHub Repositories\Isnt-CPP-just-a-D\2nd semester\Exercise6_Inheritance\cmake-build-debug" "D:\Dysk Google\NAUKA\KODOWANIE\.GitHub Repositories\Isnt-CPP-just-a-D\2nd semester\Exercise6_Inheritance\cmake-build-debug" "D:\Dysk Google\NAUKA\KODOWANIE\.GitHub Repositories\Isnt-CPP-just-a-D\2nd semester\Exercise6_Inheritance\cmake-build-debug\CMakeFiles\Zad6_Inheritance.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Zad6_Inheritance.dir/depend

