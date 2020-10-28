#include <iostream>
#include <string>

using namespace std;

int main() {

	//Create a calculator application, create a menu to select an operation, use a function to
	//perform that operation. Operations include: adding, substracting, dividing (not by 0),
	//multiplying, power, remainder, square of a number.

	int x; //number of the required operation
	void addition();
	void substraction();
	void multiplication();
	void division();
	void power();
	void remainder();
	void square();

	cout << "CALCULATOR" << endl;
	cout << "\n I perform these operations:\n\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division" << endl;
	cout << "5.Power of a number\n6.Remainder of a number\n7.Square of a number" << endl;
	cout << "\n\n To choose an operation type in the corresponding number\n" << endl;
	cin >> x;

	if (x == 1) addition(); else if (x == 2) substraction(); else if (x == 3) multiplication();
	else if (x == 4) division(); else if (x == 5) power(); else if (x == 6) remainder();
	else if (x == 7) square();
	else cout << "You didn't type in the correct number of an operation, please try again";


 
	system("pause");
	return 0;

}

void addition() {

	int a;
	int b;
	int c;
	cout << "\n Thank you for choosing addition. Please type in the first number" << endl;
	cin >> a;
	cout << "\n Type in the second number" << endl;
	cin >> b;
	c = a + b;
	cout << "\n" << a << " + " << b << " = " << c;

}

void substraction() {

	int a;
	int b;
	int c;
	cout << "\n Thank you for choosing substraction. Please type in the first number\n" << endl;
	cin >> a;
	cout << "\n Type in the second number\n" << endl;
	cin >> b;
	c = a - b;
	cout << "\n" << a << " - " << b << " = " << c;


}

void multiplication() {

	int a;
	int b;
	int c;
	cout << "\n Thank you for choosing multiplication. Please type in the first number\n" << endl;
	cin >> a;
	cout << "\n Type in the second number\n" << endl;
	cin >> b;
	c = a * b;
	cout << "\n" << a << " * " << b << " = " << c;


}

void division() {

	int a;
	int b;
	double c;
	cout << "\n Thank you for choosing division. Please type in the first number\n" << endl;
	cin >> a;
	cout << "\n Type in the second number\n" << endl;
	cin >> b;
	while (b == 0) {
		cout << "You can't divide by zero, please try again";
		cin >> b;
	}

	c = a / b;
	cout << "\n" << a << " / " << b << " = " << c;

}

void power() {

	int a;
	int b;
	cout << "\n Thank you for choosing power of a number. Please type in a number which you want to be powered up\n" << endl;
	cin >> a;
	cout << "\n Type in the power";
	cin >> b;
	if (b == 0) cout << a << "^0 = 1";
	else {
		for (int i = 1; i <= b; i++) {
			 
			a = a * a;
			

		}
	cout << a;
	}
	




}

void remainder() {


}

void square() {



}

