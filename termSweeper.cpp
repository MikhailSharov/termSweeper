#include <iostream>
#include <limits>

using namespace std;

class GameBoard {
	public:

	int width, height, bombs;
		//will have to make a board state or something like that?

	void initialize_game_params()
	{
		int width_arr[3] = {9, 16, 16};
		int height_arr[3] = {9, 16, 30};
		int bomb_arr[3] = {10, 40, 99};

		int game_select;


		cout << "Welcome to termSweeper!" << endl;
		cout << "Please select a game difficulty: \n" << 
				"(0) Easy, 9x9 board, 10 mines \n" << 
				"(1) Medium 16x16 board, 40 mines \n" << 
				"(2) Hard 16x30, 99 mines" << endl;
	
		cin >> game_select; 

		while (1) {
			if (cin.fail() || game_select > 2 || game_select < 0) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Please enter a number (0-2):" << endl;
				cin >> game_select;
			}
			else {
				width = width_arr[game_select];
				height = height_arr[game_select];
				bombs = bomb_arr[game_select];
				break;
			}		
		}
	}

	void display_board()
	{
			
	}
};



int main(int argc, char *argv[]){
	
	GameBoard board;
	board.initialize_game_params();
	cout << board.width << board.height << board.bombs << endl;	
	return 0;
}
