#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int alice, bob, charlie;
        cin >> alice >> bob >> charlie;
        int total = alice + bob + charlie;
        bool flag = true;

        if (total <= 3)
        {
            cout << "NO" << endl;
            flag = false;
        }
        for (int i = 1; i < total; i++)
        {
            if (flag)
            {
                for (int j = i + 1; j < total; j++)
                {
                    if (flag)
                    {
                        for (int k = j + 1; k < total; k++)
                        {
                            if ((i + j + k == total) && i != j && i != k && k != j)
                            {
                                cout << "YES" << endl;
                                flag = false;
                                break;
                            }
                        }
                    }
                }
            }
        }

        if (flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}