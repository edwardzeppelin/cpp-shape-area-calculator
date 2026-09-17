#include "circle.h"

using namespace std;

circle::circle(double r) {
	radius = r;
}

circle::circle() {
	radius = 0;
}

double circle::calcsquare() const {
	return radius * radius * PI;
}