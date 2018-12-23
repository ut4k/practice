#include <stdio.h>

#define MAX_NUMBER 12

int create_tuple(int tuple[][MAX_NUMBER]){
	int i, j;

	if(tuple == NULL){ return -1; }

	for(i = 0; i < MAX_NUMBER; i++){
		for(j = 0; j < MAX_NUMBER; j++){
			tuple[i][j] = (i + 1) * (j + 1);
		}
	}
	return 0;
}

int main(int argc, char *argv[]){
	int i, j;
	int tuple[MAX_NUMBER][MAX_NUMBER] = {{0}};

	create_tuple(tuple);

	for(i = 0; i  < MAX_NUMBER; i++){
		for(j = 0; j < MAX_NUMBER; j++){
			printf("% 4d ", tuple[i][j]);
		}
		printf("------%d周目--------\n", i);
		printf("\n");
	}
	return 0;
}
