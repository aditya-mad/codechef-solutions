#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int sonu, titu;
        cin >> sonu >> titu;

        cout << max(sonu, titu) * 2 - 1 << endl;
    }
    return 0;
}
