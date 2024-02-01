#include <iostream>
using namespace std;

int main()
{
    int test, rank;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> rank;

        if (rank < 26)
        {
            cout << 1 << endl;
        }
        else if (rank % 25 == 0)
        {
            cout << rank / 25 << endl;
        }
        else
        {
            cout << (rank / 25) + 1 << endl;
        }
    }

    return 0;
}