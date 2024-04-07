#include "ComputerPlayer.h" 
#include <random>

//Checks for empty spaces in the board
bool ComputerPlayer::isEmpty(int row,int col) {
	if (GameBoard[row][col] == '\0') {
		return true;
	}
	else {
		return false;
	}
}

//Used as a random number generator for the computer player to provide an input
int ComputerPlayer::random_move() { 
	random_device rd;
	mt19937 gen(rd());
	while (true) {
		xPosition = gen() % 3;
		yPosition = gen() % 3;
		if (isEmpty(xPosition, yPosition)) {
			return xPosition * 3 + yPosition;
            break;
		}
	}
}
//Inputs the Computer's move
void ComputerPlayer::Computer_move() {
	int position = random_move();
	GameBoard[position / 3][position % 3] = 'O';
}
//Returns a value for a win
bool ComputerPlayer::getWin() {
    return Win;
}
//Checks if either the User or Computer Player won the game
void ComputerPlayer::Winner() { 
    int Check = Turn % 2;

    if (Check == 1) {
        cout << "You are the Winner!" << UserName1 << endl;
        WCounter++;
    }
    if (Check == 0) {
        cout << "The computer Wins!"<< endl;
        
    }

}
void ComputerPlayer::WinCounter() { //Calls the winner function when a win occurs
    if (Win == true) {

        Winner();
      
    }
}

void ComputerPlayer::CheckWin() {
    //Checks for all of the win conditions of the game

    for (int i = 0; i < 3; i++) {

        if (GameBoard[i][0] == GameBoard[i][1] && GameBoard[i][1] == GameBoard[i][2] && GameBoard[i][0] != '\0') {

            Win = true;
        }

        else if (GameBoard[0][i] == GameBoard[1][i] && GameBoard[1][i] == GameBoard[2][i] && GameBoard[1][i] != '\0') {

            Win = true;
        }

    }
    if (GameBoard[0][0] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][2] && GameBoard[2][2] != '\0') {

        Win = true;


    }
    else if (GameBoard[0][2] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][0] && GameBoard[1][1] != '\0') {

        Win = true;

    }
}

bool ComputerPlayer::getTie() { //Returns a tie value
    return Tie;
}
void ComputerPlayer::NextPlayer() { //Switches the turn to the next player
    int Check = Turn % 2;
    if (Check == 0) {
        Player::PlayerInputs1();
        Turn++;
    }
    else {
        Computer_move();
        Turn++;
    }

}
void ComputerPlayer::PlaceValue() { //Gives player an X marker for their turn
    int Check = Turn % 2;

    if (Check == 1) {
        GameBoard[xPosition - 1][yPosition - 1] = 'X';
    }

}