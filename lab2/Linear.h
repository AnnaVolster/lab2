#pragma once
#include <iostream>
#include "Solution.h"

using namespace std;

class Linear : public Solution {
private:
    double k;
    double b;
    double value;
public:
    
    Linear() {
        k = 0;
        b = 0;
        value = NULL;
    }
    Linear(double _k, double _b) {
        _k = k;
        _b = b;
        value = NULL;
    }
    
    
    void calculate(double b, double k, double value) {
        value = -b / k;
    }
    
    void print(double b, double k, double value) {
        cout << "y = kx + b <=> 0 = " << k << "x + " << b << " <=> x = -" << k << "/" << b << " <=> x = " << value << endl;
    }

    ~Linear() {}
};