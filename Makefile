# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /home/thibaut/Documents/CLion-2018.2.4/clion-2018.2.4/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/thibaut/Documents/CLion-2018.2.4/clion-2018.2.4/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/thibaut/CLionProjects/Wof

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/thibaut/CLionProjects/Wof

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/home/thibaut/Documents/CLion-2018.2.4/clion-2018.2.4/bin/cmake/linux/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/home/thibaut/Documents/CLion-2018.2.4/clion-2018.2.4/bin/cmake/linux/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/thibaut/CLionProjects/Wof/CMakeFiles /home/thibaut/CLionProjects/Wof/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/thibaut/CLionProjects/Wof/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named wof

# Build rule for target.
wof: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 wof
.PHONY : wof

# fast build rule for target.
wof/fast:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/build
.PHONY : wof/fast

src/CollisionManager.o: src/CollisionManager.cpp.o

.PHONY : src/CollisionManager.o

# target to build an object file
src/CollisionManager.cpp.o:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/CollisionManager.cpp.o
.PHONY : src/CollisionManager.cpp.o

src/CollisionManager.i: src/CollisionManager.cpp.i

.PHONY : src/CollisionManager.i

# target to preprocess a source file
src/CollisionManager.cpp.i:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/CollisionManager.cpp.i
.PHONY : src/CollisionManager.cpp.i

src/CollisionManager.s: src/CollisionManager.cpp.s

.PHONY : src/CollisionManager.s

# target to generate assembly for a file
src/CollisionManager.cpp.s:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/CollisionManager.cpp.s
.PHONY : src/CollisionManager.cpp.s

src/Entities/Ball.o: src/Entities/Ball.cpp.o

.PHONY : src/Entities/Ball.o

# target to build an object file
src/Entities/Ball.cpp.o:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/Entities/Ball.cpp.o
.PHONY : src/Entities/Ball.cpp.o

src/Entities/Ball.i: src/Entities/Ball.cpp.i

.PHONY : src/Entities/Ball.i

# target to preprocess a source file
src/Entities/Ball.cpp.i:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/Entities/Ball.cpp.i
.PHONY : src/Entities/Ball.cpp.i

src/Entities/Ball.s: src/Entities/Ball.cpp.s

.PHONY : src/Entities/Ball.s

# target to generate assembly for a file
src/Entities/Ball.cpp.s:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/Entities/Ball.cpp.s
.PHONY : src/Entities/Ball.cpp.s

src/Entities/Entity.o: src/Entities/Entity.cpp.o

.PHONY : src/Entities/Entity.o

# target to build an object file
src/Entities/Entity.cpp.o:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/Entities/Entity.cpp.o
.PHONY : src/Entities/Entity.cpp.o

src/Entities/Entity.i: src/Entities/Entity.cpp.i

.PHONY : src/Entities/Entity.i

# target to preprocess a source file
src/Entities/Entity.cpp.i:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/Entities/Entity.cpp.i
.PHONY : src/Entities/Entity.cpp.i

src/Entities/Entity.s: src/Entities/Entity.cpp.s

.PHONY : src/Entities/Entity.s

# target to generate assembly for a file
src/Entities/Entity.cpp.s:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/Entities/Entity.cpp.s
.PHONY : src/Entities/Entity.cpp.s

src/Entities/Player.o: src/Entities/Player.cpp.o

.PHONY : src/Entities/Player.o

# target to build an object file
src/Entities/Player.cpp.o:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/Entities/Player.cpp.o
.PHONY : src/Entities/Player.cpp.o

src/Entities/Player.i: src/Entities/Player.cpp.i

.PHONY : src/Entities/Player.i

# target to preprocess a source file
src/Entities/Player.cpp.i:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/Entities/Player.cpp.i
.PHONY : src/Entities/Player.cpp.i

src/Entities/Player.s: src/Entities/Player.cpp.s

.PHONY : src/Entities/Player.s

# target to generate assembly for a file
src/Entities/Player.cpp.s:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/Entities/Player.cpp.s
.PHONY : src/Entities/Player.cpp.s

src/States/GameState.o: src/States/GameState.cpp.o

.PHONY : src/States/GameState.o

# target to build an object file
src/States/GameState.cpp.o:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/States/GameState.cpp.o
.PHONY : src/States/GameState.cpp.o

src/States/GameState.i: src/States/GameState.cpp.i

.PHONY : src/States/GameState.i

# target to preprocess a source file
src/States/GameState.cpp.i:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/States/GameState.cpp.i
.PHONY : src/States/GameState.cpp.i

src/States/GameState.s: src/States/GameState.cpp.s

.PHONY : src/States/GameState.s

# target to generate assembly for a file
src/States/GameState.cpp.s:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/States/GameState.cpp.s
.PHONY : src/States/GameState.cpp.s

src/States/MainGame.o: src/States/MainGame.cpp.o

.PHONY : src/States/MainGame.o

# target to build an object file
src/States/MainGame.cpp.o:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/States/MainGame.cpp.o
.PHONY : src/States/MainGame.cpp.o

src/States/MainGame.i: src/States/MainGame.cpp.i

.PHONY : src/States/MainGame.i

# target to preprocess a source file
src/States/MainGame.cpp.i:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/States/MainGame.cpp.i
.PHONY : src/States/MainGame.cpp.i

src/States/MainGame.s: src/States/MainGame.cpp.s

.PHONY : src/States/MainGame.s

# target to generate assembly for a file
src/States/MainGame.cpp.s:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/States/MainGame.cpp.s
.PHONY : src/States/MainGame.cpp.s

src/States/MainMenu.o: src/States/MainMenu.cpp.o

.PHONY : src/States/MainMenu.o

# target to build an object file
src/States/MainMenu.cpp.o:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/States/MainMenu.cpp.o
.PHONY : src/States/MainMenu.cpp.o

src/States/MainMenu.i: src/States/MainMenu.cpp.i

.PHONY : src/States/MainMenu.i

# target to preprocess a source file
src/States/MainMenu.cpp.i:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/States/MainMenu.cpp.i
.PHONY : src/States/MainMenu.cpp.i

src/States/MainMenu.s: src/States/MainMenu.cpp.s

.PHONY : src/States/MainMenu.s

# target to generate assembly for a file
src/States/MainMenu.cpp.s:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/States/MainMenu.cpp.s
.PHONY : src/States/MainMenu.cpp.s

src/States/Settings.o: src/States/Settings.cpp.o

.PHONY : src/States/Settings.o

# target to build an object file
src/States/Settings.cpp.o:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/States/Settings.cpp.o
.PHONY : src/States/Settings.cpp.o

src/States/Settings.i: src/States/Settings.cpp.i

.PHONY : src/States/Settings.i

# target to preprocess a source file
src/States/Settings.cpp.i:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/States/Settings.cpp.i
.PHONY : src/States/Settings.cpp.i

src/States/Settings.s: src/States/Settings.cpp.s

.PHONY : src/States/Settings.s

# target to generate assembly for a file
src/States/Settings.cpp.s:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/States/Settings.cpp.s
.PHONY : src/States/Settings.cpp.s

src/UI/Countdown.o: src/UI/Countdown.cpp.o

.PHONY : src/UI/Countdown.o

# target to build an object file
src/UI/Countdown.cpp.o:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/UI/Countdown.cpp.o
.PHONY : src/UI/Countdown.cpp.o

src/UI/Countdown.i: src/UI/Countdown.cpp.i

.PHONY : src/UI/Countdown.i

# target to preprocess a source file
src/UI/Countdown.cpp.i:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/UI/Countdown.cpp.i
.PHONY : src/UI/Countdown.cpp.i

src/UI/Countdown.s: src/UI/Countdown.cpp.s

.PHONY : src/UI/Countdown.s

# target to generate assembly for a file
src/UI/Countdown.cpp.s:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/UI/Countdown.cpp.s
.PHONY : src/UI/Countdown.cpp.s

src/UI/Score.o: src/UI/Score.cpp.o

.PHONY : src/UI/Score.o

# target to build an object file
src/UI/Score.cpp.o:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/UI/Score.cpp.o
.PHONY : src/UI/Score.cpp.o

src/UI/Score.i: src/UI/Score.cpp.i

.PHONY : src/UI/Score.i

# target to preprocess a source file
src/UI/Score.cpp.i:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/UI/Score.cpp.i
.PHONY : src/UI/Score.cpp.i

src/UI/Score.s: src/UI/Score.cpp.s

.PHONY : src/UI/Score.s

# target to generate assembly for a file
src/UI/Score.cpp.s:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/UI/Score.cpp.s
.PHONY : src/UI/Score.cpp.s

src/UI/Selector.o: src/UI/Selector.cpp.o

.PHONY : src/UI/Selector.o

# target to build an object file
src/UI/Selector.cpp.o:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/UI/Selector.cpp.o
.PHONY : src/UI/Selector.cpp.o

src/UI/Selector.i: src/UI/Selector.cpp.i

.PHONY : src/UI/Selector.i

# target to preprocess a source file
src/UI/Selector.cpp.i:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/UI/Selector.cpp.i
.PHONY : src/UI/Selector.cpp.i

src/UI/Selector.s: src/UI/Selector.cpp.s

.PHONY : src/UI/Selector.s

# target to generate assembly for a file
src/UI/Selector.cpp.s:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/UI/Selector.cpp.s
.PHONY : src/UI/Selector.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/wof.dir/build.make CMakeFiles/wof.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... wof"
	@echo "... src/CollisionManager.o"
	@echo "... src/CollisionManager.i"
	@echo "... src/CollisionManager.s"
	@echo "... src/Entities/Ball.o"
	@echo "... src/Entities/Ball.i"
	@echo "... src/Entities/Ball.s"
	@echo "... src/Entities/Entity.o"
	@echo "... src/Entities/Entity.i"
	@echo "... src/Entities/Entity.s"
	@echo "... src/Entities/Player.o"
	@echo "... src/Entities/Player.i"
	@echo "... src/Entities/Player.s"
	@echo "... src/States/GameState.o"
	@echo "... src/States/GameState.i"
	@echo "... src/States/GameState.s"
	@echo "... src/States/MainGame.o"
	@echo "... src/States/MainGame.i"
	@echo "... src/States/MainGame.s"
	@echo "... src/States/MainMenu.o"
	@echo "... src/States/MainMenu.i"
	@echo "... src/States/MainMenu.s"
	@echo "... src/States/Settings.o"
	@echo "... src/States/Settings.i"
	@echo "... src/States/Settings.s"
	@echo "... src/UI/Countdown.o"
	@echo "... src/UI/Countdown.i"
	@echo "... src/UI/Countdown.s"
	@echo "... src/UI/Score.o"
	@echo "... src/UI/Score.i"
	@echo "... src/UI/Score.s"
	@echo "... src/UI/Selector.o"
	@echo "... src/UI/Selector.i"
	@echo "... src/UI/Selector.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

