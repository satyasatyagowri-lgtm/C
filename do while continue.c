#include<stdio.h>
void main()
{
	int i=4;
	printf("START\n");
	do
	{
		i++;
		if(i==3	)
		   continue;
		else
		printf("%d\t",i);
	}while(i<=5);
	printf("\nEND");
}
