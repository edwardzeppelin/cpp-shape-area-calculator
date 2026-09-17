#include "trapeze.h"

using namespace std;

trapeze::trapeze(double s, double b, double h) {
	small = s;
	big = b;
	height = h;
}

trapeze::trapeze() {
	small = 0;
	big = 0;
	height = 0;
}

double trapeze::calcsquare() const {
	return ((small + big) / 2) * height;
}