// Check prime numbers from 1 to 100 and display them
#include <stdio.h>

int main()
{
    int i, j, check = 0;
    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            printf("%d ", i);
        }
        check = 0;
    }
    return 0;
}