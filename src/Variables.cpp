#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <typeinfo>

using namespace std;

int main()
{

    cout << "int, pointer and sizeof" << endl;
    int number = 54121;
    int *memory = &number;
    int size = sizeof(number);
    cout << number << endl;
    cout << memory << endl;
    cout << size << endl;

    cout << "signed and unsigned" << endl;
    signed number2 = -1;
    unsigned number3 = -1;
    cout << number2 << endl;
    cout << number3 << endl;

    cout << "float, double, long double and precision";
    float f1 = 1.1f;
    double f2 = 1.2f;
    long double f3 = 1.1231322312f;
    cout << f1 << endl;
    cout << f2 << endl;
    cout << f2 + f1 << endl;
    cout << setprecision(3) << f3 << endl;

    // cout << "auto is not working";
    // auto autotest = 1.1;
    // cout << "type: " << typeid(autotest).name() << endl;

    cout << "types" << endl;
    const int myNum = 5;
    double myFloatNum = 5.99;
    char myLetter = 'D';
    string myText = "Hello";
    bool myBoolean = true;

    cout << "default sum" << endl;
    int x = 5, y = 6, z = 50;
    cout << x + y + z << endl;

    cout << "value initialization" << endl;
    int a{1}, b{2}, c{3};
    cout << a + b + c << endl;

    // Depending on context, the initializer may invoke:
    // Value initialization, e.g. std::string s{};
    // Direct initialization, e.g. std::string s("hello");
    // Copy initialization, e.g. std::string s = "hello";
    // List initialization, e.g. std::string s{'a', 'b', 'c'};
    // Aggregate initialization, e.g. char a[3] = {'a', 'b'};
    // Reference initialization, e.g. char& c = a[0];
    // If no initializer is provided, the rules of default initialization apply.

    return 0;
}