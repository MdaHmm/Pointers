﻿#include <iostream>


// Указатель - это переменная, созданная для хранения в себе адреса какой-либо области памяти.
// Например, указатель может хранить адрес созданной ранее в программе переменной.
// Размерность указателя НЕ зависит от типа данных, на которые он направлен. 
// Зависит он от разряда операционной системы. В 64х битных = 8 байт, в 32х = 4б.


template <typename T>
void my_swap(T num1, T num2) {
	T tmp = num1;
	num1 = num2;
	num2 = tmp;
}

template <typename T>
void p_swap(T*pnum1, T*pnum2) {
	T tmp = *pnum1;
	*pnum1 = *pnum2;
	*pnum2 = tmp;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Указатели на переменные
	/*
	n = 10;
	m = 20;
	std::cout << "n = " << n << "\n"; // вывод значения переменной
	std::cout << "&n = " << &n << "\n"; // вывод адреса переменной
	int* pn = &n; // создание указателя, напрпавленного на переменную n
	std::cout << "pn = " << pn << "\n";
	
	// Разыменование указателя - операция, применяемая только к указателям и позволяющая обратиться к объекту, на который направлен указатель.
	std::cout << "*pn = " << *pn << "\n";
	*pn = 15; // обращение к переменной n через разыменование указателя pn
	std::cout << "Новая n = " << n << "\n";
	
	pn = &m; // перенаправление указателя на переменную n
	std::cout << "&m = " << &m << std::endl;
	std::cout << "pn = " << pn << std::endl;

	int* pm = &m;
	std::cout << "pm = " << pm << std::endl;
	*pm = 25;

	std::cout << "m = " << m << std::endl;
	std::cout << "*pn = " << *pn << std::endl;
	std::cout << "*pm = " << *pm << std::endl;
	*/

	// Указатели в массивах
	/*
	const int s = 5;
	int arr[s]{ 5, 123, 3, -500, 1235674 };
	int* pa2 = &arr[2];
	std::cout << "*pa2 = " << *pa2 << std::endl;
	pa2++;
	std::cout << "*pa2 = " << *pa2 << std::endl;
	// Арифметика указателей - это процесс сдвига указателей, относительно их текущего значения вперед или назад в зависимости от применяемого к ним сложения или вычитания соответственно.
	pa2 -= 2;
	std::cout << "*pa2 = " << *pa2 << std::endl;
	// Ограничения арифметики указателей:
	//	1) Работает только со сложением и вычитанием;
	//	2) Нельзя складывать адреса, но можно вычитать адреса;
	//	3) Нельзя работать с вещественным типом данных;

	pa2 = &arr[0];
	// Вывод массива с помощью указателей:
	for (int i{}; i < s; i++)
		std::cout << *(pa2 + i) << " ";
	std::cout << std::endl;
	std::cout << "arr = " << arr << std::endl;
	std::cout << "pa2 = " << pa2 << std::endl;
	// Имя массива - указатель на его первый элемент или же указатель на место в памяти, из которой начинается последовательность элементов.
	// Данный указатель не может быть перенаправлен на другую область памяти.
	int sum = 0;
	for (int i{}; i < s; i++)
		sum += *(arr + i);
	std::cout << std::endl;
	std::cout << "Sum = " << sum << std::endl;

	// arr++; arr--; arr+=2; arr = &n; -- это все не будет работать.
	*/

	// Указатели и функции

	n = 7; m = 15;
	std::cout << n << " " << m << std::endl;
	// my_swap(n, m); не работает, т.к. параметры это копии аргументов.
	p_swap(&n, &m);
	std::cout << n << " " << m << std::endl;

	// Области применения указателей:
	//	1) Работа с массивами;
	//	2) Удаленный доступ к данным;
	//	3) Выделение динамической памяти;
	//	4) Экономия памяти;

	return 0;
}