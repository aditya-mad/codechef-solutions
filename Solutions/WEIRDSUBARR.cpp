#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size;
        cin >> size;
        vector<int> nums(size);
        bool rev;
        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
        }

        if (size == 1)
        {
            cout << 1 << endl;
            continue;
        }

        long long int ans = 1, change = 0;
        rev = nums[0] < nums[1];
        for (int i = 1, ind = 0, fi = -1; i < size; i++)
        {

            if (rev && nums[i] < nums[i - 1])
            {
                ind = i - 1;
                rev = !rev;
            }
            else if (!rev && nums[i] > nums[i - 1])
            {
                fi = i;
                rev = !rev;
            }
            ans += i - ind + 1;
        }

        cout << ans << endl;
    }
}