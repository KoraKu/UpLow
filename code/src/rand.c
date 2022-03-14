#include "../headers/rand.h"

#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void randomAlt(char *text, int len) {

    int rng;
    srand(time(0));
    //Converting loop
	for(int i = 0; i<len; i++) {
		// we do toupper or tolower depending on rng
        rng = rand() % 2;

		if (rng == 0) {
			text[i] = toupper(text[i]);
			
		} else {
			text[i] = tolower(text[i]);

		}
	}
}