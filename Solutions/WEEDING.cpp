#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, total, kill;
        cin >> size >> total >> kill;
        int num;
        bool flag = true;
        for (int i = 0; i < size; i++)
        {
            cin >> num;
            if (num + kill - 1 > total)
            {
                flag = false;
            }
        }

        if (flag)
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