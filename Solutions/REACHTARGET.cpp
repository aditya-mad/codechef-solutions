#include <iostream>
using namespace std;

int main()
{
    int team_a, team_b, test;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        cin >> team_a >> team_b;

        cout << team_a - team_b << endl;
    }

    return 0;
}