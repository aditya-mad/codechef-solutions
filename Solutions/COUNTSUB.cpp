#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int size;
        cin >> size;
        long long int nums;
        unordered_map<long long int, long long int> rep;
        long long int ans = size * (size + 1) / 2;
        for (long long int i = 0; i < size; i++)
        {
            cin >> nums;
            rep[nums]++;
            ans -= rep[nums];
        }

        cout << ans << endl;
    }

    return 0;
}