/*
file6.cpp 
Caleb Walker
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	string input;
	fstream dataFile("names.txt", ios::in);
	if(dataFile.fail() == true) {
		cout << "Error opening File..." << endl;
		return 0;
	}
	while(dataFile >> input) {
		cout << input << "\n";
	}
	dataFile.close();
	return 0;
}
