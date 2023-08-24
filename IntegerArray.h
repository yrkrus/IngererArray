#pragma once

#include <iostream>
#include <ostream>
#include <exception>


class IntegerArray 
{
public:
	IntegerArray() = default;
	IntegerArray(const int lenght);
	~IntegerArray();
	
	// перегрузки инкрементов
	IntegerArray &operator++();			
	IntegerArray &operator--();			
	IntegerArray operator++(int);		
	IntegerArray operator--(int);		

	
		

protected:
	int lenght_;
	int *massiv_ = nullptr;

	friend std::ostream &operator << (std::ostream &output, const IntegerArray &object);

};