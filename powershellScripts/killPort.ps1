$row = netstat -ano | findstr :3000
$row
$PIDs = ($row[0] | ConvertFrom-String | select p6).P6
$PIDs
taskkill /F /PID $PIDs
