#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
	int a, b;
	double c, d;

	a = 1000;
	b = 1000;
	c = 3.14;
	d = 3.15;
	//d = 3.14;

	if(memcmp(&a, &b, sizeof(int)) == 0){
		printf("a and b are the same\n");
	}

	if(memcmp(&c, &d, sizeof(double)) == 0){
		printf("c and d are the same\n");
	}

	return 0;

}
