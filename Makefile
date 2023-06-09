# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sushant/Documents/recipe-qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sushant/Documents/recipe-qt

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	/usr/bin/cmake -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	/usr/bin/cmake -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	/usr/bin/cmake -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

.PHONY : list_install_components/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/sushant/Documents/recipe-qt/CMakeFiles /home/sushant/Documents/recipe-qt/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/sushant/Documents/recipe-qt/CMakeFiles 0
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
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named RecipeBook

# Build rule for target.
RecipeBook: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 RecipeBook
.PHONY : RecipeBook

# fast build rule for target.
RecipeBook/fast:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/build
.PHONY : RecipeBook/fast

#=============================================================================
# Target rules for targets named RecipeBook_autogen

# Build rule for target.
RecipeBook_autogen: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 RecipeBook_autogen
.PHONY : RecipeBook_autogen

# fast build rule for target.
RecipeBook_autogen/fast:
	$(MAKE) -f CMakeFiles/RecipeBook_autogen.dir/build.make CMakeFiles/RecipeBook_autogen.dir/build
.PHONY : RecipeBook_autogen/fast

IncorrectInputException.o: IncorrectInputException.cpp.o

.PHONY : IncorrectInputException.o

# target to build an object file
IncorrectInputException.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/IncorrectInputException.cpp.o
.PHONY : IncorrectInputException.cpp.o

IncorrectInputException.i: IncorrectInputException.cpp.i

.PHONY : IncorrectInputException.i

# target to preprocess a source file
IncorrectInputException.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/IncorrectInputException.cpp.i
.PHONY : IncorrectInputException.cpp.i

IncorrectInputException.s: IncorrectInputException.cpp.s

.PHONY : IncorrectInputException.s

# target to generate assembly for a file
IncorrectInputException.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/IncorrectInputException.cpp.s
.PHONY : IncorrectInputException.cpp.s

RecipeBook_autogen/EWIEGA46WW/qrc_image.o: RecipeBook_autogen/EWIEGA46WW/qrc_image.cpp.o

.PHONY : RecipeBook_autogen/EWIEGA46WW/qrc_image.o

# target to build an object file
RecipeBook_autogen/EWIEGA46WW/qrc_image.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/RecipeBook_autogen/EWIEGA46WW/qrc_image.cpp.o
.PHONY : RecipeBook_autogen/EWIEGA46WW/qrc_image.cpp.o

RecipeBook_autogen/EWIEGA46WW/qrc_image.i: RecipeBook_autogen/EWIEGA46WW/qrc_image.cpp.i

.PHONY : RecipeBook_autogen/EWIEGA46WW/qrc_image.i

# target to preprocess a source file
RecipeBook_autogen/EWIEGA46WW/qrc_image.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/RecipeBook_autogen/EWIEGA46WW/qrc_image.cpp.i
.PHONY : RecipeBook_autogen/EWIEGA46WW/qrc_image.cpp.i

RecipeBook_autogen/EWIEGA46WW/qrc_image.s: RecipeBook_autogen/EWIEGA46WW/qrc_image.cpp.s

.PHONY : RecipeBook_autogen/EWIEGA46WW/qrc_image.s

# target to generate assembly for a file
RecipeBook_autogen/EWIEGA46WW/qrc_image.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/RecipeBook_autogen/EWIEGA46WW/qrc_image.cpp.s
.PHONY : RecipeBook_autogen/EWIEGA46WW/qrc_image.cpp.s

RecipeBook_autogen/mocs_compilation.o: RecipeBook_autogen/mocs_compilation.cpp.o

.PHONY : RecipeBook_autogen/mocs_compilation.o

# target to build an object file
RecipeBook_autogen/mocs_compilation.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/RecipeBook_autogen/mocs_compilation.cpp.o
.PHONY : RecipeBook_autogen/mocs_compilation.cpp.o

RecipeBook_autogen/mocs_compilation.i: RecipeBook_autogen/mocs_compilation.cpp.i

.PHONY : RecipeBook_autogen/mocs_compilation.i

# target to preprocess a source file
RecipeBook_autogen/mocs_compilation.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/RecipeBook_autogen/mocs_compilation.cpp.i
.PHONY : RecipeBook_autogen/mocs_compilation.cpp.i

RecipeBook_autogen/mocs_compilation.s: RecipeBook_autogen/mocs_compilation.cpp.s

.PHONY : RecipeBook_autogen/mocs_compilation.s

# target to generate assembly for a file
RecipeBook_autogen/mocs_compilation.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/RecipeBook_autogen/mocs_compilation.cpp.s
.PHONY : RecipeBook_autogen/mocs_compilation.cpp.s

addallergenwindow.o: addallergenwindow.cpp.o

.PHONY : addallergenwindow.o

# target to build an object file
addallergenwindow.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/addallergenwindow.cpp.o
.PHONY : addallergenwindow.cpp.o

addallergenwindow.i: addallergenwindow.cpp.i

.PHONY : addallergenwindow.i

# target to preprocess a source file
addallergenwindow.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/addallergenwindow.cpp.i
.PHONY : addallergenwindow.cpp.i

addallergenwindow.s: addallergenwindow.cpp.s

.PHONY : addallergenwindow.s

# target to generate assembly for a file
addallergenwindow.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/addallergenwindow.cpp.s
.PHONY : addallergenwindow.cpp.s

addingredientwindow.o: addingredientwindow.cpp.o

.PHONY : addingredientwindow.o

# target to build an object file
addingredientwindow.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/addingredientwindow.cpp.o
.PHONY : addingredientwindow.cpp.o

addingredientwindow.i: addingredientwindow.cpp.i

.PHONY : addingredientwindow.i

# target to preprocess a source file
addingredientwindow.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/addingredientwindow.cpp.i
.PHONY : addingredientwindow.cpp.i

addingredientwindow.s: addingredientwindow.cpp.s

.PHONY : addingredientwindow.s

# target to generate assembly for a file
addingredientwindow.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/addingredientwindow.cpp.s
.PHONY : addingredientwindow.cpp.s

allergen.o: allergen.cpp.o

.PHONY : allergen.o

# target to build an object file
allergen.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/allergen.cpp.o
.PHONY : allergen.cpp.o

allergen.i: allergen.cpp.i

.PHONY : allergen.i

# target to preprocess a source file
allergen.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/allergen.cpp.i
.PHONY : allergen.cpp.i

allergen.s: allergen.cpp.s

.PHONY : allergen.s

# target to generate assembly for a file
allergen.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/allergen.cpp.s
.PHONY : allergen.cpp.s

createrecipewindow.o: createrecipewindow.cpp.o

.PHONY : createrecipewindow.o

# target to build an object file
createrecipewindow.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/createrecipewindow.cpp.o
.PHONY : createrecipewindow.cpp.o

createrecipewindow.i: createrecipewindow.cpp.i

.PHONY : createrecipewindow.i

# target to preprocess a source file
createrecipewindow.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/createrecipewindow.cpp.i
.PHONY : createrecipewindow.cpp.i

createrecipewindow.s: createrecipewindow.cpp.s

.PHONY : createrecipewindow.s

# target to generate assembly for a file
createrecipewindow.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/createrecipewindow.cpp.s
.PHONY : createrecipewindow.cpp.s

editrecipewindow.o: editrecipewindow.cpp.o

.PHONY : editrecipewindow.o

# target to build an object file
editrecipewindow.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/editrecipewindow.cpp.o
.PHONY : editrecipewindow.cpp.o

editrecipewindow.i: editrecipewindow.cpp.i

.PHONY : editrecipewindow.i

# target to preprocess a source file
editrecipewindow.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/editrecipewindow.cpp.i
.PHONY : editrecipewindow.cpp.i

editrecipewindow.s: editrecipewindow.cpp.s

.PHONY : editrecipewindow.s

# target to generate assembly for a file
editrecipewindow.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/editrecipewindow.cpp.s
.PHONY : editrecipewindow.cpp.s

incorrectinputexceptionwindow.o: incorrectinputexceptionwindow.cpp.o

.PHONY : incorrectinputexceptionwindow.o

# target to build an object file
incorrectinputexceptionwindow.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/incorrectinputexceptionwindow.cpp.o
.PHONY : incorrectinputexceptionwindow.cpp.o

incorrectinputexceptionwindow.i: incorrectinputexceptionwindow.cpp.i

.PHONY : incorrectinputexceptionwindow.i

# target to preprocess a source file
incorrectinputexceptionwindow.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/incorrectinputexceptionwindow.cpp.i
.PHONY : incorrectinputexceptionwindow.cpp.i

incorrectinputexceptionwindow.s: incorrectinputexceptionwindow.cpp.s

.PHONY : incorrectinputexceptionwindow.s

# target to generate assembly for a file
incorrectinputexceptionwindow.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/incorrectinputexceptionwindow.cpp.s
.PHONY : incorrectinputexceptionwindow.cpp.s

ingredient.o: ingredient.cpp.o

.PHONY : ingredient.o

# target to build an object file
ingredient.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/ingredient.cpp.o
.PHONY : ingredient.cpp.o

ingredient.i: ingredient.cpp.i

.PHONY : ingredient.i

# target to preprocess a source file
ingredient.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/ingredient.cpp.i
.PHONY : ingredient.cpp.i

ingredient.s: ingredient.cpp.s

.PHONY : ingredient.s

# target to generate assembly for a file
ingredient.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/ingredient.cpp.s
.PHONY : ingredient.cpp.s

main.o: main.cpp.o

.PHONY : main.o

# target to build an object file
main.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/main.cpp.o
.PHONY : main.cpp.o

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/main.cpp.s
.PHONY : main.cpp.s

mainwindow.o: mainwindow.cpp.o

.PHONY : mainwindow.o

# target to build an object file
mainwindow.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/mainwindow.cpp.o
.PHONY : mainwindow.cpp.o

mainwindow.i: mainwindow.cpp.i

.PHONY : mainwindow.i

# target to preprocess a source file
mainwindow.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/mainwindow.cpp.i
.PHONY : mainwindow.cpp.i

mainwindow.s: mainwindow.cpp.s

.PHONY : mainwindow.s

# target to generate assembly for a file
mainwindow.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/mainwindow.cpp.s
.PHONY : mainwindow.cpp.s

recipe.o: recipe.cpp.o

.PHONY : recipe.o

# target to build an object file
recipe.cpp.o:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/recipe.cpp.o
.PHONY : recipe.cpp.o

recipe.i: recipe.cpp.i

.PHONY : recipe.i

# target to preprocess a source file
recipe.cpp.i:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/recipe.cpp.i
.PHONY : recipe.cpp.i

recipe.s: recipe.cpp.s

.PHONY : recipe.s

# target to generate assembly for a file
recipe.cpp.s:
	$(MAKE) -f CMakeFiles/RecipeBook.dir/build.make CMakeFiles/RecipeBook.dir/recipe.cpp.s
.PHONY : recipe.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... install/strip"
	@echo "... install/local"
	@echo "... install"
	@echo "... list_install_components"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... RecipeBook"
	@echo "... RecipeBook_autogen"
	@echo "... IncorrectInputException.o"
	@echo "... IncorrectInputException.i"
	@echo "... IncorrectInputException.s"
	@echo "... RecipeBook_autogen/EWIEGA46WW/qrc_image.o"
	@echo "... RecipeBook_autogen/EWIEGA46WW/qrc_image.i"
	@echo "... RecipeBook_autogen/EWIEGA46WW/qrc_image.s"
	@echo "... RecipeBook_autogen/mocs_compilation.o"
	@echo "... RecipeBook_autogen/mocs_compilation.i"
	@echo "... RecipeBook_autogen/mocs_compilation.s"
	@echo "... addallergenwindow.o"
	@echo "... addallergenwindow.i"
	@echo "... addallergenwindow.s"
	@echo "... addingredientwindow.o"
	@echo "... addingredientwindow.i"
	@echo "... addingredientwindow.s"
	@echo "... allergen.o"
	@echo "... allergen.i"
	@echo "... allergen.s"
	@echo "... createrecipewindow.o"
	@echo "... createrecipewindow.i"
	@echo "... createrecipewindow.s"
	@echo "... editrecipewindow.o"
	@echo "... editrecipewindow.i"
	@echo "... editrecipewindow.s"
	@echo "... incorrectinputexceptionwindow.o"
	@echo "... incorrectinputexceptionwindow.i"
	@echo "... incorrectinputexceptionwindow.s"
	@echo "... ingredient.o"
	@echo "... ingredient.i"
	@echo "... ingredient.s"
	@echo "... main.o"
	@echo "... main.i"
	@echo "... main.s"
	@echo "... mainwindow.o"
	@echo "... mainwindow.i"
	@echo "... mainwindow.s"
	@echo "... recipe.o"
	@echo "... recipe.i"
	@echo "... recipe.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

