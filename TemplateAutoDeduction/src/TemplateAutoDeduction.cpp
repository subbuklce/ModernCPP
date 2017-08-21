//============================================================================
// Name        : TemplateAutoDeduction.cpp
// Author      : Subrahmanyam Gundimeda
// Version     :
// Copyright   : Free for educaional purpose.
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "TemplateAutoDeduction.h"
using namespace std;

bool Template_fucntion_selector(template_selector type_selector){

	switch(type_selector){
	case template_selector::passbyvalue:
	{
		int x = 10;
		const int y = x;
		const int & z = x;

		myfunction(12);
		myfunction(y);
		myfunction(z);

	}
			break;
	case template_selector::passbyreference_pointer:
			break;
	case template_selector::passbyuniversal:
			break;

	}
return true;
}
