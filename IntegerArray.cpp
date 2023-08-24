#include <iostream>
#include <ostream>
#include "IntegerArray.h"


IntegerArray::IntegerArray(int lenght) : lenght_(lenght)
{
	std::cout << "Конструктор IntegerArray(int lenght)" << std::endl;
	massiv_ = new int[lenght] {};	
}



IntegerArray::~IntegerArray()
{
	std::cout << "Дестструктор IntegerArray(int lenght)" << std::endl;
	delete[] massiv_;
}


IntegerArray::IntegerArray(const IntegerArray &ptr)
{
	lenght_ = ptr.lenght_;
	
	massiv_ = new int[lenght_];
	
	for (size_t i = 0; i < lenght_; ++i)
	{
		massiv_[i] = ptr.massiv_[i];
	}

}

int IntegerArray::getLenght()
{
	return lenght_;
}

int &IntegerArray::operator[](int index)
{
	return massiv_[index];
}

IntegerArray &IntegerArray::operator=(const IntegerArray &ptr)
{	
	for (size_t i = 0; i < lenght_; ++i) 
	{
		massiv_[i] = ptr.massiv_[i];
	}		
	return *this;
}

void IntegerArray::getShow()
{
	for (size_t i = 0; i < lenght_; i++) 
	{
		std::cout << massiv_[i] <<std::endl;
	}
}


