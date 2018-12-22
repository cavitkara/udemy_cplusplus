#include <iostream>

using namespace std;


void func_C() {
	cout << "Func_C begin\n";
	throw 0;
	cout << "Func_C end\n";
}

void func_B() {
	cout << "Func_B begin\n";
	func_C();
	cout << "Func_B end\n";
}


void func_A(){
	cout << "Func_A begin\n";
	try {
		func_B();
	}
	catch (int &ex) {
		cerr << "Exception throwed :" << ex << endl;
	}
	cout << "Func_A end\n";
	
}

void main() {

	cout << "Main start\n";
	try {
		func_A();
	}
	catch(...){
		cerr << "Caught error\n";
	}
	cout << "Main end\n";

	while (1);
}