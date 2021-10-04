/* I am aware that this is absurdly messy */
#include <iostream>
using namespace std;

const char *MORE = "less";
const char *LYRICS[] = { 
	"and a partridge in a pear tree", 
	"two turtle doves", 
	"three French hens", 
	"four calling birds", 
	"five golden rings",
	"six geese a-laying",
	"seven swans a-swimming",
	"eight maids a-milking",
	"nine ladies dancing",
	"ten lords a-leaping",
	"eleven pipers piping",
	"twelve drummers drumming" 
};
const char *DAY[] = {
	"first",
	"second",
	"third",
	"fourth",
	"fifth",
	"sixth",
	"seventh",
	"eigth",
	"ninth",
	"tenth",
	"eleventh",
	"last"
};

int main() {
	for (int i = 0; i < 11; i++) {
		cout << "On the " << DAY[i] << " of Christmas, my true love gave to me \n";
		if (i < 1) {
			cout << "a partridge in a pear tree"  << "\n";
		} else if (i < 2) {
			cout << LYRICS[1] << "\n";
			cout << LYRICS[0] << "\n";
		} else if (i < 3) {
			cout << LYRICS[2] << "\n";
			cout << LYRICS[1] << "\n";
			cout << LYRICS[0] << "\n";
		} else if (i < 4) {
			cout << LYRICS[3] << "\n";
			cout << LYRICS[2] << "\n";
			cout << LYRICS[1] << "\n";
			cout << LYRICS[0] << "\n";
		} else if (i < 5) {
			cout << LYRICS[4] << "\n";
			cout << LYRICS[3] << "\n";
			cout << LYRICS[2] << "\n";
			cout << LYRICS[1] << "\n";
			cout << LYRICS[0] << "\n";
		} else if (i < 6) {
			cout << LYRICS[5] << "\n";
			cout << LYRICS[4] << "\n";
			cout << LYRICS[3] << "\n";
			cout << LYRICS[2] << "\n";
			cout << LYRICS[1] << "\n";
			cout << LYRICS[0] << "\n";
		} else if (i < 7) {
			cout << LYRICS[6] << "\n";
			cout << LYRICS[5] << "\n";
			cout << LYRICS[4] << "\n";
			cout << LYRICS[3] << "\n";
			cout << LYRICS[2] << "\n";
			cout << LYRICS[1] << "\n";
			cout << LYRICS[0] << "\n";
		} else if (i < 8) {
			cout << LYRICS[7] << "\n";
			cout << LYRICS[6] << "\n";
			cout << LYRICS[5] << "\n";
			cout << LYRICS[4] << "\n";
			cout << LYRICS[3] << "\n";
			cout << LYRICS[2] << "\n";
			cout << LYRICS[1] << "\n";
			cout << LYRICS[0] << "\n";
		} else if (i < 9) {
			cout << LYRICS[8] << "\n";
			cout << LYRICS[7] << "\n";
			cout << LYRICS[6] << "\n";
			cout << LYRICS[5] << "\n";
			cout << LYRICS[4] << "\n";
			cout << LYRICS[3] << "\n";
			cout << LYRICS[2] << "\n";
			cout << LYRICS[1] << "\n";
			cout << LYRICS[0] << "\n";
		} else if (i < 10) {
			cout << LYRICS[9] << "\n";
			cout << LYRICS[8] << "\n";
			cout << LYRICS[7] << "\n";
			cout << LYRICS[6] << "\n";
			cout << LYRICS[5] << "\n";
			cout << LYRICS[4] << "\n";
			cout << LYRICS[3] << "\n";
			cout << LYRICS[2] << "\n";
			cout << LYRICS[1] << "\n";
			cout << LYRICS[0] << "\n";
		} else if (i < 11) {
			cout << LYRICS[10] << "\n";
			cout << LYRICS[9] << "\n";
			cout << LYRICS[8] << "\n";
			cout << LYRICS[7] << "\n";
			cout << LYRICS[6] << "\n";
			cout << LYRICS[5] << "\n";
			cout << LYRICS[4] << "\n";
			cout << LYRICS[3] << "\n";
			cout << LYRICS[2] << "\n";
			cout << LYRICS[1] << "\n";
			cout << LYRICS[0] << "\n";
		} else if (i < 12) {
			cout << LYRICS[11] << "\n";
			cout << LYRICS[10] << "\n";
			cout << LYRICS[9] << "\n";
			cout << LYRICS[8] << "\n";
			cout << LYRICS[7] << "\n";
			cout << LYRICS[6] << "\n";
			cout << LYRICS[5] << "\n";
			cout << LYRICS[4] << "\n";
			cout << LYRICS[3] << "\n";
			cout << LYRICS[2] << "\n";
			cout << LYRICS[1] << "\n";
			cout << LYRICS[0] << "\n";
		}
		cout << "\n";
	}
	return false;
}
