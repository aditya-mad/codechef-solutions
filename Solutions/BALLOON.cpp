#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size;
        cin >> size;
        int num[size];
        for (int i = 0; i < size; i++)
        {
            cin >> num[i];
        }
        int ans = 0;
        int i;
        for (i = 0; i < size; i++)
        {
            if (num[i] > 0 && num[i] < 8)
            {
                ans++;
            }
            if (ans == 7)
            {
                break;
            }
        }
        cout << i + 1 << endl;
    }

    return 0;
}