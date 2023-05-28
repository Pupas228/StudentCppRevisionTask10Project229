﻿#include "tasks.h"

/*	Task 04. The Fibonacci Number [число Фибоначчи]
*
*	Последовательность Фибоначчи определяется так:
*	F(1) = 0, F(2) = 1, F(3) = 1, F(4) = 2, F(5) = 3, …, F(n) = F(n−1) + F(n−2).
*	Необходимо по данному числу N определить N-ное число числового ряда Фибоначчи F(N).
*	Если число задано не верно, то должно быть возвращено число -1.
*
*	Примечание
*	В силу очень быстрого роста чисел ряда Фибоначчи тестирование в малом диапазоне значений.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа int.
*
*	Формат выходных данных [output]
*	Должно быть возвращено N-ное число числового ряда Фибоначчи в виде длинного целого или число -1.
*
*	[ input 1]: 1
*	[output 1]: 0
*
*	[ input 2]: 2
*	[output 2]: 1
*
*	[ input 3]: 3
*	[output 3]: 1
*
*	[ input 4]: 13
*	[output 4]: 144
*
*	[ input 5]: 50
*	[output 5]: 7'778'742'049
*
*	[ input 6]: -1
*	[output 6]: -1
*
*	[ input 7]: -55
*	[output 7]: -1
*/
long long task04(int number) {
	if (number <= 0) {
		// cout << "Number - " << number << ", n3 - 0" << endl;
		return -1;
	}

	unsigned long long n1 = 0, n2 = 1, n3;

	if (number == 1)
	{
		// cout << "Number - " << number << ", n3 - 0" << endl;
		return 0;
	}
	else if (number == 2) {
		// cout << "Number - " << number << ", n3 - 0" << endl;
		return 1;
	}
	else {
		number -= 2;
	}

	for (int i = 0; i < number; i++){
		if (i == 0)
		{
			n3 = n1 + n2;
		}
		else {
			n1 = n2;
			n2 = n3;
			n3 = n1 + n2;
		}

	}

	// cout << "Number - " << number + 2 << ", n3 - " << n3 << endl;
	return n3;
}