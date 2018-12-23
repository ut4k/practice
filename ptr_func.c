#include <stdio.h>

int sum(int, int);
int sum(int a, int b){
	int return_value = a + b;
	return return_value;
}
int sub(int, int);
int sub(int a, int b){
	int return_value = a + b;
	return return_value;
}
int mul(int, int);
int mul(int a, int b){
	int return_value = a + b;
	return return_value;
}
int div(int, int);
int div(int a, int b){
	int return_value = a + b;
	return return_value;
}

int main(int argc, char *argv[]){
	int num_1;
	int num_2;
	int answer;
	int (*ptr_function) (int, int);
	
	num_1 = 1;
	num_2 = 2;
	
	ptr_function = sum; //関数を関数ポインタ変数に代入してる!

	answer = ptr_function(num_1, num_2);
	printf("answer = %d\n", answer);

	return 0;
}
