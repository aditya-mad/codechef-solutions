#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int ans = 999999;
        int size;
        cin >> size;
        int nums[size];

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
        }

        for (int i = 0; i < size; i++)
        {
            if (i == 0)
            {
                ans = min(ans, abs(nums[0] - nums[1]));
            }
            else if (i == size - 1)
            {
                ans = min(ans, abs(nums[i] - nums[i - 1]));
            }
            else
            {
                int temp1, temp2;
                temp1 = abs(nums[i] - nums[i - 1]);
                temp2 = abs(nums[i] - nums[i + 1]);
                ans = min(ans, max(temp2, temp1));
            }
        }
        cout << ans << endl;
    }
    return 0;
}