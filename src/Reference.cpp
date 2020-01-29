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

    string food = "Pizza"; // Variable declaration
    string *ptr = &food;   // Pointer declaration
    string &meal = food;

    cout << food << "\n";
    cout << meal << "\n";
    cout << &food << "\n";

    cout << "============================" << endl;

    // Output the value of food (Pizza)
    cout << food << "\n";
    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";
    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    cout << "============================" << endl;

    // Reference: Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";
    // Dereference: Output the value of food with the pointer (Pizza)
    cout << *ptr << "\n";

    cout << "============================" << endl;

    // Change the value of the pointer
    *ptr = "Hamburger";
    // Output the new value of the pointer
    cout << *ptr << "\n";
    // Output the new value of the food variable
    cout << food << "\n";

    cout << "============================" << endl;

    return 0;
}