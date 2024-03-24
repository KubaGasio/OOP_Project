#include <iostream>
#include "ComputerPlayer.h"
#include "Game.h"
#include "HumanPlayer.h"
#include "Player.h"
int main()
{
	cout << "This is a Tic-Tac-Toe game" << endl;
	int choice = 0;
	do {

		cout << "1.Playing with another player." << endl;
		cout << "2.Playing with computer." << endl;
		cout << "3.Exit" << endl;
		if (choice == 1) {
			HumanPlayer h;
			h.getUserName2();

			h.DrawBoard();
			h.PlayerInputs1();
			h.GameBoard[h.xPosition][h.yPosition] = 'X';
		}

	} while (choice == 3);
}

