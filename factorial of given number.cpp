#include<stdio.h>
main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	i=1;
    while(i<n)
		{
		if(n%i==0)
		printf("\n%d",i);
	    i++;
		}
}
