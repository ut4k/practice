#include <stdio.h>

int sum(int, int); //プロトタイプ宣言
int sum(int a, int b){
	int return_value;
	return_value = a + b;
	return return_value;
}

int main(int argc, char *argv[]){
	int num_1;
	int num_2;
	int answer;

	num_1 = 1;
	num_2 = 2;

	answer = sum(num_1, num_2);
	printf("answer = %d\n", answer);
	return 0;

	/* answer = 3 */


}
