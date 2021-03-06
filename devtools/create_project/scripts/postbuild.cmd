@echo off

REM ---------------------------------------------------------------
REM -- Post-Build Script
REM ---------------------------------------------------------------
REM
REM Copy engine data and required dlls to the
REM output folder and optionally create an installer
REM
REM Expected parameters
REM    Root folder
REM    Output folder
REM    SDL version
REM    Libs folder
REM    Installer ("1" to build, "0" to skip)

if "%~1"=="" goto error_root
if "%~2"=="" goto error_output
if "%~3"=="" goto error_sdl
if "%~4"=="" goto error_libs
if "%~5"=="" goto error_installer

echo Copying data files
echo.

xcopy /F /Y "%~4/%~3.dll"                                  "%~2" 1>NUL 2>&1
xcopy /F /Y "%~4/WinSparkle.dll"                           "%~2" 1>NUL 2>&1
xcopy /F /Y "%~1/backends/vkeybd/packs/vkeybd_default.zip" "%~2" 1>NUL 2>&1
xcopy /F /Y "%~1/backends/vkeybd/packs/vkeybd_small.zip"   "%~2" 1>NUL 2>&1


if "%~5"=="0" goto done

echo Running installer script
echo.
@call cscript "%~1/devtools/create_project/scripts/installer.vbs" "%~1" "%~2" 1>NUL
if not %errorlevel% == 0 goto error_script
goto done

:error_root
echo Invalid root folder (%~1)!
goto done

:error_output
echo Invalid output folder (%~2)!
goto done

:error_sdl
echo Invalid SDL parameter (was: %~3, allowed: SDL, SDL2)!
goto done

:error_libs
echo Invalid libs folder (%~4)!
goto done

:error_installer
echo Invalid installer parameter. Should be "0" or "1" (was %~5)!
goto done

:error_script:
echo An error occurred while running the installer script!
goto done

:done
exit /B0
