#include<stdio.h>
#include<stdlib.h>
main()
{
	int a,b;
	for(a=1;a<=10;a++)
	{
		for(b=1;b<=20;b++)
		{
			printf("\n %d x %d =%d",a,b,a*b);
		}
		printf("\n\n");
	}
}
