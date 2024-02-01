#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int temp;
        vector<int> alice(3), bob(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> alice[i];
        }
        for (int i = 0; i < 3; i++)
        {
            cin >> bob[i];
        }

        sort(alice.rbegin(), alice.rend());
        sort(bob.rbegin(), bob.rend());

        if (bob[0] + bob[1] > alice[0] + alice[1])
        {
            cout << "Bob" << endl;
        }
        else if (bob[0] + bob[1] < alice[0] + alice[1])
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}
