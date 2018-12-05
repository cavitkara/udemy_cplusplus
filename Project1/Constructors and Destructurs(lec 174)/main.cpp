#include <iostream>

using namespace std;

	class Base {

	public:

		int value;

		Base() { cout << "Base no args constructor" << endl; }
		Base(int x) :value{x} { cout << "Base constructor" << endl; }
		~Base() { cout << "Base destructor\n"; }
	};

	class Derived :public Base {
//		using Base::Base;
	private:
		int double_value;
	public:
		Derived() { cout << "Derived no args constructor\n"; }
		Derived(int x) : double_value{ x * 2 } { cout << "Derived constructor\n"; }
		~Derived() { cout<< "Derived destructor\n"; }
	};

		int main() {

//			Base b;
			Derived d{1000};


			while (1);
			return 0;
		}
