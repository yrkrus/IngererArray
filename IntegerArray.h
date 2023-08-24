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
	
	// ����������� ����������
	IntegerArray(const IntegerArray &ptr);

	int getLenght();
	void getShow();

	int &operator[](int index);
	IntegerArray&operator=(const IntegerArray &ptr);
	

private:
	int lenght_ {};   // ������ �������
	int *massiv_{};	  // ��� ������


	

};


#include <cassert> // for assert()


