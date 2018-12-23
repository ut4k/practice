#include <stdio.h>

int main(int argc, char *argv[]){
	char string_1[16] = "hello world";
	char string_2[16] = "";
	char *src, *dst;

	src = string_1;
	dst = string_2;

	printf("string_2 is = %s\n", string_2);

	while(*src != '\0'){ //stringは最後に\0があるからwhileのこの書き方で最後まで走査できる（はず）
		*dst++ = *src++;
	}

	printf("string_2 is = %s\n", string_2);
	return 0;

}
