#include <iostream>
/*This code snipped shows that how a stack unwinding works
like a onion shell
When you throw an exception it look for a try in its own scope
If it couldnt find* ,the function terminates and put off from the stack
jump to the other memory which called the terminated function and llok for a try
then repaets the same process until main() block
If main doesnt matched catch or any try bloc the program terminates

Note:
*Could not find a try or doesnt match with it's catch prototype
*/
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