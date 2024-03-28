#include "ComputerPlayer.h" 
#include "Player.h"
#include "Game.h"

void ComputerPlayer::ComputerInputEasy(Game& game) {

	srand(time(0));

	while (true) {
		int row = rand() % 3;
		int col = rand() % 3;
		}
}


void ComputerPlayer::getUserName() {
	Player::getUserName();
	cout << "\nYou are playing with computer.";


}

bool ComputerPlayer::CheckTwoInARow() {

	int count = 0;
	int EmptyRow = -1, EmptyCol = -1;
	return true;
	
}
