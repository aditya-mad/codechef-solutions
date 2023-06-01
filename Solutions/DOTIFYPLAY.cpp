#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (; test--;)
    {
        vector<int> memo;
        int maxs, lan, num;
        cin >> maxs >> num >> lan;

        for (int i = 0; i < maxs; i++)
        {
            int len, lang;
            cin >> len >> lang;
            if (lang == lan)
            {
                memo.push_back(len);
            }
        }

        sort(memo.rbegin(), memo.rend());

        if (memo.size() >= num)
        {
            cout << accumulate(memo.begin(), memo.begin() + num, 0) << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
