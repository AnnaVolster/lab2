#include "Linear.h"
#include <iostream>
#include "Solution.h"


using namespace std;

Linear::Linear() {
    k = 0;
    b = 0;
    value = NULL;
}
Linear::Linear(double _k, double _b) {
    _k = k;
    _b = b;
    value = NULL;
}


void Linear::calculate() {
    value = -b / k;
}

void Linear::print() {
    cout << "y = kx + b <=> 0 = " << k << "x + " << b << " <=> x = -" << k << "/" << b << " <=> x = " << value << endl;
}

Linear::~Linear() {}

