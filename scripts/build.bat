@echo off
set scriptpath=%~dp0
cmake -B %scriptpath%\..\build
cmake --build %scriptpath%\..\build

if %1 == -x exit 0