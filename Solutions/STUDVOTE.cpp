#include <bits/stdc++.h>
#define dis -999999
using namespace std;

int main()
{

    int test;

    cin >> test;

    while (test--)
    {
        long long int N, K, win = 0;
        unordered_map<long long int, long long int> votes;
        cin >> N >> K;

        long long int persons;

        for (long long int i = 0; i < N; i++)
        {
            cin >> persons;
            if (i + 1 == persons)
            {
                votes[persons] = dis;
            }
            else
            {
                votes[persons]++;
            }
        }

        for (auto temp : votes)
        {
            if (temp.second >= K)
            {
                win++;
            }
        }
        cout << win << endl;
    }

    return 0;
}