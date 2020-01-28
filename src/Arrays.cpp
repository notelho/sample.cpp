
#include <iostream>

using namespace std;

int main()
{

    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

    cars[0] = "Opel";
    cout << cars << endl;
    cout << cars[0] << endl;
    cout << cars[0] << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << cars[i] << "\n";
    }

    string foods[5];
    foods[0] = "Beet";
    foods[1] = "Broccoli";
    foods[2] = "Cabbage";
    foods[3] = "Carrot";
    foods[4] = "Cauliflower";
    for (int i = 0; i < 5; i++)
    {
        cout << foods[i] << "\n";
    }
}