// #include <bits.stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    for (; test--;)
    {
        int aimp, aexp, bimp, bexp;
        cin >> aexp >> aimp >> bexp >> bimp;

        cout << (aexp - aimp + bexp - bimp < 0 ? "YES" : "NO") << endl;
    }

    return 0;
}