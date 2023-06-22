#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{

    long long int size;
    cin >> size;
    vector<string> words(size);
    unordered_map<string, int> memo;

    for (long long int i = 0; i < size; i++)
    {
        cin >> words[i];
        memo[words[i]]++;
    }

    for (int i = size - 1; i > -1; i--)
    {
        if (memo[words[i]] != 0)
        {
            memo[words[i]] = 0;
            cout << words[i][words[i].length() - 2] << words[i][words[i].length() - 1];
        }
    }

    return 0;
}