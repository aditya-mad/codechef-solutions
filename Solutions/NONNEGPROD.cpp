#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int num, negative = 0, zero = 0;
        cin >> num;
        int input[num];

        for (int j = 0; j < num; j++)
        {
            cin >> input[j];
            if (input[j] < 0)
            {
                negative++;
            }
            else if (input[j] == 0)
            {
                zero++;
            }
        }

        if (zero > 0 || negative % 2 == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << "1" << endl;
        }
    }

    return 0;
}