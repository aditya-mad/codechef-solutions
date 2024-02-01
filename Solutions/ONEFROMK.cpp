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
        long long int sum = 0;
        cin >> size;
        vector<int> nums(size);
        vector<long long int> ans(size);

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
            sum += nums[i];
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < size; i++)
        {
            ans[i] = sum;
            sum -= nums[i];
        }

        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}