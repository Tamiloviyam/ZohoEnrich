#include <stdio.h>

void main()
{
    int n,rev=0,temp;
   
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rev=rev*10;
        rev=rev+temp%10;
        temp=temp/10;
    }printf("%d",rev);
  
}
