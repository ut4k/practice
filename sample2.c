#include <stdio.h>

int main(void){
	//�ϐ��̐錾
	int num;
	int num2;
	int num3;
	char c;
	double db, dd;

	num = 3;
	//num = 3.14;
	printf("�ϐ�num�̒l��%d�ł��B\n", num);

	num = 5;
	printf("�ϐ�num�̒l��%d�ł��B\n", num);

	num2 = num;
	printf("�ϐ�num2�̒l��%d�ł��B\n", num2);

	// scanf("%d", &num3);
	// printf("���͂��ꂽ�l��%d�ł�\n", num3);
	//
	// scanf("%lf", &db);
	// printf("���͂��ꂽ�l��%f�ł�\n", db);
	// printf("��������͂��Ă��������B\n");
	// c = getchar();
	// printf("%c�����͂���܂����B\n", c);

	//==========���K==========
	//1
	int age;
	printf("���Ȃ��͉���?\n");
	scanf("%d", &age);
	printf("���Ȃ���%d��\n", age);
	//2	
	double pi;
	printf("�~������?\n");
	scanf("%lf", &pi);
	printf("�~������%f\n", pi);
	// //3
	// printf("�A���t�@�x�b�g�̍ŏ��̕�����?\n");
	// c = getchar();
	// printf("�A���t�@�x�b�g�̍ŏ��̕�����%c�ł��B\n", c);
	//4
	double h, w;
	printf("�g����?\n");
	scanf("%lf", &h);
	printf("�g����%fcm\n", h);
	printf("�̏d��?\n");
	scanf("%lf", &w);
	printf("�̏d��%fkg\n", w);
	//5
	printf("�g���E�̏d��?\n");
	scanf("%lf", &h);
	scanf("%lf", &w);
	printf("�g����%fcm�A�̏d��%fkg\n", h, w);

	return 0;
}
