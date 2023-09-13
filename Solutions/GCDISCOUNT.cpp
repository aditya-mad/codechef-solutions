#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size;
        cin >> size;
        vector<int> one(size), two(size), pref(size), suff(size);

        for (int i = 0; i < size; i++)
            cin >> one[i];
        for (int i = 0; i < size; i++)
            cin >> two[i];

        pref[0] = one[0];
        suff[size - 1] = one[size - 1];

        for (int i = 1; i < size; i++)
            pref[i] = __gcd(pref[i - 1], one[i]);
        for (int i = size - 2; i > -1; i--)
            suff[i] = __gcd(suff[i + 1], one[i]);

        int ans = one[0];

        for (auto x : one)
            ans = __gcd(x, ans);

        for (int i = 0; i < size; i++)
        {
            int left_gcd = (i > 0) ? pref[i - 1] : 0;
            int right_gcd = (i < size - 1) ? suff[i + 1] : 0;
            ans = max(ans, __gcd(left_gcd, __gcd(two[i], right_gcd)));
        }

        cout << ans << endl;
    }
    return 0;
}
