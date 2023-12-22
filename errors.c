#include "src/errors.h"
#include "src/scan.h"

void InputError() {
    perror("Insufficient command-line arguments\n"); 
    exit(EXIT_FAILURE); 
}

void SocketError() {
    perror("Socket Creation Error\n"); 
    exit(EXIT_FAILURE); 
}

void ConnectionError() {
    perror("Port Not Found\n"); 
}