#include <stdio.h>

int main(int argc, char *argv[]){
	unsigned int n;
	n = 32768;

	printf("one left shift %u\n", n << 1);
	printf("two left shift %u\n", n << 2);

	printf("one left shift %u\n", n >> 1);
	printf("two left shift %u\n", n >> 2);

	return 0;

/* one left shift 65536 */
/* two left shift 131072 */
/* one left shift 16384 */
/* two left shift 8192 */

}
