
#include <iostream>
#include "Series.h"
using namespace std;

void Series::EnterValue(Solution* func) const {
	//int n;
	//cout << "Enter the number of equations";
	//cin >> n;
	//for (int i = 0; i < n; i++) {
		func->calculate();
		func->print();
	//}
}