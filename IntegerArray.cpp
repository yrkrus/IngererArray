#include <iostream>
#include <ostream>
#include "IntegerArray.h"

IntegerArray::IntegerArray(int lenght) : lenght_(lenght)
{ 	
}

IntegerArray::~IntegerArray()
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

IntegerArray IntegerArray::operator++(int)
{
	IntegerArray old(*this);
	++(*this);
	return old;
}

IntegerArray IntegerArray::operator--(int)
{
	IntegerArray old(*this);
	--(*this);
	return old;
}


// вывод count
std::ostream &operator<<(std::ostream &output, const IntegerArray &object)
{
	for (size_t i = 0; i < object.lenght_; ++i )
	{
		output << object.massiv_[i] << " ";
	}
	return output;
}
