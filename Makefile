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

src/CollisionManager.obj: src/CollisionManager.cpp.obj

.PHONY : src/CollisionManager.obj

# target to build an object file
src/CollisionManager.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/CollisionManager.cpp.obj
.PHONY : src/CollisionManager.cpp.obj

src/CollisionManager.i: src/CollisionManager.cpp.i

.PHONY : src/CollisionManager.i

# target to preprocess a source file
src/CollisionManager.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/CollisionManager.cpp.i
.PHONY : src/CollisionManager.cpp.i

src/CollisionManager.s: src/CollisionManager.cpp.s

.PHONY : src/CollisionManager.s

# target to generate assembly for a file
src/CollisionManager.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/CollisionManager.cpp.s
.PHONY : src/CollisionManager.cpp.s

src/Entities/Ball.obj: src/Entities/Ball.cpp.obj

.PHONY : src/Entities/Ball.obj

# target to build an object file
src/Entities/Ball.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/Entities/Ball.cpp.obj
.PHONY : src/Entities/Ball.cpp.obj

src/Entities/Ball.i: src/Entities/Ball.cpp.i

.PHONY : src/Entities/Ball.i

# target to preprocess a source file
src/Entities/Ball.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/Entities/Ball.cpp.i
.PHONY : src/Entities/Ball.cpp.i

src/Entities/Ball.s: src/Entities/Ball.cpp.s

.PHONY : src/Entities/Ball.s

# target to generate assembly for a file
src/Entities/Ball.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/Entities/Ball.cpp.s
.PHONY : src/Entities/Ball.cpp.s

src/Entities/Entity.obj: src/Entities/Entity.cpp.obj

.PHONY : src/Entities/Entity.obj

# target to build an object file
src/Entities/Entity.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/Entities/Entity.cpp.obj
.PHONY : src/Entities/Entity.cpp.obj

src/Entities/Entity.i: src/Entities/Entity.cpp.i

.PHONY : src/Entities/Entity.i

# target to preprocess a source file
src/Entities/Entity.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/Entities/Entity.cpp.i
.PHONY : src/Entities/Entity.cpp.i

src/Entities/Entity.s: src/Entities/Entity.cpp.s

.PHONY : src/Entities/Entity.s

# target to generate assembly for a file
src/Entities/Entity.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/Entities/Entity.cpp.s
.PHONY : src/Entities/Entity.cpp.s

src/Entities/Player.obj: src/Entities/Player.cpp.obj

.PHONY : src/Entities/Player.obj

# target to build an object file
src/Entities/Player.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/Entities/Player.cpp.obj
.PHONY : src/Entities/Player.cpp.obj

src/Entities/Player.i: src/Entities/Player.cpp.i

.PHONY : src/Entities/Player.i

# target to preprocess a source file
src/Entities/Player.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/Entities/Player.cpp.i
.PHONY : src/Entities/Player.cpp.i

src/Entities/Player.s: src/Entities/Player.cpp.s

.PHONY : src/Entities/Player.s

# target to generate assembly for a file
src/Entities/Player.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/Entities/Player.cpp.s
.PHONY : src/Entities/Player.cpp.s

src/States/GameState.obj: src/States/GameState.cpp.obj

.PHONY : src/States/GameState.obj

# target to build an object file
src/States/GameState.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/States/GameState.cpp.obj
.PHONY : src/States/GameState.cpp.obj

src/States/GameState.i: src/States/GameState.cpp.i

.PHONY : src/States/GameState.i

# target to preprocess a source file
src/States/GameState.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/States/GameState.cpp.i
.PHONY : src/States/GameState.cpp.i

src/States/GameState.s: src/States/GameState.cpp.s

.PHONY : src/States/GameState.s

# target to generate assembly for a file
src/States/GameState.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/States/GameState.cpp.s
.PHONY : src/States/GameState.cpp.s

src/States/MainGame.obj: src/States/MainGame.cpp.obj

.PHONY : src/States/MainGame.obj

# target to build an object file
src/States/MainGame.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/States/MainGame.cpp.obj
.PHONY : src/States/MainGame.cpp.obj

src/States/MainGame.i: src/States/MainGame.cpp.i

.PHONY : src/States/MainGame.i

# target to preprocess a source file
src/States/MainGame.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/States/MainGame.cpp.i
.PHONY : src/States/MainGame.cpp.i

src/States/MainGame.s: src/States/MainGame.cpp.s

.PHONY : src/States/MainGame.s

# target to generate assembly for a file
src/States/MainGame.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/States/MainGame.cpp.s
.PHONY : src/States/MainGame.cpp.s

src/States/MainMenu.obj: src/States/MainMenu.cpp.obj

.PHONY : src/States/MainMenu.obj

# target to build an object file
src/States/MainMenu.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/States/MainMenu.cpp.obj
.PHONY : src/States/MainMenu.cpp.obj

src/States/MainMenu.i: src/States/MainMenu.cpp.i

.PHONY : src/States/MainMenu.i

# target to preprocess a source file
src/States/MainMenu.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/States/MainMenu.cpp.i
.PHONY : src/States/MainMenu.cpp.i

src/States/MainMenu.s: src/States/MainMenu.cpp.s

.PHONY : src/States/MainMenu.s

# target to generate assembly for a file
src/States/MainMenu.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/States/MainMenu.cpp.s
.PHONY : src/States/MainMenu.cpp.s

src/States/Settings.obj: src/States/Settings.cpp.obj

.PHONY : src/States/Settings.obj

# target to build an object file
src/States/Settings.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/States/Settings.cpp.obj
.PHONY : src/States/Settings.cpp.obj

src/States/Settings.i: src/States/Settings.cpp.i

.PHONY : src/States/Settings.i

# target to preprocess a source file
src/States/Settings.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/States/Settings.cpp.i
.PHONY : src/States/Settings.cpp.i

src/States/Settings.s: src/States/Settings.cpp.s

.PHONY : src/States/Settings.s

# target to generate assembly for a file
src/States/Settings.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/States/Settings.cpp.s
.PHONY : src/States/Settings.cpp.s

src/UI/Countdown.obj: src/UI/Countdown.cpp.obj

.PHONY : src/UI/Countdown.obj

# target to build an object file
src/UI/Countdown.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/UI/Countdown.cpp.obj
.PHONY : src/UI/Countdown.cpp.obj

src/UI/Countdown.i: src/UI/Countdown.cpp.i

.PHONY : src/UI/Countdown.i

# target to preprocess a source file
src/UI/Countdown.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/UI/Countdown.cpp.i
.PHONY : src/UI/Countdown.cpp.i

src/UI/Countdown.s: src/UI/Countdown.cpp.s

.PHONY : src/UI/Countdown.s

# target to generate assembly for a file
src/UI/Countdown.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/UI/Countdown.cpp.s
.PHONY : src/UI/Countdown.cpp.s

src/UI/Score.obj: src/UI/Score.cpp.obj

.PHONY : src/UI/Score.obj

# target to build an object file
src/UI/Score.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/UI/Score.cpp.obj
.PHONY : src/UI/Score.cpp.obj

src/UI/Score.i: src/UI/Score.cpp.i

.PHONY : src/UI/Score.i

# target to preprocess a source file
src/UI/Score.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/UI/Score.cpp.i
.PHONY : src/UI/Score.cpp.i

src/UI/Score.s: src/UI/Score.cpp.s

.PHONY : src/UI/Score.s

# target to generate assembly for a file
src/UI/Score.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/UI/Score.cpp.s
.PHONY : src/UI/Score.cpp.s

src/UI/Selector.obj: src/UI/Selector.cpp.obj

.PHONY : src/UI/Selector.obj

# target to build an object file
src/UI/Selector.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/UI/Selector.cpp.obj
.PHONY : src/UI/Selector.cpp.obj

src/UI/Selector.i: src/UI/Selector.cpp.i

.PHONY : src/UI/Selector.i

# target to preprocess a source file
src/UI/Selector.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/UI/Selector.cpp.i
.PHONY : src/UI/Selector.cpp.i

src/UI/Selector.s: src/UI/Selector.cpp.s

.PHONY : src/UI/Selector.s

# target to generate assembly for a file
src/UI/Selector.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/UI/Selector.cpp.s
.PHONY : src/UI/Selector.cpp.s

src/main.obj: src/main.cpp.obj

.PHONY : src/main.obj

# target to build an object file
src/main.cpp.obj:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/main.cpp.obj
.PHONY : src/main.cpp.obj

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles\testing.dir\build.make CMakeFiles/testing.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... testing
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... src/CollisionManager.obj
	@echo ... src/CollisionManager.i
	@echo ... src/CollisionManager.s
	@echo ... src/Entities/Ball.obj
	@echo ... src/Entities/Ball.i
	@echo ... src/Entities/Ball.s
	@echo ... src/Entities/Entity.obj
	@echo ... src/Entities/Entity.i
	@echo ... src/Entities/Entity.s
	@echo ... src/Entities/Player.obj
	@echo ... src/Entities/Player.i
	@echo ... src/Entities/Player.s
	@echo ... src/States/GameState.obj
	@echo ... src/States/GameState.i
	@echo ... src/States/GameState.s
	@echo ... src/States/MainGame.obj
	@echo ... src/States/MainGame.i
	@echo ... src/States/MainGame.s
	@echo ... src/States/MainMenu.obj
	@echo ... src/States/MainMenu.i
	@echo ... src/States/MainMenu.s
	@echo ... src/States/Settings.obj
	@echo ... src/States/Settings.i
	@echo ... src/States/Settings.s
	@echo ... src/UI/Countdown.obj
	@echo ... src/UI/Countdown.i
	@echo ... src/UI/Countdown.s
	@echo ... src/UI/Score.obj
	@echo ... src/UI/Score.i
	@echo ... src/UI/Score.s
	@echo ... src/UI/Selector.obj
	@echo ... src/UI/Selector.i
	@echo ... src/UI/Selector.s
	@echo ... src/main.obj
	@echo ... src/main.i
	@echo ... src/main.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system

