#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size, total, pos;
        long long ans = 0;
        cin >> size >> total >> pos;
        vector<int> nums(size);

        for (int i = 0; i < size; i++)
            cin >> nums[i];

        sort(nums.rbegin(), nums.rend());

        for (int i = pos - 1; i < size; i += total)
            ans += nums[i];

        cout << ans << endl;
    }
    return 0;
}
