#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size, alice, bob;
        cin >> size >> bob >> alice;

        vector<int> nums(size);
        int memo[3] = {0, 0, 0};

        for (int i = 0; i < size; i++)
        {
            cin >> nums[i];
            if (nums[i] % alice == 0 && nums[i] % bob == 0)
                memo[2]++;
            else if (nums[i] % alice == 0)
                memo[0]++;
            else if (nums[i] % bob == 0)
                memo[1]++;
        }

        cout << (ceil(memo[2] / 2.0) + memo[1] > memo[0] ? "BOB" : "ALICE") << endl;
    }
    return 0;
}
