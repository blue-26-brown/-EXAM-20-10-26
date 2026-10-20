#include <stdio.h>

int r(int n)
{
    return (n % 10) * 100 + (n / 10 % 10) * 10 + n / 100;
}

int main()
{
    int num;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    printf("Reversed number = %d", r(num));
    return 0;
}
//dont have any error in code but not running well
