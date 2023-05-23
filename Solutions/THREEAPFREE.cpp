#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size;
        cin >> size;
        vector<long long int> memo(size);
        long long int temp;
        bool ans = false;

        for (int i = 0; i < size; i++)
        {
            cin >> memo[i];
        }

        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                for (int k = j + 1; k < size; k++)
                {
                    if (memo[j] - memo[i] == memo[k] - memo[j])
                    {
                        ans = true;
                        break;
                    }
                }
                if (ans)
                {
                    break;
                }
            }
            if (ans)
            {
                break;
            }
        }
        if (ans)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}