#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int cap, wei;
        cin >> cap >> wei;
        if (cap > 8)
        {
            cout << "NO" << endl;
        }
        else
        {
            if ((wei * cap) <= 500)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}