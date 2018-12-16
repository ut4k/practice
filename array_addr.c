#include <stdio.h>

int main(int argc, char *argv[]){
	double double_array[2];
	int int_array[2];
	char char_array[2];

	char one_string[] = "hello, world\n";

	printf("address is %p\n", &double_array[0]);
	printf("address is %p\n", &double_array[1]);
	printf("address is %p\n", &int_array[0]);
	printf("address is %p\n", &int_array[1]);
	printf("address is %p\n", &char_array[0]);
	printf("address is %p\n", &char_array[1]);

	printf("address is %p\n", &one_string[0]);
	printf("address is %p\n", one_string);

	return 0;
}
