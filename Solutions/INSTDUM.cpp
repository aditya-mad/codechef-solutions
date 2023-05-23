#include <iostream>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int times = 0, balls, score, sum = 0;
        long double temp;
        cin >> balls;
        for (long long int i = 1; i <= balls; i++)
        {
            cin >> score;
            sum += score;
            temp = ((sum) / (float)i) * 100;

            if (temp == 100)
            {
                times++;
            }
        }

        cout << times << endl;
    }
    return 0;
}