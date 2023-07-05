#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, shift;
        string corr, cease, find;

        cin >> size;
        cin >> corr >> cease >> find;

        shift = cease[0] - corr[0];
        shift = (shift < 0) ? (26 + shift) : (shift);

        char alph[26];
        for (int i = 0; i < 26; i++)
        {
            alph[i] = 'a' + i;
        }

        for (auto x : find)
        {
            cout << alph[(x - 'a' + shift) % 26];
        }
        cout << endl;
    }
}