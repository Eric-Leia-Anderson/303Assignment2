#include "ARRAY.H"
using namespace std;
#include <iostream>
#include <fstream>


int main(int argc, char* argv[]) {
	int urNum;
	Array numbers;
	int num;
	ifstream fileName(argv[1]);
	
	while (fileName >> num) {
		try {
			numbers.add(num);

		}
		catch (std::exception& ex) {
			cerr << "An error occured.\n";
			cerr << ex.what() << endl;
			abort();
		}
	}
	numbers.print();
	cout << "Give me an integer to check the array with. \n";
	cin >> urNum;
	cout << " I found it at " << numbers.getNumIndex(urNum) << " index\n";

	try {
		cout << "Give me an index to use to modify.\n";
		cin >> urNum;
		if (urNum < 0 || urNum > numbers.getCount() || numbers.getCount() == 0)  {
			throw runtime_error("Invalid index");
		}
		cout << "Give me an number to modify.\n";
		cin >> num;
	}
	catch (std::exception& ex) {
		cerr << "An error occured.\n";
		cerr << ex.what() << endl;
		abort();

	}
		pair <int, int> values = numbers.modifyNum(urNum, num);
		cout << "old value was: " << values.first << "\n" << "new value is: " << values.second << "\n";
		numbers.print();
	
	cout << "Give me an index of a number you want removed.\n";
	cin >> urNum;
	numbers.remove(urNum);
	numbers.print();
}