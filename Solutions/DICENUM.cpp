#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int alice = 0, bob = 0;
        string a = "", b = "";
        string temp;

        for (int i = 0; i < 3; i++)
        {
            cin >> temp;
            a += temp;
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> temp;
            b += temp;
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        alice = stoi(a);
        bob = stoi(b);

        if (alice == bob)
            cout << "Tie";
        else if (alice > bob)
            cout << "Alice";
        else
            cout << "Bob";
        cout << endl;
    }
    return 0;
}
