#include <stdio.h>

int main(int argc, char *argv[]){
	int a, b;
	int op;
	int answer;

	a = 1;
	b = 2;
	op = '+';

	switch(op){
	case '+':
		answer = a + b;
		break;
	case '-':
		answer = a - b;
		break;
	case '*':
		answer = a * b;
		break;
	case '/':
		if(b == 0){
			printf("devide by zero\n");
		}else{
			answer = a / b;
		}
		break;
	default:
		printf("operator unkonown\n");
		break;
	}

	printf("%d %c %d = %d\n", a, op, b, answer);

	return 0;
		
}
