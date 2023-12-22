// WORK IN PROGRESS 
/*

To-Do list: 

1. Port not found / port found causes program functionality issues  
2. Error handling needs to be properly implemented 
3. Brainstorm ideas regarding the expansion of this program 


*/

#include "src/errors.h"
#include "src/scan.h"

int main(int argc, char *argv[]) {

    // error handling hack, change to properly handle errors 
    if (argc < 4) {
        InputError(); 
    }

    // copy user address to target address variable 
    char targetAddress[16] = {0};
    strcpy(targetAddress, argv[1]); 

    // copy our first port to firstPort variable 
    char firstPort[6] = {0}; 
    strcpy(firstPort,  argv[2]); 

    // copy our last port to lastPort variable 
    char lastPort[6] = {0}; 
    strcpy(lastPort, argv[3]); 

    // begin scan 
    InitiateScan(targetAddress, firstPort, lastPort); 
   
    return 0; 
}