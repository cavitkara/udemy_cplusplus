#pragma once
#include<exception>

class InsufficentFundException : public std::exception {
public:
	InsufficentFundException() = default;
	~InsufficentFundException() = default;
	virtual const char* what();
};