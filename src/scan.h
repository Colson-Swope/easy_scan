#define SCAN_H

#include <stdlib.h> 
#include <stdio.h> 
#include <string.h> 
#include <unistd.h> 
#include <sys/socket.h> 
#include <arpa/inet.h> 


void InitiateScan(char *targetAddress, char *firstPort, char *lastPort);

