# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/liujian/CLionProjects/nowcoder23/bm_total

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/liujian/CLionProjects/nowcoder23/bm_total/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/bm_total.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/bm_total.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/bm_total.dir/flags.make

CMakeFiles/bm_total.dir/main.cpp.o: CMakeFiles/bm_total.dir/flags.make
CMakeFiles/bm_total.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/liujian/CLionProjects/nowcoder23/bm_total/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/bm_total.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/bm_total.dir/main.cpp.o -c /Users/liujian/CLionProjects/nowcoder23/bm_total/main.cpp

CMakeFiles/bm_total.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/bm_total.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/liujian/CLionProjects/nowcoder23/bm_total/main.cpp > CMakeFiles/bm_total.dir/main.cpp.i

CMakeFiles/bm_total.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/bm_total.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/liujian/CLionProjects/nowcoder23/bm_total/main.cpp -o CMakeFiles/bm_total.dir/main.cpp.s

# Object files for target bm_total
bm_total_OBJECTS = \
"CMakeFiles/bm_total.dir/main.cpp.o"

# External object files for target bm_total
bm_total_EXTERNAL_OBJECTS =

bm_total: CMakeFiles/bm_total.dir/main.cpp.o
bm_total: CMakeFiles/bm_total.dir/build.make
bm_total: CMakeFiles/bm_total.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/liujian/CLionProjects/nowcoder23/bm_total/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable bm_total"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bm_total.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/bm_total.dir/build: bm_total

.PHONY : CMakeFiles/bm_total.dir/build

CMakeFiles/bm_total.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/bm_total.dir/cmake_clean.cmake
.PHONY : CMakeFiles/bm_total.dir/clean

CMakeFiles/bm_total.dir/depend:
	cd /Users/liujian/CLionProjects/nowcoder23/bm_total/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/liujian/CLionProjects/nowcoder23/bm_total /Users/liujian/CLionProjects/nowcoder23/bm_total /Users/liujian/CLionProjects/nowcoder23/bm_total/cmake-build-debug /Users/liujian/CLionProjects/nowcoder23/bm_total/cmake-build-debug /Users/liujian/CLionProjects/nowcoder23/bm_total/cmake-build-debug/CMakeFiles/bm_total.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/bm_total.dir/depend

