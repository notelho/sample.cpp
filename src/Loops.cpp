#include <iostream>

using namespace std;

int main()
{

    cout << "=======================" << endl;

    int i = 0;
    while (i < 10)
    {
        cout << i << "\n";
        i++;
        if (i == 4)
        {
            break;
        }
    }

    cout << "=======================" << endl;

    int j = 0;
    while (j < 10)
    {
        if (j == 4)
        {
            j++;
            continue;
        }
        cout << j << "\n";
        j++;
    }

    cout << "=======================" << endl;

    for (int w = 0; w < 5; w++)
    {
        cout << w << "\n";
    }

    cout << "=======================" << endl;

    for (int x = 0; x <= 10; x = x + 2)
    {
        cout << x << "\n";
    }

    cout << "=======================" << endl;

    return 0;
}