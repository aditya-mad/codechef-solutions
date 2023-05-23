#include <iostream>
using namespace std;

int main()
{
    int alice, bob;

    cin >> alice >> bob;

    if (alice >= (bob * 2))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}