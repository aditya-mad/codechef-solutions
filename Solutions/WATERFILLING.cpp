#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        vector<int> bottle(3);

        cin >> bottle[0] >> bottle[1] >> bottle[2];

        if (accumulate(bottle.begin(), bottle.end(), 0) < 2)
        {
            cout << "Water filling time" << endl;
        }
        else
        {
            cout << "Not now" << endl;
        }
    }
    return 0;
}
