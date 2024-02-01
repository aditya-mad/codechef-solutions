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
        long long int tot, size;
        cin >> tot >> size;
        // vector<int> nums(size);
        long long int sum = 0, nums, ans = 0;
        for (int i = 0; i < size; i++)
        {
            cin >> nums;
            sum += nums;
        }

        long long int total = ((tot) * (tot + 1)) / 2;
        cout << total - sum << endl;
    }

    return 0;
}