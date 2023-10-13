#include <iostream>
using namespace std;
int main()
{
	int a, b;
	string c;
	cout << "Hello, it's my very first and very simple calculator."\
		" All you can do is '+' '-' '*' '/' 'sqrt' '%'." << endl;
	cout << "Gimme a first number" << endl;
	cin >> a;
	cout << "Gimme a second number" << endl;
	cin >> b;
	cout << "Wha' u wanna do?" << endl;
	cin >> c;
	if (c == "+") {
		cout << "This is ";
		cout << a + b;
	}
	else if (c == "-") {
		cout << "This is ";
		cout << a - b;
	}
	else if (c == "*") {
		cout << "This is ";
		cout << a * b;
	}
	else if (c == "/") {
		cout << "This is ";
		cout << a / b;
	}
	else if (c == "sqrt") {
		cout << "This is ";
		cout << sqrt(a + b);

	}
	else if (c == "%") {
		cout << "This is ";
		cout << (a * b) / 100;
	}

	cout << endl << "Have a great day!" << endl;
	cout << "Press something to quit";
}