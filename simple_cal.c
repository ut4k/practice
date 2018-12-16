#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	char input_string[16];
	long a, b;
	long op;
	long answer;
	int c;

	do{
		printf("Input number> ");
		fgets(input_string, sizeof(input_string), stdin);
		a = strtol(input_string, NULL, 10);
		printf("Input number> ");
		fgets(input_string, sizeof(input_string), stdin);
		b = strtol(input_string, NULL, 10);

		printf("+---Operator menu---+\n");
		printf("|  1.+%*c|\n", 13, ' ');
		printf("|  2.-%*c|\n", 13, ' ');
		printf("|  3.*%*c|\n", 13, ' ');
		printf("|  4./%*c|\n", 13, ' ');
		printf("+-------------------+\n");
		printf("Input operator number> ");
		fgets(input_string, sizeof(input_string), stdin);
		op = strtol(input_string, NULL, 10);

		switch(op){
			case 1:
				answer = a + b;
				break;
			case 2:
				answer = a - b;
				break;
			case 3:
				answer = a * b;
				break;
			case 4:
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
		printf("answer is %ld\n", answer);
		c = getchar();
	} while (c != 'q');

	return 0;
}
