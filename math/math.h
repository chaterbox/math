#pragma once
#include <string>
class math
{	
public:
	 double x, z;
	 double answer;
	 char op;
	 std::string i;
};
class strings
{		
public:
	std::string welcome_message = "welcome to my calculator program.";
	std::string input1_message = "enter a number.";
	std::string input2_message = "enter another number."; 
	std::string sum_message = "the sum comes too.";	
	std::string math_operator_message = "enter +,-,/,*.";
	std::string math_operator_error_message = "Error! operator is not correct";
	std::string endofprogram_message = "end of program";
};