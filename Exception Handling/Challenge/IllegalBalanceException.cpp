#include"IllegalBalanceException.h"

const char* IllegalBalanceException::what() {
	return "Negative Balance Value\n";
}