#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (; test--;)
    {
        int bells, tenbell, rang, mana;
        cin >> bells >> tenbell >> rang >> mana;

        if (rang == 0)
        {
            cout << mana << endl;
        }
        else
        {
            if (rang <= tenbell)
            {
                cout << mana + (rang * 10) << endl;
            }
            else
            {
                mana += (tenbell * 10);
                rang -= tenbell;
                bells -= tenbell;
                while (bells != 0 && rang != 0)
                {
                    mana += 5;
                    bells--;
                    rang--;
                }
                if (bells == 0)
                {
                    cout << mana + 20 << endl;
                }
                else
                {
                    cout << mana << endl;
                }
            }
        }
    }
    return 0;
}