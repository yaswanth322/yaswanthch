#include<stdio.h>
main()
{
	int i,n;
	i=1;
	printf("enter the number:");
	scanf("%d",n);
	while(i<=20)
	{
		printf("\n %d x %d =%d ",n,i,i*n);
		i++;
	}
}
