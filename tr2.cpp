/* Following instructor's instruction */
#include <iostream>
using namespace std;

int main() {
	for(int i = 10; i > 0; i--) { /* outer loop */
		for(int x = 10; x > i; x--) { /* inner loop */
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
