#include "src/errors.h"
#include "src/scan.h"

void InitiateScan(char *targetAddress, char *firstPort, char *lastPort) {
    struct sockaddr_in server; 
    int socketDesc; 
    socketDesc = socket(AF_INET, SOCK_STREAM, 0); 

    if (socketDesc == -1) {
        SocketError(); 
    }

    server.sin_addr.s_addr = inet_addr(targetAddress); 
    server.sin_family = AF_INET; 

    // begin scan 
    for (unsigned short port = atoi(firstPort); port <= atoi(lastPort); ++port) {
        server.sin_port = htons(port); 

        if (connect(socketDesc, (struct sockaddr*)&server, sizeof(server)) < 0) {
            ConnectionError(); 
        } else {
            printf("Port %d is open\n", port); 
            fflush(stdout);
        }
    }

    // close final socket 
    close(socketDesc); 
}