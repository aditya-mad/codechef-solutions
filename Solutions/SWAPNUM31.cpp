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
        int size, diff;
        cin >> size >> diff;

        vector<int> nums(size);

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
        }

        vector<int> memo, add;

        for (int i = 0; i < size; i++)
        {
            if (i + diff <= size - 1 || i >= diff)
            {
                memo.push_back(nums[i]);
            }
            else
            {
                add.push_back(nums[i]);
            }
        }

        sort(memo.begin(), memo.end());

        // if(!add.empty())
        // memo.insert(memo.begin() + ( diff / 2) , add.begin(), add.end());

        if (!add.empty())
        {
            vector<int> ans(memo.begin(), memo.begin() + memo.size() / 2);
            ans.insert(ans.end(), add.begin(), add.end());
            ans.insert(ans.end(), memo.begin() + memo.size() / 2, memo.end());

            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
        else
        {
            for (auto x : memo)
                cout << x << " ";
            cout << endl;
            continue;
        }
    }
}