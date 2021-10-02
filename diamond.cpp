/* Caleb Walker */
/* Diamond C++ Code */
#include <iostream>
using namespace std;

int r = 15; /* Rows */
int s = 16; /* Spaces */					/* 16 works better than 15 here */
int i = 0; /* Incrementer */

int main() {
	for(i = 0; i < r; i++) { 				/* 0 to 10 */
		for(int x = 0; x < s; x++) { 			/* Increment x while x is less than spaces */
			cout << " ";
		} 
		s--; 						/* Widen top half */
		int t = 2 * i; 					/* t is two times incrementer */
		int t2 = t - 1; 				/* t2 is two times incrementer minus one */
		for(int y = 0; y < t2; y++) { 			/* Increment y while y is less than t2 */
			cout << "*";
		}
		cout << "\n";
	}
	s = 1; 
	int b = r - 1; 						/* b is rows minus one */
	for(i = 0; i < b; i++) { 				/* 0 to 9 */
		for(int a = 0; a < s; a++) { 			/* Increment a while a is less than s */
			cout << " ";
		} 
		s++; 						/* Make bottom half more narrow */
		int b2 = 2 * (r - i); 				/* b2 is twice rows minus incrementer */
		for(int c = 0; c < (b2 - 1); c++) { 		/* Increment c while c is less than b2 minus one */
			cout << "*";
		}
		cout << "\n"; 					/* Make a new line for new stars and spaces */
	}
	return false;
}
