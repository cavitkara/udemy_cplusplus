#include<iostream>
#include<string>

using namespace std;

int miles{};
int galon{};


double calculate_average() {
	
	if (miles < 0 || galon < 0)
		throw string{"Negative value entered!!"};
	
	if (galon == 0)
		throw 0;
	return static_cast<double>(miles) / galon;
}

void main() {

	cout << "miles: ";
	cin >> miles;

	cout << "galon: ";
	cin >> galon;
	try {
		double avg = calculate_average();
		cout << "Result:" << avg << endl;
	}
	catch (int &ex) {
		cerr << "Divide by " << ex << " operation!\n";
	}

	catch (string &exc) {
		std::cerr<<exc<< endl;
	}
	cout << "Bye";

	while (1);
}