#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int xcoord, ycoord, sizex, sizey;
        cin >> sizex >> sizey >> xcoord >> ycoord;

        long long int top = max(xcoord - 1, sizex - xcoord) * 1LL * sizey;
        long long int side = max(ycoord - 1, sizey - ycoord) * 1LL * sizex;
        cout << max(top, side) << endl;
    }
    return 0;
}
