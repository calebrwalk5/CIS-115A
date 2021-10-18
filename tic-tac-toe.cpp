#include <iostream>
using namespace std;

char grid[10] = {'0','1','2','3','4','5','6','7','8','9'};

void board() { // The function that makes the board
	cout << "Player1 (X) - Player2 (O) \n";
	cout << "     |     |     \n";
	cout << "  " << grid[1] << "  |  " << grid[2] << "  |  " << grid[3] << "  \n";
	cout << "-----------------\n";
	cout << "  " << grid[4] << "  |  " << grid[5] << "  |  " << grid[6] << "  \n";
	cout << "     |     |     \n";
	cout << "-----------------\n";
	cout << "  " << grid[7] << "  |  " << grid[8] << "  |  " << grid[9] << "  \n";
	cout << "     |     |     \n";
}

int checkScore() { /* I looked up all the winning positons */
	if (grid[1] == grid[2] && grid[2] == grid[3]) { // Return 1 if it's a win, return 0 if it's a tie, and return -1 if something went wrong
		return 1;
	}
	else if (grid[4] == grid[5] && grid[5] == grid[6]) {
		return 1;
	}
	else if(grid[7] == grid[8] && grid[8] == grid[9]) {
		return 1;
	}
	else if(grid[1] == grid[4] && grid[4] == grid[7]) {
		return 1;
	}
	else if(grid[2] == grid[5] && grid[5] == grid[8]) {
		return 1;
	}
	else if(grid[3] == grid[6] && grid[6] == grid[9]) {
		return 1;
	}
	else if(grid[1] == grid[5] && grid[5] == grid[9]) {
		return 1;
	}
	else if(grid[3] == grid[5] && grid[5] == grid[7]) {
		return 1;
	}
	else if(grid[1] != '1' && grid[2] != '2' && grid[3] != '3' && grid[4] !='4' && grid[5] != '5' && grid[6] != '6' && grid[7] != '7' && grid[8] != '8' && grid[9] != '9') { // If it's a tie
		return 0;
	}
	else {
		return -1; // Something must've gone wrong
	}
}

int main() {
	int player = 1, i ,choice;
	char symbol; // This will be X and O
	while (1 == 1)  {
		board();
		player = (player % 2) ? 1 : 2; // Elegant way of switching player from 1 to 2 and 2 to 1
		cout << "select choice for player " << player << ": ";
		cin >> choice;
		symbol = (player == 1) ? 'X' : 'O'; // Assign the symbols to players 1 and 2
		if(choice == 1 && grid[1] == '1') { // This whole mess checks to see if the space is filled, and then fills it if it's not
			grid[1] = symbol;
		}
		else if(choice == 2 && grid[2] == '2') {
			grid[2] = symbol;
		}
		else if(choice == 3 && grid[3] == '3') {
			grid[3] = symbol;
		}
		else if(choice == 4 && grid[4] == '4') {
			grid[4] = symbol;
		}
		else if(choice == 5 && grid[5] == '5') {
			grid[5] = symbol;
		}
		else if(choice == 6 && grid[6] == '6') {
			grid[6] = symbol;
		}
		else if(choice == 7 && grid[7] == '7') {
			grid[7] = symbol;
		}
		else if(choice == 8 && grid[8] == '8') {
			grid[8] = symbol;
		}
		else if(choice == 9 && grid[9] == '9') {
			grid[9] = symbol;	
		}
		else {
			cout << "something went wrong\n";
			player--;
		}
		for (int d = 0; d < 100; d++) { // Emulate clearing the screen, to avoid using 'system("clear");'
			cout << "\n";
		}
		i = checkScore(); // i is set to whatever checkScore returns
		player++;		
	}
	if(i == -1) { // If checkScore returns -1
		board();
	}
	if(i == 1) { // If checkScore returns 1
		cout << player << " won!\n";
	}
	else {
		cout << "it's a tie\n"; // If neither are true, it must be a tie
	}
	return 0;
}


