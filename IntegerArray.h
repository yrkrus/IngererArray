#pragma once

#include <iostream>
#include <ostream>
#include <exception>


class IntegerArray 
{
public:
	IntegerArray() = default;
	IntegerArray(int lenght);
	IntegerArray(const IntegerArray &object);
	~IntegerArray();
	
	// перегрузки инкрементов
	IntegerArray &operator++();			
	IntegerArray &operator--();			
	IntegerArray operator++(int);		
	IntegerArray operator--(int);	

	int getLenght();

	int &operator[](int index);

	void getShow();

private:
	int lenght_ {};
	int *massiv_{};


	

};