#include<stdio.h>
#include<stdlib.h>
main()
{
int n;
printf("\n enter the number:");
scanf("%d",&n);
if(n%2==0)
   goto even;
   else
   goto odd;
    
    
     even: printf("\n even no");exit(0);
     odd: printf("\n odd no");
}
