#include <stdio.h>

int main(int argc, char *argv[]){
	const char character = 'A';
	const int number = 1;

	printf("character is = %c\n", character);
	printf("number i = %d\n", number);

	character = 'B'; //read-onlyになった定数は変更できないのでエラー
	number = 2;

	return 0;
}

