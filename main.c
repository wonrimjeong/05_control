#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int a; //���밪�� �����ϴ� �� 

	printf("Input an integer : ");
	scanf("%d", &i);
	
	if (i>0)
	{
	    a = i;
	}
	else
	{
		a = -i;
	}
	 
	 printf("���밪�� %i�Դϴ�.", a);
	return 0;
}
