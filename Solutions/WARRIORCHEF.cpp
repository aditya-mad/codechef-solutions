#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int test;
    cin >> test;

    auto bin = [&](vector<int> nums, int heal, int mid)
    {
        for (auto x : nums)
        {
            if (x <= mid)
                continue;
            if (heal > x)
                heal -= x;
            else
                return false;
        }
        return true;
    };

    while (test--)
    {
        int size, health;
        cin >> size >> health;
        vector<int> nums(size);

        for (int i = 0; i < size; i++)
            cin >> nums[i];

        int left = 0, right = 0;
        for (auto x : nums)
            right = max(right, x);

        int ans = INT_MAX;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (bin(nums, health, mid))
            {
                ans = min(ans, mid);
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
