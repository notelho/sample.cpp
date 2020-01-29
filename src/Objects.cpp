#include <iostream>

using namespace std;

class Employee
{
private:
    int salary;

public:
    void setSalary(int salary)
    {
        this->salary = salary;
    }
    int getSalary()
    {
        return salary;
    }
};

class MyClass
{
public:
    void myMethod();

    MyClass()
    {
        cout << "My class constructor" << endl;
    }
};

void MyClass::myMethod()
{
    cout << "Method outside class" << endl;
}

class Car
{
public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed)
{
    return maxSpeed;
}

int main()
{
    MyClass myObj;
    myObj.myMethod();

    Employee employee;
    employee.setSalary(50000);
    cout << employee.getSalary() << endl;

    Car car;
    cout << car.speed(200);
    return 0;
}
