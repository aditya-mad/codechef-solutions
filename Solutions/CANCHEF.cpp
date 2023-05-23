#include <iostream>
using namespace std;

int main()
{
    int test;

    cin >> test;

    for (; test--;)
    {
        int pet, dist;
        cin >> pet >> dist;
        if ((pet * 15) >= (2 * dist))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}