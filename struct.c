#include <stdio.h>

struct tag_coord{
	double x;
	double y;
}; //構造体の定義の後ろは「;」がないとエラー

int main(int argc, char *argv[]){
	struct tag_coord coord;

	coord.x = 1.00;
	coord.y = 2.00;

	printf("coord.x = %f\n", coord.x);
	printf("coord.x = %f\n", coord.y);
	return 0;
}
