#include <iostream>
#include <ostream>
#include "IntegerArray.h"

extern const bool DEBUG = true;



IntegerArray::IntegerArray(int lenght) : lenght_(lenght)
{
	if (DEBUG) { std::cout << "����������� IntegerArray(int lenght)" << std::endl; }
	massiv_ = new int[lenght] {};	
}



IntegerArray::~IntegerArray()
{
	if (DEBUG) { std::cout << "������������ IntegerArray(int lenght)" << std::endl; }
	delete[] massiv_;
}


IntegerArray::IntegerArray(const IntegerArray &ptr)
{
	if (DEBUG) { std::cout << "����������� ����������� IntegerArray(int lenght)" << std::endl; }
	
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

void IntegerArray::getData(int index)
{
	std::cout << "������� ������� � �������� " << index<< " ����� " << massiv_[index] << std::endl;
	
}

// ��������� �������
void IntegerArray::resizeLenght(int newlenght)
{
	int *newdata = new int[newlenght];

	for (size_t i = 0; i < newlenght; ++i) 
	{
		newdata[i] = massiv_[i];
	}

	delete[] massiv_;

	massiv_ = newdata;
	lenght_ = newlenght;

}

// ������� �������� � ������
void IntegerArray::insert(int index, int newvalue)
{
	massiv_[index] = newvalue;
}

void IntegerArray::remove(int index)
{

}


