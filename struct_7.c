#include <stdio.h>

int main(int argc, char *argv[]){

	struct tag_question{
		char character;
		double number;
	};
	
	printf("%zu\n", sizeof(struct tag_question));
	return 0;
}
