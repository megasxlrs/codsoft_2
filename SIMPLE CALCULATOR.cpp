#include<iostream>
using namespace std;
class calculator {
private:
	double x, y;
	double result;
public:
	void addition() {
		cout << "Enter your first value:" << endl;
		cin >> x;
		cout << "Enter your second value:" << endl;
		cin >> y;
		result = x + y;
		cout << "Your result after Addition is:\n" << result<<endl;
	}
	void subtraction() {
		cout << "Enter your first value:" << endl;
		cin >> x;
		cout << "Enter your second value:" << endl;
		cin >> y;
		result = x - y;
		cout << "Your result after subtraction  is:\n" << result << endl;
	}
	void multipication() {
		cout << "Enter your first value:" << endl;
		cin >> x;
		cout << "Enter your second value:" << endl;
		cin >> y;
		result = x * y;
		cout << "Your result after Multipication  is:\n" << result << endl;
	}
	void division() {
		cout << "Enter your first value:" << endl;
		cin >> x;
		cout << "Enter your second value:" << endl;
		cin >> y;
		if (y != 0) {
			result = x / y;
			cout << "Your result after Division  is:\n" << result << endl;
		}
		else {
			cout << "Invalid! check your second value:\n";
		}
	}
};
int main() {
	calculator s1;
	double a, b;
	int operation;
	cout << "Which! operation you want to perform:"<<endl;
	cout << "Press 1. for Addition:" << endl;
	cout<<  "Press 2. for Subtraction:" << endl;
	cout << "Press 3. for Multipication:" << endl;
	cout << "Press 4. for Division:" << endl;
	cout << "Enter your option:";
	cin >> operation;
	if (operation > 4 || operation < 1) {
		cout << "You made an invalid choice:\n";
	}
	else if (operation == 1) {
	s1.addition();
	}
	else if (operation == 2) {
	s1.subtraction();
	}
	else if (operation == 3) {
	s1.multipication();
	}
	else if (operation == 4) {
	s1.division();
	}
	system("pause");
}