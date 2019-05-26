#!/bin/bash 

#root checking 
[[ `id -u` -eq 0 ]] > /dev/null 2>&1 || { echo -e '\e[1;31m [-] No Root Checked ,Please U Need To Be root '; exit 1; }

echo ' [*] Installing Killer... '
# General Install 
mkdir -p /usr/share/killer
mkdir -p /usr/share/killer/pkgs

g++ src/main.cpp -o killer

# Create Short Cut 

cp -r src /usr/share/killer
cp  -r tools /usr/share/killer
cp README.md /usr/share/killer
cp build.sh /usr/share/killer
cp uninstall000.sh /usr/share/killer
cp killer /usr/share/killer 

echo "#!/bin/bash" >> /usr/bin/killer
echo "[[ `id -u` -eq 0 ]] > /dev/null 2>&1 || { echo -e '\e[1;31m [-] No Root Checked ,Please U Need To Be root '; exit 1; }" >> /usr/bin/killer
echo "cd /usr/share/killer" >> /usr/bin/killer
echo "./killer" >> /usr/bin/killer
chmod 777 /usr/bin/killer

echo ' [+] Well Done , Tool Installed!'
echo ' [!] Type "killer" to run'
