#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, num, max = 0, min = 999;
        unordered_map<int, int> nums;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> num;
            nums[num]++;
            if (min > num)
            {
                min = num;
            }
            if (max < nums[num])
            {
                max = nums[num];
            }
        }
        cout << size - nums[min] << endl;
    }
    return 0;
}