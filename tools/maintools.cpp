#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std; 

int main(){


	string orders ; 

	cout << "[!] Type 'help' or '/h' to show help menu!" << endl;

	do {
	cout << endl << "Killer>Scatter> " ;

	getline(cin,orders);

	if (orders == "help" || orders == "/h"){
	
	cout << "Keylogging:" << endl << "=============="<< endl<< endl; 
	cout << "trace -u <url> / -a (all)   Trace a website coockies or multi tracing . "	<< endl;
	
	cout << endl <<"Filing:" << endl << "========" << endl;
	cout << "up -f <path> / -d <directory_path>   Upload a file or a Complete Directory To The Victim PC. " << endl; 
	cout << "get -f <path> / -d <directory_path>  Download a file or a Complete Directory From The Victim PC." << endl;
	cout << "ls 				      show all files . " << endl;
	cout << "cd				      open a directory . " << endl;
	
	cout << endl << "Capturing:" << endl << "=============" << endl;
	cout << "cp -v -t <time_by_seconds> (video recording) / -p (screenshot) capture screen or video recording ." << endl; 
	
	cout << endl << "Browsing:" << endl << "===========" << endl; 
	cout << "open -u <url> / -l <url_list_path>      			Open a WebSite or Multi Opening ." << endl; 
 	
	
	
	
		
	}
	else if(orders == "exit" || orders == "quit"){
	
	false ;
	exit(1);
	}
	else{
	cerr << "[-] order is misunderstood ! " << endl; 		
	}



  
	}
	while (true) ; 












	return 0;

}
