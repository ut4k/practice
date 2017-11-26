#include <stdio.h>

int main(void){
	//変数の宣言
	int num;
	int num2;
	int num3;
	char c;
	double db, dd;

	num = 3;
	//num = 3.14;
	printf("変数numの値は%dです。\n", num);

	num = 5;
	printf("変数numの値は%dです。\n", num);

	num2 = num;
	printf("変数num2の値は%dです。\n", num2);

	// scanf("%d", &num3);
	// printf("入力された値は%dです\n", num3);
	//
	// scanf("%lf", &db);
	// printf("入力された値は%fです\n", db);
	// printf("文字を入力してください。\n");
	// c = getchar();
	// printf("%cが入力されました。\n", c);

	//==========練習==========
	//1
	int age;
	printf("あなたは何歳?\n");
	scanf("%d", &age);
	printf("あなたは%d歳\n", age);
	//2	
	double pi;
	printf("円周率は?\n");
	scanf("%lf", &pi);
	printf("円周率は%f\n", pi);
	// //3
	// printf("アルファベットの最初の文字は?\n");
	// c = getchar();
	// printf("アルファベットの最初の文字は%cです。\n", c);
	//4
	double h, w;
	printf("身長は?\n");
	scanf("%lf", &h);
	printf("身長は%fcm\n", h);
	printf("体重は?\n");
	scanf("%lf", &w);
	printf("体重は%fkg\n", w);
	//5
	printf("身長・体重は?\n");
	scanf("%lf", &h);
	scanf("%lf", &w);
	printf("身長は%fcm、体重は%fkg\n", h, w);

	return 0;
}
