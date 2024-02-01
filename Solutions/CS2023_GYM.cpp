#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int test;
    cin >> test;
    for (; test--;)
    {
        long long int no, votes;
        cin >> no >> votes;

        long long int ans = votes;
        ans /= 2;

        cout << ++ans << endl;
    }
    return 0;
}
