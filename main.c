#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	char i;
	
	printf("������ �Է����ּ��� : ");
	while( (i=getchar() ) !='\n')
	{if (i<='9'&& i>='0')
		num++;
	}
	
	printf("�����մϴ� ����� �Է��� ���� �� ������ ������ %d�� �Դϴ�.\n",num);
	
	return 0;
}
