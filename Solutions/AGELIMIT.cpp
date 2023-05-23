#include <iostream>
using namespace std;

int main()
{
    int test, X, Y, A;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> X >> Y >> A;

        if (A >= X && A < Y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}