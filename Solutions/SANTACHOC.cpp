#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size, diff;
        cin >> size >> diff;
        int sum = 0, temp = 0;

        for (int i = 0; i < size; i++)
        {
            cin >> temp;
            sum += temp;
        }

        cout << ((diff == 0 && sum % size != 0) || size > sum ? "NO\n" : "YES\n");
    }
    return 0;
}
