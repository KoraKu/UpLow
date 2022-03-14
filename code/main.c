#include <stdio.h>
#include <string.h>

//Custom
#include "./headers/alternating.h"
#include "./headers/rand.h"

int main(int argc, char* argv[]) {
	
	//Handle case if no argument are provided.
	

	int len = strlen(argv[1]);
	int toPrint = 1;

	if (argc == 2) {
		alt(argv[1], len);

	} else if (argc == 3) {
		
		//We have argument before the string
		//We check for each of them and then we compute accordingly
		len = strlen(argv[2]); // need to update the len to the actual text len not the arg
		toPrint = 2; //change the arg we need to print

		if (strcmp(argv[1], "-r ")) {
			randomAlt(argv[2], len);

		} else {//in the case an unknow argument is there
			fprintf(stderr, "%s invalid argument", argv[1]);
			return 2;
		}

	} else if (argc == 1) {
		fprintf(stderr, "%s required at least 1 argument but 0 where provided", argv[0]);
		return 1;

	} else {
		//to fill
	}


	printf("%s\n", argv[toPrint]);

	return 0;
}
