#include <stdio.h>

int main()
{
    int arr[30], n, i, s;
    int *ptr = arr;

    printf("How many elements? ");
    scanf("%d ",&n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d",&arr[i]);

    printf("Squares of the numbers are folloing:\n");
    for (i = 0; i < n; i++)
    {
        s =*(ptr + i)* *(ptr + i);
        printf("%d ",s);
    }

    return 0;
}
/*out put
How many elements? 3
1
Enter the elements:
3
5
Squares of the numbers are folloing:
1 9 25 */
