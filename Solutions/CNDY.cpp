#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int test, now;
    cin >> test;

    for (; test--;)
    {
        unordered_map<long long int, long long int> prices;
        long long int cost, cities;
        int ans = 1;

        cin >> cities;
        for (int i = 0; i < 2 * cities; i++)
        {
            cin >> cost;

            prices[cost]++;

            if (prices[cost] > 2)
            {
                ans = 0;
            }
        }

        if (ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}