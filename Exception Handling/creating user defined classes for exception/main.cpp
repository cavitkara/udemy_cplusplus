#include<iostream>
#include<string>

using namespace std;

int miles{};
int galon{};

class NegativeValueError {};
class DividebyZeroError {};

double calculate_average() {

	if (miles < 0 || galon < 0)
		throw NegativeValueError();

	if (galon == 0)
		throw DividebyZeroError();
	return static_cast<double>(miles) / galon;
}

void main() {

	double avg{};

	cout << "miles: ";
	cin >> miles;

	cout << "galon: ";
	cin >> galon;
	try {
		avg = calculate_average();
		cout << "Result:" << avg << endl;
	}
	catch (DividebyZeroError &ex) {
		cerr << "Divide by " << 0 << " operation!\n";
	}

	catch (NegativeValueError &exc) {
		std::cerr << "Sorry it's negative value!" << endl;
	}
	cout << "Bye -- avg :" << avg << endl;

	while (1);
}