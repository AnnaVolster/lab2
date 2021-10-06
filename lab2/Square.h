#pragma once
#include <iostream>
#include <algorithm>
#include "Solution.h"

//#define EPSILON 0.000000000001;

using namespace std;

class Square : public Solution {
private:
	double a;
	double b;
	double c;
	double d;
    double x1;
    double x2;
public:
    /*
    Square() {
        a = 0;
        b = 0; 
        c = 0;
        x1 = NULL;
        x2 = NULL;
    }
    */
    Square(double _a, double _b, double _c) {
        a = _a;
        b = _b;
        c = _c;
        x1 = NULL;
        x2 = NULL;
    }


    void calculate() {
        d = b * b - 4 * a * c;

        if (d < 0) {
            throw std::exception("Discriminant is less than zero.");
        }
        else {

            x1=((-b + sqrt(d)) / (2.0 * a));

            if (abs(d) > 0.000000000001)
                x2=((-b - sqrt(d)) / (2.0 * a));
        }
    }

    void print() {
                cout << "y = ax^2 + bx + c <=> \n0 = " << a << "x^2 + " << b << "x + " << c << " <=> \nd = " << d << " <=> " << endl;
           
        if (x2!=NULL) {
            cout << "x[1] = " << x1 << ", x[2] = " << x2 << endl;
        }
        else {
            cout << "x = " << x1 << endl;
        }
    }

    ~Square() {}
};