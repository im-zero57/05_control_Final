#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer;
	int t;
	
	do
	{
		printf("���ڸ� �Է����ּ��� : ");
		scanf("%d",&answer);
		if (answer > 59)
			printf("low!\n");
		else if (answer < 59)
			printf("high!\n");
		t++;		
	}
	
	while (answer!=59);
	printf("�����մϴ�! ������ ���߼̽��ϴ�! ������ ���߱� ���� �� �õ�Ƚ���� %dȸ �Դϴ�.\n",t);
	return 0;
}
