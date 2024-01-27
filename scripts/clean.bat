@echo off
set scriptpath=%~dp0
del /s /q %scriptpath%\..\build\*.*
rmdir /s /q %scriptpath%\..\build
mkdir %scriptpath%\..\build
exit 0