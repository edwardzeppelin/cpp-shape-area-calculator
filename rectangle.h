#pragma once
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "square.h"

class rectangle : public square {
private:
	double width;
	double height;
public:
	rectangle(double w, double h);
	rectangle();
	
	virtual ~rectangle() {}
	
	double calcsquare() const override;

};

#endif