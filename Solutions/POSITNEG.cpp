#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int size;
        cin >> size;
        vector<long long int> nums(size);

        for (long long int i = 0; i < size; i++)
        {
            cin >> nums[i];
        }

        long long int negative = 0;

        for (long long int i = 0; i < size; i++)
        {
            if (nums[i] < 0)
            {
                negative += (i + 1);
            }
        }

        long long int positive = size * (size + 1) / 2;
        positive -= negative;

        cout << abs(positive - negative) << endl;
    }
    return 0;
}