// file5.cpp
// Example of writing to a file.

#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	fstream dataFile("names.txt", ios::out);

	if(dataFile.fail())
	{
		cout << "Error opening File..." << endl;
	}

	cout << "File opened successfully" << endl;
	dataFile << "Smith" << endl;
	dataFile << "Jones" << endl;
	dataFile << "Johnson" << endl;
	dataFile << "Cunningham" << endl;

	dataFile.close();
    
	return 0;
}
