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
        int size;
        cin >> size;
        int ans = 0, curr = 0;
        vector<int> nums(size);
        unordered_map<int, int> memo;
        int num;
        for (long long int i = 0; i < size; i++)
        {
            cin >> num;
            if (memo[num] == 0)
            {
                memo[num]++;
                nums[i] = 1;
            }
            else
            {
                memo[num]--;
                nums[i] = -1;
            }
        }

        for (auto x : nums)
        {
            curr = max(x, curr + x);
            ans = max(ans, curr);
        }
        cout << ans << endl;
    }

    return 0;
}