#include <stdio.h>

int main(void)
{
	printf("8進数で101の文字コードをもつ文字は%cです。 \n", '\101');
	printf("16進数で61の文字コードをもつ文字は%cです。 \n", '\x61');
	/* これはコメント */
	printf("%d\n",123);
	printf("\\%dもらった。\n",100);
	printf("またあした。\n");
	printf("500円。\n");

	printf("1\t2\t3\t\n");
	//8進数
	printf("%d\n",06);//6
	printf("%d\n",024);//20
	printf("%d\n",015);//13
	//16進数
	printf("%d\n",0x6);//6
	printf("%d\n",0x14);//20
	printf("%d\n",0xD);//13
	return 0;
}
