#include "triangle.h"

using namespace std;

triangle::triangle(double a, double b) {
	cateta = a;
	catetb = b;
}

triangle::triangle() {
	cateta = 0;
	catetb = 0;
}

double triangle::calcsquare() const {
	return (cateta*catetb)/2;
}