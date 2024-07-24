#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    while (test--)
    {
        int size, total, count = 0;
        cin >> total >> size;
        for (int i = 0, num; i < size; i++)
        {
            cin >> num;
            count += num == 1;
        }

        if (count * 3 >= total)
        {
            cout << ceil((total * 1.0) / count) << "\n";
            continue;
        }

        size -= count * 2;
    }
}
