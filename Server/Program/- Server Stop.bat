@echo off
echo :::::::::::: FlyFF Server Stop ::::::::::::::
echo.

echo Stopping World Server...
taskkill /im "7. World.exe" > nul
timeout 1 > nul
echo Stopping Cache Server...
taskkill /im "6. Cache.exe" > nul
echo Stopping Login Server...
taskkill /im "5. Login.exe" > nul
echo Stopping Core Server...
taskkill /im "4. Core.exe" > nul
echo Stopping Database Server...
taskkill /im "3. Database.exe" > nul
echo Stopping Certifier...
taskkill /im "2. Certifier.exe" > nul
echo Stopping Account Server...
taskkill /im "1. Account.exe" > nul
echo.
echo :::::::::::: Stop Finished! ::::::::::::::
