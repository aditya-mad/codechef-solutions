#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (; test--;)
    {
        int alice, bob, charlie;
        cin >> alice >> bob >> charlie;

        if (alice <= bob && alice <= charlie)
        {
            cout << "Alice" << endl;
        }
        else if (bob <= alice && bob <= charlie)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie" << endl;
        }
    }
    return 0;
}