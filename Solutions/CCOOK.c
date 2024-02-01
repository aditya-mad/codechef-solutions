#include <stdio.h>

int main()
{
    int a[200][5], i, d, sum, x, b, c, e, y;
    scanf("%d", &d);
    for (i = 0; i <= d - 1; i++)
    {
        printf("\n");

        scanf("%d %d %d %d %d", &x, &b, &c, &e, &y);
        sum = 0;
        sum = sum + x + b + c + e + y;
        switch (sum)
        {
        case 0:
            printf("Beginner");
            break;
        case 1:
            printf("Junior Developer");
            break;
        case 2:
            printf("Middle Developer");
            break;
        case 3:
            printf("Senior Developer");
            break;
        case 4:
            printf("Hacker");
            break;
        case 5:
            printf("Jeff Dean");
            break;
        }
    }

    return 0;
}