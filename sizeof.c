#include <stdio.h>

int main(int argc, char *argv[]){
	char a;
	int b;
	double c;

	printf("size of variable a is %zu\n", sizeof a);
	printf("size of variable b is %zu\n", sizeof b);
	printf("size of variable c is %zu\n", sizeof c);
	printf("size of long long is %zu\n", sizeof (long long));
	return 0;
/* size of variable a is 1 */
/* size of variable b is 4 */
/* size of variable c is 8 */
/* size of long long is 8 */

}
