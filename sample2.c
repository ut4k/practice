#include <stdio.h>

int main(void){
	//変数の宣言
	int num;
	int num2;
	char c;
	double db, dd;

	num = 3;
	//num = 3.14;

	printf("変数numの値は%dです。\n", num);

	num = 5;

	printf("変数numの値は%dです。\n", num);

	num2 = num;

	printf("変数num2の値は%dです。\n", num2);

	return 0;
}
