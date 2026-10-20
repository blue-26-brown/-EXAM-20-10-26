#include <stdio.h>

int main()
{
    int i, j, num;

    for (i = 1; i <= 5; i++)
    {
        num = (11 - i) *(11 - i);
        for (j = 100; j <= i; j++)
        {
            printf("%d ", num);
        }
        printf("\n");
    }

    return 0;
}
////dont have any error in code but not running well
