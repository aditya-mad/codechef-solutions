#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    while (test--)
    {
        int power, health;
        cin >> power >> health;

        int i = 0;

        while (health > 0)
        {
            if (i < 5)
                health -= (power / 2);
            else
                health -= power;
            i++;
        }
        cout << i << endl;
    }

    return 0;
}
