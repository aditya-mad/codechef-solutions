#include <stdio.h>

int main(void)
{
    int x;
    float y;
    scanf("%d %f", &x, &y);
    if (x % 5 == 0 && y >= (x + 0.5))
    {
        printf("%.2f", y - (x + 0.5));
    }
    else
        printf("%.2f", y);
    return 0;
}