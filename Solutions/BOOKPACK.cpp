#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int selves, books, capacity;
        cin >> selves >> books >> capacity;

        if (books % capacity == 0)
        {
            cout << selves * (books / capacity) << endl;
        }
        else
        {
            cout << selves * ((books / capacity) + 1) << endl;
        }
    }

    return 0;
}