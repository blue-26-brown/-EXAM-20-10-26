#include <stdio.h>

int main()
{
    int arr[10], n, i, small;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    small = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < small)
            small = arr[i];
    }

    printf("Smallest element = %d\n", small);
    return 0;
}
/*output
Enter the number of elements: 3
Enter 3 elements:
1
4
6
Smallest element = 1 */
