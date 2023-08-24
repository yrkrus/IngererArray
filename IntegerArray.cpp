#include <iostream>
#include <ostream>
#include "IntegerArray.h"

IntegerArray::IntegerArray(int lenght) : lenght_(lenght)
{ 
	
}

// инкремент
IntegerArray &IntegerArray::operator++()
{
	lenght_++;
	return *this;
}
IntegerArray &IntegerArray::operator--()
{
	lenght_--;
	return *this;
}

IntegerArray::~IntegerArray()
{
}


std::ostream &operator<<(std::ostream &output, const IntegerArray &lenght)
{
	output << lenght << std::endl;
	return output;
}
