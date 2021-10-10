/* Caleb Walker */
#include <iostream>
using namespace std;

int main() {
	int hr, min, sec;
	long int hr_converted, min_converted;
	long int output;
	cout << "Enter hours: ";
	cin >> hr;
	cout << "Enter minutes: ";
	cin >> min;
	cout << "Enter Seconds: ";
	cin >> sec;
	hr_converted = hr * 3600;
	min_converted = min * 60;
	output = hr_converted + min_converted + sec;
	cout << hr << " hours, " << min << " minutes, and " << sec << " seconds equals: \n" << output << " seconds since midnight\n";
	return false;
}
