// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int num1, num2, oper;
        cin >> num1 >> num2 >> oper;

        while (oper--)
        {
            if (num1 == num2)
                break;

            int gcd = __gcd(num1, num2);

            if (num1 > num2)
                num1 = gcd;
            else
                num2 = gcd;
        }

        cout << num1 + num2 << endl;
    }

    return 0;
}