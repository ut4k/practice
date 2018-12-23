#include <stdio.h>

enum tag_month{
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
	DEC, //カンマ要る？
};

enum tag_week_of_day{
	SUN,
	MON,
	TUE,
	WED,
	THR,
	FRI,
	SAT,
};

//「tag_week_of_dayというenum」を返す関数 get_week_of_day の意
enum tag_week_of_day get_week_of_day(int, enum tag_month, int);
enum tag_week_of_day get_week_of_day(int year, enum tag_month month, int day){
	if(month == JAN || month == FEB){
		year--;
		month += 12;
	}
	return ((year + year / 4 - year / 100 + year / 400 + (13 * month + 8) / 5 + day) % 7);
}

int main(int argc, char *argv[]){
	enum tag_week_of_day week_of_day;
	enum tag_month month;
	int monthlength[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int year;
	int day;

	year = 2018;

	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
		monthlength[FEB] = 29;
	}

	for(month  = JAN; month <= DEC; month++){
		day = 1;
		week_of_day = get_week_of_day(year, month, day);
		day -= week_of_day;

		printf(" Sun Mon Tue Wed Thr Fri Sat\n");
		for(; day <= monthlength[month]; day++){
			if( day <= 0){
				printf("    ");
				continue;
			}
			printf("% 3d ", day);
			week_of_day = get_week_of_day(year, month, day);
			if(week_of_day == SAT){
				printf("\n");
			}
		}
		printf("\n\n");
	}
	return 0;
}
