#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int i;
	int sum=0;
	int grade[5];
	int *ptr;
	
	ptr=grade;
	
	for (i=0; i<5; i++)
	{
		printf("input grade[%i]=",i);
		scanf("%d", &grade[i]);
		sum+=ptr[i];
	}
	
	for (i=0; i<5; i++)
	{
		printf("grade[%d]=%d\n",i, ptr[i]);
	}
	printf("average=%d", sum/5);
	
	return 0;	
	
}
