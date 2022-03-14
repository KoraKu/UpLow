#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char* argv[]) {

	//Handle case if no argument are provided.
	if (argc == 1) {
		fprintf(stderr, "%s required at least 1 argument but 0 where provided", argv[0]);
		return 1;
	}

	/* generate new rand seed from time */
	time_t t;
	srand(time(&t));

	/* argument to start on (skip flags) */
	int startarg = 1;
	bool random = false;

	/* if -r is a flag, make output random */
	if (strcmp(argv[1], "-r") == 0){
		random = true;
		startarg += 1;
	}


	int counter = 0;

	//Converting loop
	for (int j = startarg; j<argc; j++){
		int len = strlen(argv[j]);
		char newString[len];

		for(int i = 0; i<len; i++) {
			// we do toupper or tolower depending on counter
			if ( counter % 2 == 0) {
				char tmp = toupper(argv[j][i]);
				newString[i] = tmp;
			} else {
				char tmp = tolower(argv[j][i]);
				newString[i] = tmp;
			}

			if (random){
				counter = rand() % 2;
			} else {
				counter++;
			}
		}
		/* print the current argument converted */
		printf("%s\n", newString);
	}

	printf("\n");

	return 0;
}
