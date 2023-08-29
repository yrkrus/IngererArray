#include <iostream>
#include <ostream>
#include "IntegerArray.h"

extern const bool DEBUG = false;



IntegerArray::IntegerArray(int lenght) : lenght_(lenght)
{
	if (DEBUG) { std::cout << " онструктор IntegerArray(int lenght)" << std::endl; }
	if (!lenght || lenght < 0) 
	{
		throw  MyExcept("ƒлина массива не должна быть отрицательной, текущее значение массива: " + lenght);
	}
	
	massiv_ = new int[lenght] {};	
}



IntegerArray::~IntegerArray()
{
	if (DEBUG) { std::cout << "ƒестструктор IntegerArray(int lenght)" << std::endl; }
	delete[] massiv_;
}


IntegerArray::IntegerArray(const IntegerArray &ptr)
{
	if (DEBUG) { std::cout << " онструктор копировани€ IntegerArray(int lenght)" << std::endl; }
	
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
		throw MyExcept("«начени€ с индексом не существует");
	}
	
	std::cout << "элемент массива с индексом " << index<< " равен " << massiv_[index] << std::endl;
	
}

// изменение размера
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

// вставка элемента в массив
void IntegerArray::insert(int index, int newvalue)
{
	if (index<0 || index > lenght_) 
	{
		throw MyExcept("»ндекса в массиве не существует");
	}
	
	massiv_[index] = newvalue;
}

void IntegerArray::remove(int index)
{		
	if (index < 0 || !index) 
	{
		throw MyExcept("index должен быть больше 0");
	}
	
	int* newdata = new int[lenght_-1];
	
	for (size_t i = 0; i < index; ++i)  // копируем до index
	{
		newdata[i] = massiv_[i];
	}

	for (size_t i = index+1; i < lenght_; ++i)  // копируем после index
	{
		newdata[i-1] = massiv_[i];
	}
	

	delete[] massiv_;
	massiv_ = newdata;
	--lenght_;
}

// класс исключени€ (string)
MyExcept::MyExcept(std::string message) : message_(message)
{
}
std::string MyExcept::getErrMessage() const { return message_; }
