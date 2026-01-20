#include <stdio.h>

int main()
{
    int n, number, rem = 0, cnt = 0, ml = 1, result = 0, count = 0;
    ;
    printf("Enter the no.: ");
    scanf("%d", &number);
    n = number;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    cnt = count;
    n = number;
    while (n != 0)
    {
        rem = n % 10;
        while (cnt != 0)
        {
            ml = ml * rem;
            cnt--;
        }
        result = result + ml;
        ml = 1;
        n = n / 10;
        cnt = count;
    }
    if (result == number)
    {
        printf("%d is Armstrong ", number);
    }
    else
        printf("%d is not Armstrong ", number);
    return 0;
}