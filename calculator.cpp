
#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

double Add(double a, double b);
double Sub(double a, double b);
double Mult(double a, double b);
double Div(double a, double b);
double Remain(double a, double b);
double Power(double a, double b);

double Add(double a, double b)
{
	double answer = a + b;
	return answer;
}

double Sub(double a, double b)
{
	double answer = a - b;
	return answer;
}

double Mult(double a, double b)
{
	double answer = a * b;
	return answer;
}

double Div(double a, double b)
{
	double answer = a / b;
	return answer;
}

double Remain(double a, double b)
{
	double answer = a / b;
	return answer;
}

double Power(double a, double b)
{
	double answer = pow(a,b);
	return answer;
}


int main ()
{
	double num1,num2,a;
	int choice;

	cout << "Please enter a number\n";
	cin >> num1;
	cout << "Please enter another number\n";
	cin >> num2;

	cout << "Select the function you would like to use" << endl;

	cout << "1. Addition\n";
 	cout << "2. Subtraction\n";
	cout << "3. Multiplication\n";
	cout << "4. Division\n";
	cout << "5. Remainder\n";
	cout << "6. Power\n";

	cin >> choice;

	switch(choice)
	{
	case 1:
		 a =  Add(num1,num2);
		 cout<< a << endl;
		break;
	case 2:
		 a = Sub(num1,num2);
		 cout<< a << endl;
		break;
	case 3:
		a =  Mult(num1,num2);
		cout<< a << endl;
		break;
	case 4:
		 a = Div(num1,num2);
		 cout<< a << endl;
		break;
	case 5:
		 a = Remain(num1,num2);
		 cout<< a << endl;
		break;
	case 6:
		 a = Power(num1,num2);
		 cout<< a << endl;
		break;

	default:
		cout << "Please select a valid function" << endl;
	}

}
