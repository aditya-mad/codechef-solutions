// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, val, ans = 0;
        cin >> size >> val;
        vector<int> nums(size);

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
        }
        int odds = 0;
        for (int i = 0, j = 0; i < size; i++)
        {
            if ((nums[i] & 1))
            {
                odds++;
            }
            if (i - j + 1 == val)
            {
                if (!odds)
                    j++;
                else
                {
                    ans++;
                    if ((nums[j++] & 1))
                    {
                        odds--;
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}