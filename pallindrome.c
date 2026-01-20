#include <stdio.h>

int main()
{
    int r, n, number, revnum = 0;
    printf("Enter the no. you want to check: ");
    scanf("%d", &number);
    n = number;
    while (n != 0)
    {
        r = n % 10;
        revnum = revnum * 10 + r;
        n /= 10;
    }
    if (revnum == number)
    {
        printf("%d is Pallindrome ", number);
    }
    else
        printf("%d is not Pallindrome ", number);
    return 0;
}
