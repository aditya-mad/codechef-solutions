#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    while (test--)
    {
        int size, target, mod;
        cin >> size >> target >> mod;

        int tot = size / mod, offset = size % mod;
        long long int ans = tot * 1LL * (target % mod);
        ans += min(offset, target % mod) + 1;
        ans += target / mod;
        cout << ans << endl;
    }
}
