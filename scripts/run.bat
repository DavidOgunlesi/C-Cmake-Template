@echo off
set scriptpath=%~dp0
for %%# in ("%scriptpath%\..\build\Debug\*.exe") do "%%#"
if %1 == -x exit 0