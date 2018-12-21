#include<iostream>

using namespace std;

int miles{};
int galon{};


double calculate_average() {
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
	catch(int &ex){
		cout<< "Divide by " << ex << " operation!\n";
	}
	cout<< "Bye";
		
	while (1);
}