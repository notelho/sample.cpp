#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <typeinfo>

using namespace std;

int main()
{

    int number = 54121;
    int *memory = &number;
    int size = sizeof(number);
    signed number2 = -1;
    unsigned number3 = -1;

    int test{10};

    cout << test << endl;

    cout << number2 << endl;
    cout << number3 << endl;

    cout << number << endl;
    cout << memory << endl;
    cout << size << endl;

    float f1 = 1.1f;
    double f2 = 1.2f;
    long double f3 = 1.1231322312f;

    cout << f1 << endl;
    cout << f2 << endl;
    cout << f2 + f1 << endl;
    cout << setprecision(3) << f3 << endl;

    // auto autotest = 1.1;
    // cout << "type: " << typeid(autotest).name() << endl;

    return 0;
}