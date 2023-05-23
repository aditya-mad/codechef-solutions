#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        unordered_map<long long int, long long int> nums;
        long long int max = -1, size, temp;
        cin >> size;
        for (long long int i = 0; i < size; i++)
        {
            cin >> temp;
            nums[temp]++;
            (nums[temp] > max) ? (max = nums[temp]) : (max = max);
        }
        cout << size - max << endl;
    }
    return 0;
}