/*
 * main.cpp
 *
 *  Created on: Aug 21, 2017
 *      Author: subrahmanyam
 */

#include "TemplateAutoDeduction.h"


int main() {

	// The below line looks for initializer_list argument based funciton.
	// Template_fucntion_selector({template_selector::passbyvalue});

	Template_fucntion_selector(template_selector::passbyvalue);

	std::cout << "\n !!!Template Auto Deduction!!!\n" ; // prints !!!Template Auto Deduction!!!
	return 0;
}



