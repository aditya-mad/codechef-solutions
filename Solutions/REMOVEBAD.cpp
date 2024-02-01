#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;

    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int size;
        long long int current = 1, maximum = 1;

        cin >> size;

        int input[size];

        for (int j = 0; j < size; j++)
        {
            cin >> input[j];
        }

        sort(input, input + size);

        for (int j = 0; j < size - 1; j++)
        {
            if (input[j] == input[j + 1])
            {
                current++;
            }
            else
            {
                current = 1;
            }
            if (current > maximum)
            {
                maximum = current;
            }
        }
        cout << size - maximum << endl;
    }

    return 0;
}