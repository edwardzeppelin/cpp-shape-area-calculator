#pragma once
#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>

class square {
public:
	virtual double calcsquare() const = 0;
	virtual ~square() {}
};

#endif