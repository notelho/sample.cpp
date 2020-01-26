#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    cout << "============================" << endl;

    int x = 10;
    int &y = x;

    cout << x << endl;
    cout << y << endl;

    y++;

    cout << x << endl;
    cout << y << endl;

    x++;

    cout << x << endl;
    cout << y << endl;

    cout << "============================" << endl;

    int w = 10;
    int j = w;

    cout << w << endl;
    cout << j << endl;

    j++;

    cout << w << endl;
    cout << j << endl;

    w++;

    cout << w << endl;
    cout << j << endl;

    cout << "============================" << endl;

    return 0;
}