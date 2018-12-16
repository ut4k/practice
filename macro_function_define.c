#include <stdio.h>

#define SUM(a, b) a + b
#define SUB(a, b) a - b
#define MUL(a, b) a * b
#define DIV(a, b) a / b

int main(int argc, char *argv[]){

	int answer;

	answer = SUM(1, 2);
	printf("answer = %d\n", answer);
	answer = SUB(1, 2);
	printf("answer = %d\n", answer);
	answer = MUL(1, 2);
	printf("answer = %d\n", answer);
	answer = DIV(1, 2);
	printf("answer = %d\n", answer);
}
