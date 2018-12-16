#include <stdio.h>

int main(int argc, char *argv[]){
	int i, j, end;
	int flag_not_prime;

	end = 100;

	for(i = 1; i <= end; i = i + 1){
		flag_not_prime = 0;
		for (j = 2; j < i; j = j + 1){
			if(i % j == 0){
				flag_not_prime = 1;
				break;
			}
		}
		if(i==1){
			continue;
		}
		if(flag_not_prime == 0){
			printf("%d\n", i);
		}
	}
	return 0;

//2
//3
//5
//7
//11
//13
//17
//19
//23
//29
//31
//37
//41
//43
//47
//53
//59
//61
//67
//71
//73
//79
//83
//89
//97

}
