#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num > 0)
    {
     case 1:
            printf("Positive number");
    break;
    case 0:
        if (num == 0)
                printf("Zero");
            else
                printf("Negative number");
            break;
    }

    return 0;
}
//output
/*Enter a number: 4
Positive number
Enter a number: 0
Zero
Enter a number: -9
Negative number
*/
