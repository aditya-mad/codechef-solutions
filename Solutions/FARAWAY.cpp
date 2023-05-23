#include <iostream>
using namespace std;

int main()
{
    unsigned long long int num, N, M, sum;
    unsigned long long int input;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> N >> M;
        sum = 0;
        for (int j = 0; j < N; j++)
        {
            cin >> input;

            if (input > M / 2)
            {
                sum = sum + input - 1;
            }
            else
            {
                sum = sum + M - input;
            }
        }
        cout << sum << endl;
    }
}