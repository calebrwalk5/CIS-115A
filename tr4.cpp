#include <iostream>
using namespace std;

int main() {
	for(int x = 0; x < 10; x++) {
		for(int y = 10; y > 0; y--) {
			if(y < x) {
				cout << " ";
			} else {
				cout << "*";
			}
		} 
		cout << "\n";
	}
	return false;
}
