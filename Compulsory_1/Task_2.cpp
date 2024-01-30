#include "Task_2.h"
#include <iostream>
#include <fstream>

double Task_2::taskTwoFunction(double x)
{
    double number = x;
	double function = 2 * pow(x, 4);



	std::cout << "f(" << number << ") =" << function << std::endl;

    return 0.0;
}

double Task_2::taskTwoInterval(double x)
{
    for(int i = 0; i < x; i++) {
		double function = 2 * pow(i, 4);
		std::cout << "For interval " << i << " the result is: " << function << std::endl;
	}

    return 0.0;
}

double Task_2::taskTwoColors(double x)
{
	std::ofstream outFile("output.txt");
	if(!outFile.is_open()) {
		std::cerr << "Unable to open file for writing." << std::endl;
	}

	outFile << "Number of points: " << x + 2 << std::endl;

	for(int i = 0; i < x + 1; i++) {
		double preFunction = 2 * pow(i-1, 4);
		double function = 2 * pow(i, 4);
		double yValue = function - preFunction;
		std::cout << "The x value went from " << i-1 << " to " << i << ", and the y value is: " << yValue << std::endl;
		if(yValue < 0){
			std::cout << "The graph colour is red." << std::endl;
		} else if(yValue > 0){
			std::cout << "The graph colour is green." << std::endl;
		}

		outFile << "The x value went from " << i-1 << " to " << i << ", and the y value is: " << yValue << std::endl;

		if(yValue < 0){
			outFile << "The graph colour is red." << std::endl;
		} else if(yValue > 0){
			outFile << "The graph colour is green." << std::endl;
		}
	}

    return 0.0;
}