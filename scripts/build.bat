@echo off
set scriptpath=%~dp0
cmake -B %scriptpath%\..\build
cmake --build %scriptpath%\..\build
exit 0