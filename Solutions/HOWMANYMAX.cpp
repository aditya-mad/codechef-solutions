#include <iostream>
using namespace std;

int main()
{

    long long int test, length, maximum;
    string binary;

    cin >> test;

    for (; test--;)
    {
        maximum = 0;
        cin >> length;
        cin >> binary;
        char current = binary[0];
        if (binary.length() == 1)
        {
            cout << 1 << endl;
        }
        else
        {
            if (current == '1')
            {
                maximum++;
            }
            // for(long long int i = 1; i < binary.length(); i++)
            // {
            //     if(current == 0)
            //     {

            //     }
            //     if(i == binary.length() - 1)
            //     {
            //         if(binary[i] == '0' && binary[i - 1] == '0')
            //         {
            //             maximum++;
            //         }
            //     }
            // }

            for (long long int i = 0; i < binary.length() - 1; i++)
            {
                if (binary[i] == '0' && binary[i + 1] == '1')
                {
                    maximum++;
                }
                if (i == binary.length() - 2)
                {
                    if (binary[i + 1] == '0')
                    {
                        maximum++;
                    }
                }
            }

            cout << maximum << endl;
        }
    }

    return 0;
}