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
		cout << "Enter your choice: ";
		cin >> choice;

		if (choice == 1) {
			HumanPlayer h;
			bool tie = h.getTie();
			do {
				h.getUserName2();
				h.DrawBoard();
				h.NextPlayer();
				h.PlaceValue();
				h.CheckWin();
			} while (tie = true);
		}
		else if (choice == 2) {
			ComputerPlayer c;
			HumanPlayer h;
			bool tie = c.getTie();
			do {
				c.DrawBoard();
				c.NextPlayer();
				c.PlaceValue();
				c.CheckWin();
			} while (tie = true);
		}
		else if (choice != 3) {
			cout << "You've entered an invalid input. Please try again." << endl;

		}

	} while (choice == 3);
}
