#pragma once

#include <iostream>
#include <ostream>
#include <exception>


class IntegerArray 
{
public:
	IntegerArray() = default;
	IntegerArray(const int lenght);	

	~IntegerArray() {};

	friend ostream &operator << (ostream &output, const IntegerArray &lenght);

private:
	int lenght_;

};