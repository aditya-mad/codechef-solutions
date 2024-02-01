#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size, pass;
        string nums, key;
        cin >> size >> pass >> nums >> key;

        int ans = INT_MAX;

        for (int i = 0; i <= size - pass; i++)
        {
            int curr = 0;

            for (int j = 0; j < pass; j++)
            {
                if (nums[i + j] == key[j])
                    continue;
                else
                    curr += min(abs(key[j] - nums[i + j]), 10 - abs(key[j] - nums[i + j]));
            }

            ans = min(ans, curr);
        }
        cout << ans << endl;
    }
    return 0;
}
