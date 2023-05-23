#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int size;
        cin >> size;
        long long int a[size];
        unordered_map<long long int, long long int> memo;

        for (long long int i = 0; i < size; i++)
        {
            cin >> a[i];
            memo[a[i]] = i;
        }

        long long int ans = 1, maxi = memo[size], mini = memo[size];

        for (long long int i = 2; i < size; i++)
        {
            mini = min(mini, memo[size - i + 1]);
            maxi = max(maxi, memo[size - i + 1]);
            if (maxi - mini + 1 == i)
            {
                ans = i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}