@echo off
echo :::::::::: FlyFF Server Startup ::::::::::::::
echo.

echo Starting Account Server...
start	/min "" "1. Account.exe"
timeout 3 > nul
echo Starting Certifier...
start	/min "" "2. Certifier.exe"
timeout 3 > nul
echo Starting Database Server...
start	/min "" "../Resource/3. Database.exe"
timeout 3 > nul
echo Starting Core Server...
start	/min "" "4. Core.exe"
timeout 3 > nul
echo Starting Login Server...
start	/min "" "5. Login.exe"
timeout 3 > nul
echo Starting Cache Server...
start	/min "" "6. Cache.exe"
timeout 3 > nul
echo Starting World Server...
start	/min "" "../Resource/7. World.exe"
timeout 3 > nul
echo. :::::::::::::: Startup Finished! :::::::::::::::::::::