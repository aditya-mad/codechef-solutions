#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, temp, ans = 0;
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> temp;
            ans ^= temp;
        }
        cout << ans << endl;
    }
    return 0;
}
