#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (; test--;)
    {
        long long int length, breadth;
        cin >> length >> breadth;

        if (((length * breadth) & 3) & 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
