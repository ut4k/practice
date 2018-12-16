#include <stdio.h>

int main(int argc, char *argv[]){
	double number_1;
	int number_2;
	char character;

	//一回目の番地表示
	printf("address of number_1 is %p\n", &number_1);
	printf("address of number_2 is %p\n", &number_2);
	printf("address of character is %p\n", &character);

	number_1 = 0.1;
	number_2 = 1;
	character = 'a';

	printf("number_1 is %f\n", number_1);

	number_1 = 0.8;
	number_2 = 99;
	character = 'z';

	//一回目の番地表示
	printf("address of number_1 is %p\n", &number_1);
	printf("address of number_2 is %p\n", &number_2);
	printf("address of character is %p\n", &character);

}
