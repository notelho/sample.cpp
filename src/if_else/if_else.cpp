#include <iostream>

using namespace std;

int main()
{
	int grade;

	cout << "Enter your grade : ";

	cin >> grade;
	if (grade >= 9)
		cout << "A\n";
	else if (grade >= 8)
		cout << "B\n";
	else if (grade >= 7)
		cout << "C\n";
	else if (grade >= 6)
		cout << "D\n";
	else
	{
		cout << "F : Fail.\n";
		cout << "You must take this course again.\n";
	}

	return 0;
}
