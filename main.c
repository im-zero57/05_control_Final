#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer;
	int t;
	
	do
	{
		printf("숫자를 입력해주세요 : ");
		scanf("%d",&answer);
		if (answer > 59)
			printf("low!\n");
		else if (answer < 59)
			printf("high!\n");
		t++;		
	}
	
	while (answer!=59);
	printf("축하합니다! 정답을 맞추셨습니다! 정답을 맞추기 위한 총 시도횟수는 %d회 입니다.\n",t);
	return 0;
}
