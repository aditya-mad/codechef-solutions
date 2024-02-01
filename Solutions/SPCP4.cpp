#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int total, boys, group;
        cin >> total >> boys >> group;

        int girls = (total - boys) % group;
        boys %= group;

        cout << max(girls, boys) - min(girls, boys) << endl;
    }
    return 0;
}
