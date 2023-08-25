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

	int getLenght();	// получаем размерность массива
	void getShow();		// вывод инфо о значениях массива

	void getData(int index); // вывод информации о значении в массиве

	void resizeLenght(int newlenght); // изменение размера массива

	void insert(int index, int newvalue); // вставка нового элемента в массив

	int &operator[](int index);
	IntegerArray&operator=(const IntegerArray &ptr);
	//friend IntegerArray &operator << ()

	

private:
	int lenght_ {};   // длинна массива
	int *massiv_{};	  // сам массив


	

};





