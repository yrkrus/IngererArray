#pragma once

#include <iostream>
#include <exception>


class IntegerArray 
{

public:
	IntegerArray() = default;
	IntegerArray(int lenght);
	

	~IntegerArray() 
	{
		delete[] array_data_;
	};


private:
	int arraymassiv_;
	int *array_data_;

};