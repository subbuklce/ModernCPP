/*
 * TemplateAutoDeduction.h
 *
 *  Created on: Aug 21, 2017
 *      Author: subrahmanyam
 */

#ifndef TEMPLATEAUTODEDUCTION_H_
#define TEMPLATEAUTODEDUCTION_H_

#include <iostream>
#include<string>

enum struct template_selector{
	passbyvalue,
	passbyreference_pointer,
	passbyuniversal
};

// This template function gets called when the Type is Reference.
template<typename T>
void myfunction(T& Ref) noexcept {
	std::cout<<" \n Called T& Ref";
}
// This template function gets called when the Type is neither Reference nor pointer.
//Extra functionality does by compiler for This type alone.
// if lvalue is sent then Type and ParamType becomes ref such as int &, const int& ...
// if rvalue is sent then
template<typename T>
void myfunction(T&& Move) noexcept {
	std::cout<<" \n Called T&& universal";
}
/*
// This template function gets called when the Type is lvalue.
template<typename T>
void myfunction(T Copy) noexcept {
	std::cout<<" \n Called T Copy PassByvalue. ";
}
*/
bool Template_fucntion_selector(template_selector type_selector);
#endif /* TEMPLATEAUTODEDUCTION_H_ */
