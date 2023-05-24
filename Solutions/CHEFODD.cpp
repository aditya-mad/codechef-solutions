#include <iostream>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int num, partition;
        cin >> num >> partition;

        if (partition * 2 > num)
        {
            cout << "NO" << endl;
        }
        else
        {
            long long int oddcount = (num % 2 == 0) ? (num / 2) : ((num / 2) + 1);
            oddcount -= partition;
            if (oddcount % 2 != 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}