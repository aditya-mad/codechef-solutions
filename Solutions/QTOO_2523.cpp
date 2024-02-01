#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    long long int test;
    cin >> test;
    for (; test--;)
    {
        long long int len;
        unordered_map<char, long long int> storage;
        string input;
        bool possible = false;

        cin >> len >> input;

        for (auto x : input)
        {
            storage[x]++;
            if (storage[x] == 2)
            {
                possible = true;
                break;
            }
        }

        if (possible)
        {
            cout << len - 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}