#include <stdio.h>

int main() {
	for(int x = 10; x > 0; x--) {
		for(int y = 0; y < 10; y++) {
			if(y < x) {
				printf(" ");
			} else {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
