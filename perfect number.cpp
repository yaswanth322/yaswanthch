#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	i=1;
    while(i<n)
		{
		if(n%i==0)
		sum=sum+i;
		i++;
	    }
	    if(sum==n)
		printf("\n %d is perfect",n);
		else
		printf("\n %d is not perfect",n);
}
