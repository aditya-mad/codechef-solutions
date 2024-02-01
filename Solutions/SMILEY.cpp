#include <iostream>
#include <string>
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
        int size;
        string input;
        cin >> size;
        cin >> input;

        bool ind = false;
        bool cont = false;
        int need = 0;
        long long int ans = 0;

        for (auto x : input)
        {
            if (x == ':')
            {
                if (!cont)
                {
                    ind = true;
                }
                else
                {
                    ans++;
                    cont = false;
                }
            }
            else if (x == ')' && ind)
            {
                cont = true;
            }
            else if (x == '(')
            {
                cont = false;
                ind = false;
            }
        }
        cout << ans << endl;
    }

    return 0;
    return 0;
}