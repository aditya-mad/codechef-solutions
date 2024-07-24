#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test = 1;
    cin >> test;

    while (test--)
    {
        long long int ans = 0, size;
        cin >> size;

        ans = --size;
        ans *= --size;

        cout << ans + 1 << "\n";

        // (n-1) * (n-2) + 1 simplify
    }
}
