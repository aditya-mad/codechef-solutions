#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size, maxele = -1;
        cin >> size;
        vector<int> nums(size);
        unordered_map<int, int> memo;

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
            maxele = max(maxele, ++memo[nums[i]]);
        }
        int ans = maxele == 1 ? size - maxele - 1 : size - maxele;
        cout << (size == 2 || size == 1 ? 0 : ans) << endl;
    }

    return 0;
}
