
#include <iostream>
using namespace std;



int main(){

	float num1, num2;
	char operation;

	cout << "Enter your first number: ";
	cin >> num1;

	cout << "Enter your second number: ";
	cin >> num2;

	cout << "Choose the operator (*,/,-,+): ";
	cin >> operation;

	switch (operation) {

	case '+':
		cout << "The sum is " << num1 + num2;
		break;

	case'-':
		cout << "The sub is " << num1 - num2;
		break;

	case'*':
		cout << "The mult is " << num1 * num2;
		break;

	case'/':
		if (num2 == 0) {
			cout << "ERROR";

		}

		else {
			cout << "The div is " << num1 / num2;

		}
		break;


	defult:
		cout << "ERROR";
	}
































	return 0;
}



