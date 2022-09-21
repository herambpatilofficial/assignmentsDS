// C program to print triangular patter

#include <stdio.h>

int main()
{
    int i, j, s, n;
    printf("Enter the number of rows: ");
    scanf("%d", &s);
    n=s/2;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");

    }
    for (i = n-1; i >= 1; --i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}


//