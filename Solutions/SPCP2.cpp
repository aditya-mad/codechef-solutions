#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int aircrafts, passangers;
        cin >> aircrafts >> passangers;

        int ans = passangers / aircrafts;

        if (passangers % aircrafts != 0)
            ans++;

        if (ans <= aircrafts)
            cout << 0 << endl;
        else
            cout << ans - aircrafts << endl;
    }
    return 0;
}
