# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Freek\CLionProjects\testing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Freek\CLionProjects\testing

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	"C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E echo "No interactive CMake dialog available."
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\Freek\CLionProjects\testing\CMakeFiles C:\Users\Freek\CLionProjects\testing\CMakeFiles\progress.marks
	$(MAKE) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\Freek\CLionProjects\testing\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named testing

# Build rule for target.
testing: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 testing
.PHONY : testing

# fast build rule for target.
testing/fast:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/build
.PHONY : testing/fast

Ball.obj: Ball.cpp.obj

.PHONY : Ball.obj

# target to build an object file
Ball.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/Ball.cpp.obj
.PHONY : Ball.cpp.obj

Ball.i: Ball.cpp.i

.PHONY : Ball.i

# target to preprocess a source file
Ball.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/Ball.cpp.i
.PHONY : Ball.cpp.i

Ball.s: Ball.cpp.s

.PHONY : Ball.s

# target to generate assembly for a file
Ball.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/Ball.cpp.s
.PHONY : Ball.cpp.s

Entity.obj: Entity.cpp.obj

.PHONY : Entity.obj

# target to build an object file
Entity.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/Entity.cpp.obj
.PHONY : Entity.cpp.obj

Entity.i: Entity.cpp.i

.PHONY : Entity.i

# target to preprocess a source file
Entity.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/Entity.cpp.i
.PHONY : Entity.cpp.i

Entity.s: Entity.cpp.s

.PHONY : Entity.s

# target to generate assembly for a file
Entity.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/Entity.cpp.s
.PHONY : Entity.cpp.s

GameState.obj: GameState.cpp.obj

.PHONY : GameState.obj

# target to build an object file
GameState.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/GameState.cpp.obj
.PHONY : GameState.cpp.obj

GameState.i: GameState.cpp.i

.PHONY : GameState.i

# target to preprocess a source file
GameState.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/GameState.cpp.i
.PHONY : GameState.cpp.i

GameState.s: GameState.cpp.s

.PHONY : GameState.s

# target to generate assembly for a file
GameState.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/GameState.cpp.s
.PHONY : GameState.cpp.s

MainGame.obj: MainGame.cpp.obj

.PHONY : MainGame.obj

# target to build an object file
MainGame.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/MainGame.cpp.obj
.PHONY : MainGame.cpp.obj

MainGame.i: MainGame.cpp.i

.PHONY : MainGame.i

# target to preprocess a source file
MainGame.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/MainGame.cpp.i
.PHONY : MainGame.cpp.i

MainGame.s: MainGame.cpp.s

.PHONY : MainGame.s

# target to generate assembly for a file
MainGame.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/MainGame.cpp.s
.PHONY : MainGame.cpp.s

MainMenu.obj: MainMenu.cpp.obj

.PHONY : MainMenu.obj

# target to build an object file
MainMenu.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/MainMenu.cpp.obj
.PHONY : MainMenu.cpp.obj

MainMenu.i: MainMenu.cpp.i

.PHONY : MainMenu.i

# target to preprocess a source file
MainMenu.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/MainMenu.cpp.i
.PHONY : MainMenu.cpp.i

MainMenu.s: MainMenu.cpp.s

.PHONY : MainMenu.s

# target to generate assembly for a file
MainMenu.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/MainMenu.cpp.s
.PHONY : MainMenu.cpp.s

Player.obj: Player.cpp.obj

.PHONY : Player.obj

# target to build an object file
Player.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/Player.cpp.obj
.PHONY : Player.cpp.obj

Player.i: Player.cpp.i

.PHONY : Player.i

# target to preprocess a source file
Player.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/Player.cpp.i
.PHONY : Player.cpp.i

Player.s: Player.cpp.s

.PHONY : Player.s

# target to generate assembly for a file
Player.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/Player.cpp.s
.PHONY : Player.cpp.s

Score.obj: Score.cpp.obj

.PHONY : Score.obj

# target to build an object file
Score.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/Score.cpp.obj
.PHONY : Score.cpp.obj

Score.i: Score.cpp.i

.PHONY : Score.i

# target to preprocess a source file
Score.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/Score.cpp.i
.PHONY : Score.cpp.i

Score.s: Score.cpp.s

.PHONY : Score.s

# target to generate assembly for a file
Score.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/Score.cpp.s
.PHONY : Score.cpp.s

main.obj: main.cpp.obj

.PHONY : main.obj

# target to build an object file
main.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/main.cpp.obj
.PHONY : main.cpp.obj

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/main.cpp.s
.PHONY : main.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... testing
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... Ball.obj
	@echo ... Ball.i
	@echo ... Ball.s
	@echo ... Entity.obj
	@echo ... Entity.i
	@echo ... Entity.s
	@echo ... GameState.obj
	@echo ... GameState.i
	@echo ... GameState.s
	@echo ... MainGame.obj
	@echo ... MainGame.i
	@echo ... MainGame.s
	@echo ... MainMenu.obj
	@echo ... MainMenu.i
	@echo ... MainMenu.s
	@echo ... Player.obj
	@echo ... Player.i
	@echo ... Player.s
	@echo ... Score.obj
	@echo ... Score.i
	@echo ... Score.s
	@echo ... main.obj
	@echo ... main.i
	@echo ... main.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system

