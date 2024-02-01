#include <iostream>
using namespace std;

int main()
{
    int old_rating, new_rating;
    cin >> old_rating >> new_rating;

    if (old_rating == new_rating)
        cout << "Same";
    else if (old_rating > new_rating)
        cout << "New";
    else
        cout << "Old";

    return 0;
}
