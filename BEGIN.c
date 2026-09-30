#include<stdio.h>
int main()
{
    int n,i,rem,arm;
    arm=0;
    printf("enter no:");
    scanf("%d,&n");
    while (n!=0)
    {
        rem=n%10;
        arm=arm+rem*rem*rem;
        n=n/10;
    }
       if(arm==n)
        printf("given no is armstrong");
       else
        printf ("given no is not armstrong");

      return 0;

    }

