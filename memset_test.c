#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_ptr(int *ptr){
	int i;

	for(i = 0; i < 8; i++){
		printf("%d ", ptr[i]);
	}
}

int main(int argc, char *argv[]){
	/* int i; */
	int *ptr;

	ptr = malloc(sizeof(int) * 8);
	printf("%p", ptr);

	print_ptr(ptr);
	/* for(i = 0; i < 8; i++){ */
	/* 	printf("%d ", ptr[i]); */
	/* } */

	memset(ptr, -1, sizeof(int) * 8);

	print_ptr(ptr);
	/* for(i = 0; i < 8; i++){ */
	/* 	printf("%d ", ptr[i]); */
	/* } */

	return 0;

}
