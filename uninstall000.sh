#root checking 
[[ `id -u` -eq 0 ]] > /dev/null 2>&1 || { echo -e '\e[1;31m [-] No Root Checked ,Please U Need To Be root '; exit 1; }

rm -rf killer 

rm -rf /usr/share/killer
rm -rf /usr/bin/killer

echo ' [+] Well Done , Tool Removed! '
