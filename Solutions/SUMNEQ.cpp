#include <iostream>
using namespace std;

int main()
{
    int num, pairs = 0;

    cin >> num;

    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j < num; j++)
        {
            if ((i + j) == num)
            {
                pairs++;
            }
        }
    }
    cout << pairs;
    return 0;
}