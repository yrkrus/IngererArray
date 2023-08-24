#include <iostream>
#include <ostream>
#include "IntegerArray.h"


IntegerArray::IntegerArray(int lenght) : lenght_(lenght)
{
	massiv_ = new int[lenght] {};	
}

IntegerArray::IntegerArray(const IntegerArray &object)
{
	for (size_t i=0; i < lenght_; ++i) 
	{
		massiv_[i] = object.massiv_[i];
	}	
}


IntegerArray::~IntegerArray()
{
	delete[] massiv_;
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

int IntegerArray::getLenght()
{
	return lenght_;
}

int &IntegerArray::operator[](int index)
{
	return massiv_[index];
}

void IntegerArray::getShow()
{
	for (size_t i = 0; i < lenght_; i++) 
	{
		std::cout << massiv_[i] <<std::endl;
	}
}

int &IntArray::operator[](int index)
{
	return m_data[index];

}
