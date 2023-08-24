#pragma once

#include <iostream>
#include <ostream>
#include <exception>


class IntegerArray 
{
public:
	IntegerArray() = default;
	IntegerArray(const int lenght);	
	
	// перегрузки инкрементов
	IntegerArray &operator++();			
	IntegerArray &operator--();			
	IntegerArray operator++(int);		
	IntegerArray operator--(int);		

	~IntegerArray();

	friend std::ostream &operator << (std::ostream &output, const IntegerArray &lenght);

private:
	int lenght_;

};