#include <iostream>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int size, vows;
        cin >> size >> vows;
        string word;
        cin >> word;

        long long int currvowc = 0, lettercount = 0, ans = 1;
        bool vowflag = false;

        for (auto x : word)
        {
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
            {
                currvowc++;
            }
            if (currvowc > vows)
            {
                currvowc = 1;
                ans = ans * lettercount % 1000000007;
                lettercount = 0;
                vowflag = false;
            }
            if (currvowc == vows)
            {
                vowflag = true;
            }
            if (vowflag)
            {
                lettercount++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}