#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int track, tort, hare;
        cin >> track >> hare >> tort;

        float timet = (float)track / tort;
        float timeh = (float)track / hare;

        int tt = ceil(timet), th = ceil(timeh);
        cout << (abs(th - tt) - 1 < 0 ? -1 : abs(tt - th) - 1) << endl;
    }
    return 0;
}
