#include <iostream>

int main()
{
	// Created on the stack
	int example[5];
	int* ptr = example;
	
	example[2] = 5;

	// accessing the &example + 2 integer sizes forward = example[2] >> pointer arithmetics
	*(ptr + 2) = 6;

	for (int i = 0; i < 5; i++)
		example[i] = 2;
	// Created on the heap - same as int another[5]
	// since created on the heap, alive until the program ends or till deleted

	int* another = new int[5];

	for (int i = 0; i < 5; i++)
		another[i] = 2;

	delete[] another;

	std::cin.get();
}