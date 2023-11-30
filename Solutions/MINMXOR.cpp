#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, total, ans = INT_MAX;
        cin >> size;
        vector<int> nums(size), prefix(size, 0), suffix(size, 0);

        cin >> nums[0];
        for (int i = 1; i < size; i++)
        {
            cin >> nums[i];
            prefix[i] = prefix[i - 1] ^ nums[i - 1];
        }

        total = nums[size - 1] ^ prefix[size - 1];

        ans = min(ans, total);

        for (int i = size - 2; i > -1; i--)
        {
            suffix[i] = suffix[i + 1] ^ nums[i + 1];
        }

        for (int i = 0; i < size; i++)
        {
            ans = min(ans, prefix[i] ^ suffix[i]);
        }

        cout << ans << endl;
    }

    return 0;
}