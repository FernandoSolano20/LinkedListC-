# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\Lista.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\Lista.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Lista.dir\flags.make

CMakeFiles\Lista.dir\main.cpp.obj: CMakeFiles\Lista.dir\flags.make
CMakeFiles\Lista.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lista.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Lista.dir\main.cpp.obj /FdCMakeFiles\Lista.dir\ /FS -c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\main.cpp"
<<

CMakeFiles\Lista.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lista.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\Lista.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\main.cpp"
<<

CMakeFiles\Lista.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lista.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Lista.dir\main.cpp.s /c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\main.cpp"
<<

CMakeFiles\Lista.dir\MyList.cpp.obj: CMakeFiles\Lista.dir\flags.make
CMakeFiles\Lista.dir\MyList.cpp.obj: ..\MyList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Lista.dir/MyList.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Lista.dir\MyList.cpp.obj /FdCMakeFiles\Lista.dir\ /FS -c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\MyList.cpp"
<<

CMakeFiles\Lista.dir\MyList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lista.dir/MyList.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\Lista.dir\MyList.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\MyList.cpp"
<<

CMakeFiles\Lista.dir\MyList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lista.dir/MyList.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Lista.dir\MyList.cpp.s /c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\MyList.cpp"
<<

CMakeFiles\Lista.dir\Node.cpp.obj: CMakeFiles\Lista.dir\flags.make
CMakeFiles\Lista.dir\Node.cpp.obj: ..\Node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Lista.dir/Node.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Lista.dir\Node.cpp.obj /FdCMakeFiles\Lista.dir\ /FS -c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\Node.cpp"
<<

CMakeFiles\Lista.dir\Node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lista.dir/Node.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe > CMakeFiles\Lista.dir\Node.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\Node.cpp"
<<

CMakeFiles\Lista.dir\Node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lista.dir/Node.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Lista.dir\Node.cpp.s /c "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\Node.cpp"
<<

# Object files for target Lista
Lista_OBJECTS = \
"CMakeFiles\Lista.dir\main.cpp.obj" \
"CMakeFiles\Lista.dir\MyList.cpp.obj" \
"CMakeFiles\Lista.dir\Node.cpp.obj"

# External object files for target Lista
Lista_EXTERNAL_OBJECTS =

Lista.exe: CMakeFiles\Lista.dir\main.cpp.obj
Lista.exe: CMakeFiles\Lista.dir\MyList.cpp.obj
Lista.exe: CMakeFiles\Lista.dir\Node.cpp.obj
Lista.exe: CMakeFiles\Lista.dir\build.make
Lista.exe: CMakeFiles\Lista.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Lista.exe"
	"C:\Program Files\JetBrains\CLion 2021.1.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Lista.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests -- C:\PROGRA~2\MICROS~2\2019\PROFES~1\VC\Tools\MSVC\1423~1.281\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\Lista.dir\objects1.rsp @<<
 /out:Lista.exe /implib:Lista.lib /pdb:"C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\cmake-build-debug\Lista.pdb" /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Lista.dir\build: Lista.exe

.PHONY : CMakeFiles\Lista.dir\build

CMakeFiles\Lista.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lista.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Lista.dir\clean

CMakeFiles\Lista.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista" "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista" "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\cmake-build-debug" "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\cmake-build-debug" "C:\Users\fersolano\Documents\Universidad\Estructura de datos\ListasEnlazadas\Lista\cmake-build-debug\CMakeFiles\Lista.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\Lista.dir\depend

