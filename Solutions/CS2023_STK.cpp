#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int size;
        cin >> size;
        long long int om, addy, omans = 0, omiter = 0, addyiter = 0, addyans = 0;

        for (long long int i = 0; i < size; i++)
        {
            cin >> om;
            if (om == 0)
            {
                omans = max(omans, omiter);
                omiter = 0;
            }
            else
            {
                omiter++;
            }
        }
        omans = max(omans, omiter);

        for (long long int i = 0; i < size; i++)
        {
            cin >> addy;
            if (addy == 0)
            {
                addyans = max(addyans, addyiter);
                addyiter = 0;
            }
            else
            {
                addyiter++;
            }
        }

        addyans = max(addyans, addyiter);
        if (addyans == omans)
        {
            cout << "Draw" << endl;
        }
        else if (addyans > omans)
        {
            cout << "Addy" << endl;
        }
        else
        {
            cout << "Om" << endl;
        }
    }
    return 0;
}
