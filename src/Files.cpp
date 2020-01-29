#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string fileName = "filename.txt";
    string fileContent = "Files can be tricky, but it is fun enough!";

    ofstream MyFile(fileName.c_str());

    MyFile << fileContent;
    MyFile.close();

    string myText;

    ifstream MyReadFile(fileName.c_str());

    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }

    MyReadFile.close();
}