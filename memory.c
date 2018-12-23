#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	char *one_string;

	//わざと失敗
	one_string = malloc(0xffffffffffffffff);
	if(one_string == NULL){
		printf("error\n");
	}
	printf("one_string = %p\n", one_string);
	free(one_string);
	
	//こっちはOK
	one_string = malloc(14);
	if(one_string == NULL){
		printf("error\n");
		return -1;
	}
	printf("one_string = %p\n", one_string);

	strncpy(one_string, "hello, world\n", 14 - 1);
	one_string[14 - 1] = '\0';

	printf("%s", one_string);

	printf("one_string = %p\n", one_string);
	free(one_string);

	printf("one_string=%p\n", one_string);
	return 0;
}
