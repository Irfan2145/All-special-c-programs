#include <stdio.h>
int main()
{
    int fact = 1, rem, num, result = 0, q,i;
    printf("Enter the number: ");
    scanf("%d", &num);
    q = num;
    while (q != 0)
    {
        rem = q % 10;
        for ( i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }
        result = result + fact;
        fact = 1;
        q = q / 10;
    }
    if (result == num)
    {
        printf("The number %d is strong number", num);
    }
    else
        printf("The number %d is not an strong number", num);
    return 0;
}