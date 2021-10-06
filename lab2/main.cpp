#include <iostream>
#include "Linear.h"
#include "Solution.h"
#include "Square.h"

using namespace std;

int main() {

	Solution* sol = new Solution;
	Linear* lin = new Linear(1, 2);
	Square* sq = new Square;

	sol = lin;

	sol->calculate();



}