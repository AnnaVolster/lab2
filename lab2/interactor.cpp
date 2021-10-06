#include <iostream>
#include "Linear.h"
#include "Solution.h"
#include "Square.h"

using namespace std;


void interactor()
{
	int command;
	cout << "Enter command: \n 1-Linear \n 2-Square";
	cin >> command; if (command < 1 || command > 2)
	{
		throw std::exception("Enter correct command");
	}
	switch (command) {
	case 1: {
		cout << "Enter the number of equations";
		double k, b;
		cin >> k >> b;

		break;
		}
	case 2: {
		cout << "Enter the number of equations";
		double a, b, c;
		cin >> a >> b >> c;

		break;
		}
	}

}