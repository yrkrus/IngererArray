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

	void remove(int index);	// �������� �������� �� �������



	int &operator[](int index);
	IntegerArray& operator=(const IntegerArray &ptr);
	//friend IntegerArray &operator << ()

	

private:
	int lenght_ {};   // ������ �������
	int *massiv_{};	  // ��� ������
	

};

// ����� ����������
class MyExcept
{
private:
	std::string message_;
public:
	MyExcept(std::string message);
	std::string getErrMessage() const;

};





