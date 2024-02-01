// #include <bits.stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    for (; test--;)
    {
        int size, dig = 0;
        string numtemp;
        cin >> size >> numtemp;
        vector<int> nums(size);

        for (int i = 0; i < size; i++)
            nums[i] = numtemp[i] - '0';

        for (int i = size - 1, times = 1, cnt = 0; cnt < 3 && cnt < size; i--, times *= 10, cnt++)
        {
            dig += times * nums[i];
        }

        if (size == 1)
        {
            cout << (dig % 8 == 0 ? nums[0] : 8) << endl;
        }
        else
        {
            if (dig % 8 == 0)
                cout << numtemp << endl;
            else
            {
                int poss1 = dig - (dig % 8), poss2 = dig + 8 - (dig % 8);
                string one = to_string(poss1), two = to_string(poss2);

                if (one.size() < to_string(dig).size())
                    for (int i = 0; i < to_string(dig).size() - one.size(); i++)
                        one = '0' + one;

                int diff = 0, temp = dig;
                for (int i = one.size() - 1; i > -1; i--)
                {
                    int aa = one[i] - '0', ta = temp % 10;
                    if (one[i] - '0' != temp % 10)
                        diff++;
                    temp /= 10;
                }

                if (diff == 1)
                {
                    for (int i = size - 1, cnt = 0; cnt < one.size(); i--, cnt++)
                    {
                        nums[i] = poss1 % 10;
                        poss1 /= 10;
                    }
                }
                else
                {
                    for (int i = size - 1, cnt = 0; cnt < one.size(); i--, cnt++)
                    {
                        nums[i] = poss2 % 10;
                        poss2 /= 10;
                    }
                }

                for (auto x : nums)
                    cout << x;
                cout << endl;
            }
        }
    }
    return 0;
}
