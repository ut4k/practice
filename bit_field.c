#include <stdio.h>

struct tag_bit_field{
	unsigned on_off: 1;
	unsigned half_byte: 4;
};

int main(int argc, char *argv[]){
	struct tag_bit_field bf;

	bf.on_off = 1;
	bf.half_byte = 15;

	printf("onoff %u\n", bf.on_off);
	printf("halfbyte %u\n", bf.half_byte);
	
	bf.on_off = 2;
	bf.half_byte = 16;

	printf("onoff %u\n", bf.on_off);
	printf("halfbyte %u\n", bf.half_byte);

	return 0;
}

