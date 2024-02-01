#include <iostream>
using namespace std;

int main()
{
    long long int test;

    cin >> test;

    for (; test--;)
    {
        long long int teams, breaks, times, total = 0;

        cin >> teams >> times >> breaks;

        for (; teams != 1;)
        {
            teams /= 2;
            total += times;
            if (teams == 1)
            {
                break;
            }

            total += breaks;
        }
        cout << total << endl;
    }
    return 0;
}