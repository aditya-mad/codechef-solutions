#include <iostream>
using namespace std;

int main()
{
    long long int test;
    int x, y, z;

    cin >> test;

    while (test--)
    {
        cin >> x >> y >> z;

        if (x >= y && x >= z)
        {
            cout << "Setter" << endl;
        }
        else if (y >= x && y >= z)
        {
            cout << "Tester" << endl;
        }
        else
        {
            cout << "Editorialist" << endl;
        }
    }
    return 0;
}