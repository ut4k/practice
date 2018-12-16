#include <stdio.h>

void func(void){
	static int count = 0;
	count = count + 1;
	printf("count = %d\n", count);
}

int main (int argc, char *argv[]){
	func();
	func();
	func();
	return 0;
}
