#include <iostream>						// Caleb Walker
using namespace std;						// mpg.cpp

/* Declaring variables and constants */
const double KmMi = 0.62; 					// Conversion factor
const double MiKm = 1.61; 					// Conversion factor
const double LGal = 3.79; 					// Conversion factor
double mpg;							// Miles per gallon
double lhkm; 							// Liters per 100 km
double miles;
double km;
double gallons;
double liters;

/* main function */
int main() {
	cout << "Enter your miles traveled: ";
	cin >> miles;
	cout << "Enter your gallons used: ";
	cin >> gallons;
	liters = gallons * LGal;
	km = miles * MiKm; 					// Kilometers is miles times the conversion factor
	mpg = miles / gallons; 					// Calculate miles per gallon
	km = km * 100; 						// Get it to 100 km
	lhkm = km / liters; 					// 100 km divided by liters
	cout << "\nMPG: " << mpg << "\n";
	cout << "Liters per 100km: " <<llhkm << "\n"; 		// Output
	return false;
}
