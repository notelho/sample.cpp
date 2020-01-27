#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    int num{};
    cout << num << endl;
    cout << "Enter a integer value" << endl;
    cin >> num;
    cout << "number: " << num << endl;

    string name;
    cout << "My name is ";
    cin >> name;
    cout << "My name is " << name << endl;

    string complete;
    cout << "My complete name is ";
    cin.ignore();
    getline(cin, complete);
    cout << "My complete name is " << complete << endl;

    return 0;
}