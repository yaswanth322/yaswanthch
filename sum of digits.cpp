#include<stdio.h>
main()
{
	int r,n,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
    while(n>0)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
	    }
	    printf("\n sum of digits:%d",sum);
	
}
