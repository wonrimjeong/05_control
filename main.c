#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;

	printf("Input an integer : ");
	scanf("%d", &i);
	
	if (i>0)
	{
	    printf("����Դϴ�." );
	}
	else
	{
		printf("�����Դϴ�.");
	}
	 
	return 0;
}
