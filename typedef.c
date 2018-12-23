#include <stdio.h>

enum tag_month {
	JAN = 1,
	FEB,
	MAR,
	APR,
	MAY,
	JUN,
	JUL,
	AUG,
	SEP,
	OCT,
	NOV,
	DEC,
};

typedef enum tag_month month_t;

int main(int argc, char *argv[]){
	month_t month;
	
	printf("%d月\n", JAN);
	printf("%d月\n", FEB);
	printf("%d月\n", NOV);
	printf("%d月\n", DEC);
	return 0;
}
