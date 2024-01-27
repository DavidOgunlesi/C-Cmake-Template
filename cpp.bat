@echo off
set scriptpath=%~dp0

:loop
if %~1 == build start /wait %scriptpath%\scripts\build -x
if %~1 == clean start /wait %scriptpath%\scripts\clean
if %~1 == run start /wait %scriptpath%\scripts\run
shift
if not "%~1"=="" goto loop