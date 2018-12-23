#include <stdio.h>

union tag_world{
	int num[4];
	char one_string[16];

	//numとone_stringは同じメモリのアドレス上にいることになる!
};

int main(int argc, char *argv[]){
	union tag_world world;

	char one_string[] = "hello, world\n";
	int i;

	for(i = 0; one_string[i] != '\0'; i++){
		world.one_string[i] = one_string[i];
	}
	world.one_string[i] = one_string[i];
	
	printf("%s", world.one_string);
	printf("0x%08x, 0x%08x, 0x%08x, 0x%08x\n", world.num[0], world.num[1], world.num[2], world.num[3]);
	printf("%p, %p\n", world.num, world.one_string);

	return 0;
}
