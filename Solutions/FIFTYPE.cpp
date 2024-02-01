#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int battery;
        cin >> battery;
        int ans = 0;

        if (battery == 50)
        {
            cout << 0 << endl;
        }
        else
        {

            while (battery != 50)
            {
                if (battery > 50)
                {
                    battery -= 3;
                    ans++;
                }
                else
                {
                    battery += 2;
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}