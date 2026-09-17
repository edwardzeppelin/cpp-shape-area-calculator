#pragma once
#ifndef TRAPEZE_H
#define TRAPEZE_H

#include <iostream>
#include "square.h"

class trapeze : public square {
private:
	double small;
	double big;
	double height;

public:
	trapeze(double s, double b, double h);
	trapeze();

	virtual ~trapeze() {}

	double calcsquare() const override;

};

#endif
