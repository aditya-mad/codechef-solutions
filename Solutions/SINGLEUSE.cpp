#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int health, normal, special;
        cin >> health >> normal >> special;
        int ans = 1;
        health -= special;
        ans += health / normal;
        health = health % normal;
        (health > 0) ? (ans++) : (ans = ans);
        cout << ans << endl;
    }

    return 0;
}