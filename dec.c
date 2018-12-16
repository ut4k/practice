#include <stdio.h>

int main(int argc, char *argv[]){
	int a, b;
	int answer;

	a = 1;
	b = 1;

	answer = a - -b;
	printf("answer is %d\n", answer);

	a = 1;
	b = 1;
	answer = a --- b;
	printf("answer id %d\n", answer);

	return 0;

/* answer is 2 */
/* answer id 0 */


}
