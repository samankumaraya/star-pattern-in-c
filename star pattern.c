#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;

    for(i=0;i<10;i++)
   {
          for(j=0;j<10-i;j++)
          {
            printf("  *");
          }

          for(j=0;j<2*i;j++)
          {
              printf("   ");
          }
          for(j=0;j<10-i;j++)
          {
            printf("  *");
          }
          printf("\n\n");
   }
   printf("\n");



       for(i=0;i<10;i++)
         {
            for(j=0;j<=i;j++)
                {
                    printf("  *");
                }
            for(j=0;j<18-2*i;j++)
                {
                printf("   ");
                }
            for(j=0;j<=i;j++)
                {
                printf("  *");
                 }


            printf("\n\n");
         }
    return 0;
}
