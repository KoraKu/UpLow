#include "../headers/alternating.h"

#include <ctype.h>

void alt(char *text, int len) {

    int counter = 0;
	
	//Converting loop
	for(int i = 0; i<len; i++) {
		// we do toupper or tolower depending on counter
		if (counter == 0) {
			text[i] = toupper(text[i]);
			
			
			counter = 1;
		} else {
			text[i] = tolower(text[i]);

			counter = 0;
		}
	}
}