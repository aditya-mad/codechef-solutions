#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        long long int sizea, sizeb, hours;
        cin >> sizea >> sizeb >> hours;

        vector<long long int> capacity(sizea), rate(sizeb);

        long long int ans = 0;

        for (int i = 0; i < sizea; i++)
        {
            cin >> capacity[i];
        }
        for (int i = 0; i < sizeb; i++)
        {
            cin >> rate[i];
        }

        sort(capacity.rbegin(), capacity.rend());
        sort(rate.rbegin(), rate.rend());

        for (int i = 0; i < min(sizea, sizeb); i++)
        {
            long long int res = rate[i] * hours;

            if (res >= capacity[i])
            {
                ans += capacity[i];
            }
            else
            {
                ans += res;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
