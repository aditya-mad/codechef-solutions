#include <iostream>
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
        cin >> size;
        unordered_map<string, int> memo;
        string temp;
        for (; size--;)
        {
            cin >> temp;
            memo[temp]++;
        }
        cout << memo["O"] + memo["AB"] + max(memo["A"], memo["B"]) << endl;
    }
    return 0;
}
