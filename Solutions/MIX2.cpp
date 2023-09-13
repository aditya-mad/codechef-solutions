#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    for (; test--;)
    {
        int size;
        cin >> size;
        vector<int> nums(size);

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
        }

        long long ans = 0;

        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                ans += (1LL * nums[i] * nums[j]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
