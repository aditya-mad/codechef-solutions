// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <climits>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size;
        cin >> size;
        vector<int> nums(size), maxbefore(size), maxafter(size);

        cin >> nums[0];
        maxbefore[0] = INT_MIN;
        maxafter[size - 1] = INT_MIN;
        for (int i = 1; i < size; i++)
        {
            cin >> nums[i];
            maxbefore[i] = max(maxbefore[i - 1], nums[i - 1]);
        }

        for (int i = size - 2; i > -1; i--)
        {
            maxafter[i] = max(maxafter[i + 1], nums[i + 1]);
        }

        for (int i = 1; i < size - 1; i++)
        {
            nums[i] = max(nums[i], min(maxafter[i], maxbefore[i]));
        }

        long long int ans = 0;

        for (auto x : nums)
            ans += x;

        cout << ans << endl;
    }

    return 0;
}
