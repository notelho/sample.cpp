#include <iostream>

using namespace std;

int main()
{

    int age = 15;

    try
    {

        if (age > 18)

            cout << "Access granted - you are old enough.";

        else

            throw 505;
    }
    catch (...)
    {
        cout << "Access denied - You must be at least 18 years old." << endl;
    }

    try
    {
        throw 404;
    }
    catch (int error)
    {
        cout << "Error " << error << endl;
    }

    return 0;
}