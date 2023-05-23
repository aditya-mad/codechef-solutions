#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int num;
        cin >> num;
        for (int i = num; i > 0; i--)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}