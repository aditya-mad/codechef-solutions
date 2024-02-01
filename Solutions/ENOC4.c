#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int checkpoints, output;
        long long int mod = 1000000007;
        long long int n, k;
        scanf("%lld  %lld", &n, &k);
        checkpoints = n / k;
        output = (n % mod) + ((k % mod) * ((checkpoints % mod) * ((checkpoints + 1) % mod)));
        printf("%lld\n", (output % mod));
    }
    return 0;
}