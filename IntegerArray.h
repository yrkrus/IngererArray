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

	int getLenght();	// �������� ����������� �������
	void getShow();		// ����� ���� � ��������� �������

	void getData(int index); // ����� ���������� � �������� � �������

	void resizeLenght(int newlenght); // ��������� ������� �������

	void insert(int index, int newvalue); // ������� ������ �������� � ������

	int &operator[](int index);
	IntegerArray&operator=(const IntegerArray &ptr);
	//friend IntegerArray &operator << ()

	

private:
	int lenght_ {};   // ������ �������
	int *massiv_{};	  // ��� ������


	

};





