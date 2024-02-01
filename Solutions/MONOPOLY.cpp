#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (; test--;)
    {
        int one, two, three;
        cin >> one >> two >> three;

        if (one > two + three)
        {
            cout << "YES" << endl;
        }
        else if (two > three + one)
        {
            cout << "YES" << endl;
        }
        else if (three > two + one)
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