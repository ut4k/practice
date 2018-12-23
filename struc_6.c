#include <stdio.h>

struct tag_coord{
	double x;
	double y;
};

int main(int argc, char *argv[]){
	double num;
	double num_array[4];
	struct tag_coord coord;
	struct tag_coord coord_array[4];

	printf("%zu\n", sizeof num);
	printf("%zu\n", sizeof num_array);
	printf("%zu\n", sizeof coord);
	printf("%zu\n", sizeof coord_array);

	return 0;
}
