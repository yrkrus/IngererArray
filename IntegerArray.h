#pragma once

#include <iostream>
#include <ostream>
#include <exception>


class IntegerArray 
{
public:
	IntegerArray() = default;
	IntegerArray(int lenght);
	~IntegerArray();	
	
	// копирование контейнера
	IntegerArray(const IntegerArray &ptr);

	int getLenght();
	void getShow();

	int &operator[](int index);
	IntegerArray&operator=(const IntegerArray &ptr);
	

private:
	int lenght_ {};   // длинна массива
	int *massiv_{};	  // сам массив


	

};


#include <cassert> // for assert()


