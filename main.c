#include <stdio.h>
#include <stdlib.h>

main()
  {

       int a,n,b,p=1;

             printf("Enter a number\n");
             scanf("%d",&a);

             printf("Give power\n");
             scanf("%d",&b);

             for(int i=1;i<=b;i++)
             {

               p*=a;

             }


      printf("%d",p);
}
