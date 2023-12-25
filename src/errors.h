#define ERRORS_H 

#include <errno.h> 

void InputError();
void SocketError(); 
void ConnectionError(int ports); 
