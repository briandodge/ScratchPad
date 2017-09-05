// ScratchPad.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

//namespace std


void swap(int *num1, int *num2) {

	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}


int main()
{
	std::cout << "hello" << std::endl;
	int number1, number2;

	number1 = 10;
	number2 = 15;

	std::cout << "Number 1: " << number1 << std::endl;
	std::cout << "Number 2: " << number2 << std::endl;

	std::cout << "Swap..." << std::endl;

	swap(&number1, &number2);
	
	std::cout << "Number 1: " << number1 << std::endl;
	std::cout << "Number 2: " << number2 << std::endl;

    return 0;
}

