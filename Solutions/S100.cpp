// #include <bits.stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    for (; test--;)
    {
        int size;
        string binary, ans;
        cin >> size >> binary;
        ans = "";
        int i;

        for (i = 0; i < size; i++)
        {
            if (binary[i] == '0')
                ans = ans + '0';
            else
            {
                ans = ans + '1';
                break;
            }
        }

        if (size - i > 2)
        {
            i++;
            for (; i < size; i++)
                ans = ans + '0';
        }
        else
        {
            i++;
            for (; i < size; i++)
                ans = ans + binary[i];
        }
        cout << ans << endl;
    }

    return 0;
}
