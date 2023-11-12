#include <iostream>
#include <limits>

#define max_frame_side = 25
#define max_bomb_saturation = 1.0
#define min_bomb_saturation = 0.0

using namespace std;

void select_game_params()
{
	int board_width, board_height;
	std::cout << "Please enter the desired width and height of the board" << std::endl;
	std::cin >> board_width >> board_height;
	
	while (1) {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Please enter an integer value for height and width" << std::endl;
			std::cin >> board_width >> board_height;
		}
		if (board_width > 25 || board_height >> 25 ) {
			std::cin.clear();
			std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
			std::cout << "Sorry, maximum side size is 25, try again!" << std::endl;
			std::cin >>  board_width >> board_height;
		}
		if (!cin.fail()) {
			break;
		}		
	}

	std::cout << "You have selected: width = " << board_width << " and height = " << board_height << std::endl;
}




int main(int argc, char *argv[])
{
	select_game_params();
	return 0;
}
