#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include "square.h"

class triangle : public square {
private:
	double cateta;
	double catetb;

public:
	triangle(double a, double b);
	triangle();

	virtual ~triangle() {}

	double calcsquare() const override;

};

#endif
