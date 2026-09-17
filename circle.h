#pragma once
#ifndef CURCLE_H
#define CURCLE_H

#define PI 3.14159265358979323846

#include <iostream>
#include "square.h"

class circle : public square {
private:
	double radius;

public:
	circle(double r);
	circle();

	virtual ~circle() {};

	double calcsquare() const override;

};

#endif