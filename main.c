#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,a;
     unsigned long int fact=1;

      printf("Enter a number \n");
       scanf("%d",&a);

     for(int i=1;i<=a;i++)
     {
        fact*=i;

     }
 printf("%llu",fact);

}
