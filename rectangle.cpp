#include "rectangle.h"

using namespace std;

rectangle::rectangle(double w, double h) {
	width = w;
	height = h;
}

rectangle::rectangle() {
	width = 0;
	height = 0;
}

double rectangle::calcsquare() const {
	return width * height;
}