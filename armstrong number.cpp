#include<stdio.h>
main()
{
	int r,n,sum=0,temp,fact,i;
	printf("enter the 3 digit number:");
	scanf("%d",&n);
	temp=n;
    while(n>0)
    	{
			r=n%10;
			fact=1;
			for(i=1;i<=r;i++)
			{
				fact=fact*i;
			}
			sum=sum+fact;
	        n=n/10;
	    }
	    if(sum==temp)
	    printf("\n strong: \n");
	    else
	    printf("\n not strong: \n");
	
}
