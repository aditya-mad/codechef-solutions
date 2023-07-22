#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int lim, per, cost;
        cin >> lim >> per >> cost;
        int extra = cost / 30;

        lim += extra;

        cout << ceil((float)lim / per) << endl;
    }
    return 0;
}
