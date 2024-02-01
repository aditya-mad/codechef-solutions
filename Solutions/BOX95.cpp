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
        int size;
        cin >> size;
        vector<long long int> nums(size);

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
        }

        long long int maxele = *max_element(nums.begin(), nums.end());
        int bit = -1;
        while (maxele != 0)
        {
            bit++;
            maxele >>= 1;
        }

        int ans = 0;

        for (auto x : nums)
        {
            if (x & (1LL << bit))
            {
                ans++;
            }
        }

        cout << (ans + 1) / 2 << endl;
    }
    return 0;
}
