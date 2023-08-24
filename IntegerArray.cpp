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



ostream &operator<<(ostream &output, const IntegerArray &lenght)
{

}
