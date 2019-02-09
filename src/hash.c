// Simple command line wrapper to illustrate WSPR hash calculation
// 	By Gary McMeekin
//
//  Arguments - a call sign string

#include<stdio.h> 
#include <string.h>
#include <ctype.h>

#include "hash.h"
#include "nhash.h"

#ifndef int32_t
#define int32_t int
#endif

int main(int argc, char* argv[]) 
{
    int counter; 
    if(argc==1) {
        printf("\nSpecify a call sign"); 
	return 0;
    }

    if(argc>=2) 
    {
	int i = 0;
	int callLength = strlen(argv[1]);
	char *call = argv[1];
	// Convert to upper case, just like WSJT-x does
	while(call[i]) {
    	  call[i] = toupper(call[i]);
	  i++;
	}
	printf("Calculating for call sign: %s", call);
	printf("\nCallsign Hash: %d\n\n", nhash(call, callLength, (uint32_t)146));
    }
    return(0);
}
