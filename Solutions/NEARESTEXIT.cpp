#include <iostream>
using namespace std;

int main()
{
    int num, seat;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> seat;

        if (seat > 50)
            cout << "RIGHT" << endl;
        else
            cout << "LEFT" << endl;
    }
}