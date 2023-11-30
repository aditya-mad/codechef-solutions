#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int a, b;
        cin >> a >> b;

        int total = a + b, ans = INT_MAX;

        for (int i = 1; i <= total - i; i++)
        {
            if ((total - i) % i == 0)
            {
                ans = min(ans, abs(b - i));
            }
        }

        cout << ans << endl;
    }
    return 0;
}
