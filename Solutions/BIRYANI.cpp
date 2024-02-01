#include <iostream>
using namespace std;

int main()
{
    int test, X, Y;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> X >> Y;
        cout << X * Y << endl;
    }

    return 0;
}