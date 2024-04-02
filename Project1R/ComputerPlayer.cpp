#include "ComputerPlayer.h" 
#include <random>

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



bool ComputerPlayer::isEmpty(int row,int col) {
	if (GameBoard[row][col] == '\0') {
		return true;
	}
	else {
		return false;
	}
}

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
void ComputerPlayer::Computer_move() {
	int position = random_move();
	GameBoard[position / 3][position % 3] = 'O';
}
bool ComputerPlayer::getWin() {
    return Win;
}
void ComputerPlayer::Winner() {
    int Check = Turn % 2;

    if (Check == 1) {
        cout << "You are the Winner!" << UserName1 << endl;
        WCounter++;
    }
    if (Check == 0) {
        cout << "The winner is Computer."<< endl;
        WCounter2++;
    }

}
void ComputerPlayer::WinCounter() {
    if (Win == true) {

        Winner();
       
        

    }


}

void ComputerPlayer::CheckWin() {


    for (int i = 0; i < 3; i++) {

        if (GameBoard[i][0] == GameBoard[i][1] && GameBoard[i][1] == GameBoard[i][2] && GameBoard[i][0] == 'O') {

            Win = true;
            WinCounter();

        }

        else if (GameBoard[0][i] == GameBoard[1][i] && GameBoard[1][i] == GameBoard[2][i] && GameBoard[1][i] == 'O') {

            Win = true;
            WinCounter();

        }

        else if (GameBoard[0][0] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][2] && GameBoard[1][1] == 'O') {

            Win = true;
            WinCounter();

        }
        else if (GameBoard[0][2] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][0] && GameBoard[1][1] == 'O') {

            Win = true;
            WinCounter();

        }

        else if (GameBoard[i][0] == GameBoard[i][1] && GameBoard[i][1] == GameBoard[i][2] && GameBoard[i][0] == 'X') {

            Win = true;
            WinCounter();

        }

        else if (GameBoard[0][i] == GameBoard[1][i] && GameBoard[1][i] == GameBoard[2][i] && GameBoard[1][i] == 'X') {

            Win = true;
            WinCounter();

        }

        else if (GameBoard[0][0] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][2] && GameBoard[1][1] == 'X') {

            Win = true;
            WinCounter();

        }

        else if (GameBoard[0][2] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][0] && GameBoard[1][1] == 'X') {

            Win = true;
            WinCounter();

        }

        else {

            Win = false;
            WinCounter();

        }

    }



}
void ComputerPlayer::NextPlayer() {
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
void ComputerPlayer::PlaceValue() {
    int Check = Turn % 2;

    if (Check == 1) {
        GameBoard[xPosition - 1][yPosition - 1] = 'X';
    }

}