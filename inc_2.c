#include <stdio.h>

int main(int argc, char *argv[]){
	int n;

	n = 1;
	printf("n = n + ++n +n of n = %d\n", n = n + ++n + n);
	printf("n=%d\n", n);

	n = 1;
	printf("n = n + n++ +n of n = %d\n", n = n + n++ + n);
	printf("n=%d\n", n);

	return 0;

/* n = n + ++n +n of n = 6 */
/* n=6 */
/* n = n + n++ +n of n = 5 */
/* n=5 */

}
