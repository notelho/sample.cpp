#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
    void myFunction()
    {
        cout << "Some content in parent class." << endl;
    }
};

class MyChild : public MyClass
{
};

class MyGrandChild : public MyChild
{
};

class Employee
{
protected:
    int salary;
};

class Programmer : public Employee
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

// class Vehicle
// {
// public:
//     Vehicle()
//     {
//         string brand = "Ford";
//     }

//     void honk()
//     {
//         cout << "Tuut, tuut! \n";
//     }
// };

// class Car : public Vehicle
// {
// public:
//     Car()
//     {
//         string model = "Mustang";
//     }
// };

int main()
{
    MyGrandChild myObj;
    myObj.myFunction();

    // Car car;
    // car.honk();
    // cout << car.brand + " " + car.model << endl;

    Programmer programmer;
    programmer.setSalary(50000);
    programmer.bonus = 15000;
    cout << "Salary: " << programmer.getSalary() << "\n";
    cout << "Bonus: " << programmer.bonus << "\n";
    return 0;
}
