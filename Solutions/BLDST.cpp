#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, boxes, ans = 0;
        long long int sum = 0;
        unordered_map<int, int> memo;

        cin >> boxes >> size;

        vector<int> nums(size);

        for (long long int i = 0; i < size; i++)
        {
            cin >> nums[i];
            sum = sum - nums[i] + boxes;
        }

        sort(nums.rbegin(), nums.rend());

        for (int i = 0; i < size - 1; i++)
        {
            if (nums[i] == nums[size - 1])
            {
                ans++;
            }
        }

        cout << max(0 * 1LL, (boxes - sum)) << endl;
    }

    return 0;
}

/*
7 + 6 + 5 + 4  + 4 = 26 / 7

*/