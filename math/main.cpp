#include <iostream>
#include "math.h"

int main()
{
	math var;
	strings string;
		//prints out welcome string from math.h
		std::cout << string.welcome_message << std::endl;
		//prints out input string from math.h
		begin:std::cout << string.input1_message << std::endl;
		//allows user to input a number to be stored to int x
		std::cin >> var.x;
		//print out input2 string from math.h
		std::cout << string.input2_message << std::endl;
		//allows user to input another number to be stored in int z
		std::cin >> var.z;
		//print out operator string from math.h
		std::cout << string.math_operator_message << std::endl;
		//allows user to input operator to be stored in char op
		std::cin >> var.op;
		
			std::cout << string.sum_message << std::endl;
			switch (var.op)
			{
				//adds the 2 ints
			case '+':
				var.answer = var.x + var.z;
				std::cout << var.answer << std::endl;
				break;
				//subtracts the 2 ints
			case '-':
				var.answer = var.x - var.z;
				std::cout << var.answer << std::endl;
				break;
				//multiply the 2 ints
			case '*':
				var.answer = var.x * var.z;
				std::cout << var.answer << std::endl;
				break;
				//devides the 2 ints
			case '/':
				var.answer = var.x / var.z;
				std::cout << var.answer << std::endl;
				break;
			default:
				// If the operator is other than +, -, * or /, error message is shown
				std::cout << string.math_operator_error_message << std::endl;
				break;
			}
		double ir = var.answer;
		var.answer = var.answer;
		double *ptr = &ir;
		std::cout << "do you want to do another equation" << std::endl;
		std::cout << "yes or no" << std::endl;
		std::cin >> var.i;
		if (var.i == "yes")
		{
			goto begin;
		}
		else if (var.i == "yes")
		{
			std::cout << string.endofprogram_message << std::endl;
		}
			return 0;
		}