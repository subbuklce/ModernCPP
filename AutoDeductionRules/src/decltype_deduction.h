/*
 * decltype_deduction.h
 *
 *  Created on: Aug 28, 2017
 *      Author: subrahmanyam
 */

#ifndef DECLTYPE_DEDUCTION_H_
#define DECLTYPE_DEDUCTION_H_
#include <iostream>
#include<string>


template<typename T>
class UDT{
public:
	template<typename T>
	UDT(T value):data(value){
		std::cout<<"\n ctor called:";
	}
	~UDT(){
		std::cout<<"\n dtor called:";
	}
	decltype(auto) Index_lvalue_ref(int index)noexcept {
		std::cout<< " \n decltype for data at index is:"<<typeid(decltype(data[index])).name();
		return data[index];
	}
	T& operator[](size_t index){
		static_assert(index<0, " index with wrong value");
		return data[index];
	}
private:
	T data;
};


#endif /* DECLTYPE_DEDUCTION_H_ */
