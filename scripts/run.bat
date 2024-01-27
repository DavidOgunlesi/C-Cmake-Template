@echo off
set scriptpath=%~dp0
for %%# in ("%scriptpath%\..\build\Debug\*.exe") do "%%#"
exit 0