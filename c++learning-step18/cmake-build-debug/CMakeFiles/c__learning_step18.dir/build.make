# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = "/Users/wangwei/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.3727.114/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/wangwei/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/173.3727.114/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c__learning_step18.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c__learning_step18.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c__learning_step18.dir/flags.make

CMakeFiles/c__learning_step18.dir/main.cpp.o: CMakeFiles/c__learning_step18.dir/flags.make
CMakeFiles/c__learning_step18.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/c__learning_step18.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/c__learning_step18.dir/main.cpp.o -c /Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18/main.cpp

CMakeFiles/c__learning_step18.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c__learning_step18.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18/main.cpp > CMakeFiles/c__learning_step18.dir/main.cpp.i

CMakeFiles/c__learning_step18.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c__learning_step18.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18/main.cpp -o CMakeFiles/c__learning_step18.dir/main.cpp.s

CMakeFiles/c__learning_step18.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/c__learning_step18.dir/main.cpp.o.requires

CMakeFiles/c__learning_step18.dir/main.cpp.o.provides: CMakeFiles/c__learning_step18.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/c__learning_step18.dir/build.make CMakeFiles/c__learning_step18.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/c__learning_step18.dir/main.cpp.o.provides

CMakeFiles/c__learning_step18.dir/main.cpp.o.provides.build: CMakeFiles/c__learning_step18.dir/main.cpp.o


# Object files for target c__learning_step18
c__learning_step18_OBJECTS = \
"CMakeFiles/c__learning_step18.dir/main.cpp.o"

# External object files for target c__learning_step18
c__learning_step18_EXTERNAL_OBJECTS =

c__learning_step18: CMakeFiles/c__learning_step18.dir/main.cpp.o
c__learning_step18: CMakeFiles/c__learning_step18.dir/build.make
c__learning_step18: CMakeFiles/c__learning_step18.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable c__learning_step18"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c__learning_step18.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c__learning_step18.dir/build: c__learning_step18

.PHONY : CMakeFiles/c__learning_step18.dir/build

CMakeFiles/c__learning_step18.dir/requires: CMakeFiles/c__learning_step18.dir/main.cpp.o.requires

.PHONY : CMakeFiles/c__learning_step18.dir/requires

CMakeFiles/c__learning_step18.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c__learning_step18.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c__learning_step18.dir/clean

CMakeFiles/c__learning_step18.dir/depend:
	cd /Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18 /Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18 /Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18/cmake-build-debug /Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18/cmake-build-debug /Users/wangwei/Documents/002-Tech/0014-c/c-learning/c++learning-step18/cmake-build-debug/CMakeFiles/c__learning_step18.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c__learning_step18.dir/depend

