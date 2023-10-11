#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int total, each;
        cin >> total >> each;

        cout << (total / each >= 20 ? 20 : total / each) << endl;
    }
    return 0;
}
