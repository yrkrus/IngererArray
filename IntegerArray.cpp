#include <iostream>
#include <ostream>
#include "IntegerArray.h"

extern const bool DEBUG = false;



IntegerArray::IntegerArray(int lenght) : lenght_(lenght)
{
	if (DEBUG) { std::cout << "����������� IntegerArray(int lenght)" << std::endl; }
	if (!lenght || lenght < 0) 
	{
		throw  MyExcept("����� ������� �� ������ ���� �������������, ������� �������� �������: " + lenght);
	}
	
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
	if (index<0 || index>lenght_) 
	{
		throw MyExcept("�������� � �������� �� ����������");
	}
	
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
	if (index<0 || index > lenght_) 
	{
		throw MyExcept("������� � ������� �� ����������");
	}
	
	massiv_[index] = newvalue;
}

void IntegerArray::remove(int index)
{		
	if (index < 0 || !index) 
	{
		throw MyExcept("index ������ ���� ������ 0");
	}
	
	int* newdata = new int[lenght_-1];
	
	for (size_t i = 0; i < index; ++i)  // �������� �� index
	{
		newdata[i] = massiv_[i];
	}

	for (size_t i = index+1; i < lenght_; ++i)  // �������� ����� index
	{
		newdata[i-1] = massiv_[i];
	}
	

	delete[] massiv_;
	massiv_ = newdata;
	--lenght_;
}

// ����� ���������� (string)
MyExcept::MyExcept(std::string message) : message_(message)
{
}
std::string MyExcept::getErrMessage() const { return message_; }
