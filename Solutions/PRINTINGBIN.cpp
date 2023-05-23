#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int size;
        cin >> size;
        int num;

        for (long long int i = 0; i < size; i++)
        {
            cin >> num;
            int print = (num == 1) ? (0) : (1);
            cout << print << " ";
        }
        cout << endl;
    }

    return 0;
}