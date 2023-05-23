#include <iostream>
using namespace std;

int main()
{
    long long int test;
    cin >> test;
    for (; test--;)
    {
        long long int i, num, size, search;
        int ans = 0, validate = 1, index;
        cin >> size >> search;
        for (i = 0; i < size; i++)
        {
            cin >> num;
            if (num == search)
            {
                if (validate)
                {
                    validate = 0;
                    ans = 1;
                    index = i;
                }
            }
        }

        if ((ans) && ((index != size - 1) || size == 1))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}