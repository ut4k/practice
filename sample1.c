#include <stdio.h>

int main(void)
{
	printf("8�i����101�̕����R�[�h����������%c�ł��B \n", '\101');
	printf("16�i����61�̕����R�[�h����������%c�ł��B \n", '\x61');
	/* ����̓R�����g */
	printf("%d\n",123);
	printf("\\%d��������B\n",100);
	printf("�܂��������B\n");
	printf("500�~�B\n");

	printf("1\t2\t3\t\n");
	//8�i��
	printf("%d\n",06);//6
	printf("%d\n",024);//20
	printf("%d\n",015);//13
	//16�i��
	printf("%d\n",0x6);//6
	printf("%d\n",0x14);//20
	printf("%d\n",0xD);//13
	return 0;
}
