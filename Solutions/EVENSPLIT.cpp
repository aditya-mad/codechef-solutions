#include <iostream>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        string binary;
        long long int length, zcount = 0, ocount = 0;
        cin >> length;
        cin >> binary;

        if (length > 2)
        {
            for (int i = 0; i < length; i++)
            {
                if (binary[i] == '0')
                {
                    zcount++;
                }
                else if (binary[i] == '1')
                {
                    ocount++;
                }
            }

            for (int i = 0; i < zcount; i++)
            {
                cout << "0";
            }
            for (int i = 0; i < ocount; i++)
            {
                cout << "1";
            }

            cout << endl;
        }
        else
        {
            cout << binary << endl;
        }
    }
    return 0;
}