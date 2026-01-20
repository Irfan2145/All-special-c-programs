#include <math.h>
#include <stdio.h>
int main()
{
    int n, q, count = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    q = ceil(sqrt(n));
    for (int i = 2; i <= q; i++)
    {
        if (n % i == 0)
            count = 1;
    }
    if ((count == 0 && n != 1) || n == 2 || n == 3)
        printf("%d is a prime number", n);
    else
        printf("%d is not a prime number ", n);
    return 0;
}