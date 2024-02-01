#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int size, ans = 1, mod = 1e9 + 7;
        string binary;
        cin >> size >> binary;

        for (int i = 2; i < size; i += 2)
        {
            int curr = 0;

            if (((binary[i - 2] - '0') & (binary[i - 1] - '0')) == binary[i] - '0')
            {
                curr++;
            }
            if (((binary[i - 2] - '0') | (binary[i - 1] - '0')) == binary[i] - '0')
            {
                curr++;
            }
            if (((binary[i - 2] - '0') ^ (binary[i - 1] - '0')) == binary[i] - '0')
            {
                curr++;
            }

            ans = (1LL * ans * curr) % mod;

            if (ans == 0)
                break;
        }

        cout << ans << endl;
    }
    return 0;
}
