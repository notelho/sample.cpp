#include <iostream>
using namespace std;

void foo()
{
    cout << "I just got executed!" << endl;
}

void foo(string name)
{
    cout << "My name is " << name << endl;
}

void def(string country = "Norway")
{
    cout << country << "\n";
}

int plusFunc(int x, int y)
{
    return x + y;
}

double plusFunc(double x, double y)
{
    return x + y;
}

void swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{

    // default

    def();
    def("test");

    // overloading

    foo();
    foo("Nathan");
    foo("Paulo");

    int myNum1 = plusFunc(8, 5);
    double myNum2 = plusFunc(4.3, 6.26);

    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;

    // pointers

    int firstNum = 10;
    int secondNum = 20;

    cout << "Before swap: " << endl;
    cout << firstNum << secondNum << endl;

    swap(firstNum, secondNum);

    cout << "After swap: " << endl;
    cout << firstNum << secondNum << endl;

    return 0;
}