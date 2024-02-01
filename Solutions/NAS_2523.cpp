#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        long long int size;
        cin >> size;
        if (size % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (long long int i = size; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
