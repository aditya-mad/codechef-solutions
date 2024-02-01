#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size, bomb, ans = 0;
        cin >> size >> bomb;

        for (int i = 1; i <= size; i++)
        {
            int num;
            cin >> num;
            if (num < bomb)
                ans = i;
        }

        cout << ans << endl;
    }

    return 0;
}