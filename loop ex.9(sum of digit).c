#include<stdio.h>
int main()
{
    int n,temp,r,sum=0;
    printf("Enter any number:");
    scanf("%d",&n);
    temp=n;
     while(temp!=0)
     {  r=temp%10;
         sum=sum+r;
         temp=temp/10;
     }
     printf("The sum of digit=%d\n",sum);
     return 0;
}

