#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size;
        cin >> size;
        long long int alice[size], bob[size];

        for (int i = 0; i < size; i++)
        {
            cin >> alice[i];
        }

        for (int i = 0; i < size; i++)
        {
            cin >> bob[i];
        }
        int ans = 0;
        for (int i = 0; i < size; i++)
        {
            if (alice[i] > 2 * bob[i] || bob[i] > 2 * alice[i])
            {
                ans++;
            }
        }
        cout << size - ans << endl;
    }
    return 0;
}