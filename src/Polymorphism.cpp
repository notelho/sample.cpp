#include <iostream>
#include <string>
using namespace std;

class Number
{
public:
    virtual int getNum() = 0;
};

class Even : public Number
{
public:
    int getNum()
    {
        return 2;
    }
};

class Odd : public Number
{
public:
    int getNum()
    {
        return 3;
    }
};

int main()
{

    Odd odd;
    Even even;

    int number_2 = even.getNum();
    int number_3 = odd.getNum();

    cout << number_2 << endl;
    cout << number_3 << endl;

    return 0;
}
