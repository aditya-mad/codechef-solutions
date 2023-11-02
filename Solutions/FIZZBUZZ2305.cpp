// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int num;
        cin >> num;

        cout << (num % 2 == 0 || num == 1 ? "Bob\n" : "Alice\n");
    }

    return 0;
}