#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int input;
	
	printf("���ڸ� �Է����ּ��� : ");
	scanf("%d",&input);
	
	if (input>0)
		printf("|����|= %d", input);
	else
		printf("|����|= %d", -input);
}
