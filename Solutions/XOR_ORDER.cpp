#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int a, b, c;
        cin >> a >> b >> c;

        long long int zerostart = 0, maxlastnum = 5;
        maxlastnum = pow(2, 30) - 1;
        bool flag = true;
        while (zerostart <= maxlastnum)
        {
            long long int nums = zerostart + (maxlastnum - zerostart) / 2;

            if ((a ^ nums) < (b ^ nums) && (b ^ nums) < (c ^ nums))
            {
                flag = false;
                cout << nums << endl;
                break;
            }
            if ((b ^ nums) > (a ^ nums))
            {
                maxlastnum = nums - 1;
            }
            else
            {
                zerostart = nums + 1;
            }
        }

        if (flag)
        {
            cout << -1 << endl;
        }
    }
}