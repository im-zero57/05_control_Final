#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	char i;
	
	printf("문장을 입력해주세요 : ");
	while( (i=getchar() ) !='\n')
	{if (i<='9'&& i>='0')
		num++;
	}
	
	printf("축하합니다 당신이 입력한 문장 속 숫자의 개수는 %d개 입니다.\n",num);
	
	return 0;
}
