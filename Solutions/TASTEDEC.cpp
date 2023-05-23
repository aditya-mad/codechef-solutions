#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int chocolate, candy;
        cin >> chocolate >> candy;
        if (chocolate * 2 > candy * 5)
        {
            cout << "Chocolate" << endl;
        }
        else if (chocolate * 2 < candy * 5)
        {
            cout << "Candy" << endl;
        }
        else
        {
            cout << "Either" << endl;
        }
    }
    return 0;
}