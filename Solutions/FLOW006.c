#include <stdio.h>
int t, n, r, sum = 0;
int main()
{
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        while (n > 0)
        {
            r = n % 10;
            sum = sum + r;
            n = n / 10;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}