#include <iostream>
#include "ComputerPlayer.h"
#include "Game.h"
#include "HumanPlayer.h"
#include "Player.h"
int main()
{
	cout << "This is a Tic-Tac-Toe game" << endl;
	int choice = 0;
	int choiceComp = 0;
	int End = 0;
	do {

		cout << "1.Playing with another player." << endl;
		cout << "2.Playing with computer." << endl;
		cout << "3.Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		
		if (choice == 1) {
			HumanPlayer h;
			h.resetData();
			bool tie = false;
			h.getUserName2();
			bool Win = false;
			do {
				h.DrawBoard();
				
				h.NextPlayer();
				h.PlaceValue();
				h.CheckTie();
				h.CheckWin();
				tie = h.getTie();
				Win = h.getWin();
			} while (tie != true && Win!=true);
			h.DrawBoard();
			choice = 0;
		}
		else if (choice == 2) {
			
			
			ComputerPlayer c;
			c.resetData();
			bool tie = false;
			bool Win = false;
			while (true) {
				if (tie == false) {
					c.DrawBoard();
					c.NextPlayer();
					c.PlaceValue();
					c.CheckWin();
					c.CheckTie();
					tie = c.getTie();
					Win = c.getWin();
				}
				else if (Win == false) {
					c.DrawBoard();
					c.NextPlayer();
					c.PlaceValue();
					c.CheckWin();
					c.CheckTie();
					tie = c.getTie();
					Win = c.getWin();
				}
				else {
					break;
				}
			}
			c.DrawBoard();
			choice = 0;
		}
		else if (choice != 3) {
			cout << "You've entered an invalid input. Please try again." << endl;

		}

	} while (choice != 3);
}
