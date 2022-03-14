#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[]) {
	
	//Handle case if no argument are provided.
	if (argc == 1) {
		fprintf(stderr, "%s required at least 1 argument but 0 where provided", argv[0]);
		return 1;
	}

	int len = strlen(argv[1]);
	char newString[len];

	int counter = 0;
	
	//Converting loop
	for(int i = 0; i<len; i++) {
		// we do toupper or tolower depending on counter
		if (counter == 0) {
			char tmp = toupper(argv[1][i]);
			newString[i] = tmp;
			
			counter = 1;
		} else {
			char tmp = tolower(argv[1][i]);
			newString[i] = tmp;

			counter = 0;
		}
	}

	printf("%s \n", newString);

	return 0;
}
