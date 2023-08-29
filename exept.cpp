#include <iostream>
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
        + удалить элемент из контейнера.
*/


int main()
{
    setlocale(LC_ALL, "");
    srand(static_cast<unsigned int>(time(0)));
    int random;

    const int size_array =5;
    IntegerArray arr0(size_array);             

    // заполним случайными 
    for (int i = 0; i < size_array; ++i)
    {
        random = rand() % 100 - 1;
        arr0[i] = random;
    }
           
   
   // удаление из массива
    try
    {
        int remove_arr = -1;
        arr0.remove(remove_arr);
    }
    catch (const MyExcept& exp)
    {
        std::cout << exp.getErrMessage() << endl;
    }
   
    // втсавка в массив
    try
    {
        int insert_arr = -1;
        arr0.insert(insert_arr,500);
    }
    catch (const MyExcept& exp)
    {
        std::cout << exp.getErrMessage() << endl;
    }      

    // выход за границы массива
    try
    {
        int data_arr = -1;
        arr0.getData(data_arr);
    }
    catch (const MyExcept& exp)
    {
        std::cout << exp.getErrMessage() << endl;
    }
   

    

    return 0;
}

