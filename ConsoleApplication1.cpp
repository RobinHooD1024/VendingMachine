
#include <iostream>
using namespace std;

int main()
{
	char op;
	float num1;
	float num2;

	
	int result = 1;

	while (true) {
		cout << "Enter the operation: " << endl;
		cin >> op;

		if (op == 'q') {
			break;
		}

		if (op == '!') {
			cout << "Enter the number: ";
			cin >> num1;

		}

		else {
			cout << "Enter two numbers: " << endl;
			cin >> num1;
			cin >> num2;
		}

		switch (op)
		{
		case '!': {
			
			for (int i = 1; i <= num1; i++) {
				result *= i;
			}

		case '+': {
			cout << "The sum is equal: " << num1 + num2 << endl;
			break;
		}

		case '-': {
			cout << "The substact is equal: " << num1 - num2 << endl;
			break;
		}

		case '*': {
			cout << "The multiply result is equal: " << num1 * num2 << endl;
			break;
		}

		case '/': {
			cout << "The dividing result is equal: " << num1 / num2 << endl;
			break;
		}


		default:
			break;
		}

		}

	}
}