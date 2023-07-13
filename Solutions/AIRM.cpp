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
        int size, ans = 0, arrival, departure;
        cin >> size;
        unordered_map<int, int> memo;

        for (int i = 0; i < size; i++)
        {
            cin >> arrival;
            memo[arrival]++;
        }
        for (int i = 0; i < size; i++)
        {
            cin >> departure;
            memo[departure]++;
        }

        for (auto x : memo)
        {
            ans = max(ans, x.second);
        }
        cout << ans << endl;
    }

    return 0;
}