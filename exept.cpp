﻿#include <iostream>
#include "IntegerArray.h"
#include <ctime>

using namespace std;
/*
	В данном задании, мы предлагаем вам написать контейнер данных IntegerArray — объект, 
	который хранит целые числа и способен вычислить собственный размер во время выполнения программы.

    Безопасность кода: все случаи исключений поддержаны (создание или копирование неправильного размера контейнера, выход за границы контейнера), 
    код безопасен для использования;
    
    Функциональность контейнера: мы предлагаем вам создать контейнер целых чисел наподобие IntArray. 
    Помимо безопасности исключений, контейнер также должен обладать функциональностью с возможностями:

        + создать контейнер;  
        + скопировать контейнер;
        + получить доступ к любому элементу контейнера по индексу;
        + изменить размер контейнера;
        + вставить элемент в контейнер;
        удалить элемент из контейнера.
*/




int main()
{
    setlocale(LC_ALL, "");
    srand(static_cast<unsigned int>(time(0)));
    int random;

    const int size_array = 5;
    IntegerArray arr0(size_array);     
  
    // заполним случайными данными
    for (int i = 0; i < size_array; ++i)
    {
        random = rand() % 100 - 1;
        arr0[i] = random;
    }     
    
     //cout << "arr0 до копирования" << endl; 
    arr0.getShow();  
   
    IntegerArray arr1 = arr0;
  
    // заполним случайными данными
    for (int i = 0; i < size_array; ++i)
    {
        random = rand() % 100 - 1;
        arr0[i] = random;
    }
    cout << "arr0 после копирования" << endl;
    arr0.getShow();   
    cout << endl;
    cout << "arr1" << endl;
    arr1.getShow();

    cout << endl;
    cout << endl;
    cout << endl;

    arr1.getData(1);
    

    cout << "arr1 lenght:" << arr1.getLenght() << endl;
    arr1.resizeLenght(arr1.getLenght() + 1);
 
    cout << "arr1 newlenght:" << arr1.getLenght() << endl;

    cout << endl;
    cout << endl;
    cout << endl;

    cout << "втсавка элемента в массив" << endl;

    arr1.insert(1, 5000);

    arr1.getData(1);

    return 0;
}

