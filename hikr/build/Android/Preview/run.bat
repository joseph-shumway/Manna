:: This file was generated based on C:/Users/Shumcom/AppData/Local/Fusetools/Packages/UnoCore/1.4.3/Targets/Android/run.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0"

if "%1" == "debug" (
    echo Opening Android Studio
    call gradlew --recompile-scripts
    "C:\Program Files (x86)\Fuse\uno.exe" open -a"Android Studio" -t"hikr" "%~dp0app/app.iml"
    exit /b %ERRORLEVEL%
)

if "%1" == "uninstall" (
    echo Uninstalling com.apps.hikr
    "C:\Program Files (x86)\Fuse\uno.exe" adb uninstall com.apps.hikr
    exit /b %ERRORLEVEL%
)

"C:\Program Files (x86)\Fuse\uno.exe" launch-apk "%~dp0hikr.apk" ^
    --package=com.apps.hikr ^
    --activity=hikr ^
    --sym-dir="%~dp0src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
