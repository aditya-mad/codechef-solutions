#include <iostream>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int size, doubles, moves = 0;
        cin >> size;

        if (size == 1 || size == 2)
        {
            cout << 0 << endl;
        }
        else if (size == 3)
        {
            cout << 2 << endl;
        }
        else
        {
            doubles = size / 2;
            if (size % 2 == 0)
            {
                doubles--;
            }
            doubles--;
            moves++;
            moves += (doubles * 2);
            moves += (size - doubles - 2);
            cout << moves << endl;
        }
    }
    return 0;
}