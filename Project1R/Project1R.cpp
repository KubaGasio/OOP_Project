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
				h.CheckWin();
				h.CheckTie();
				Win = h.getWin();
				tie = h.getTie();
				cout << tie << Win;
			} while (tie != true && Win!=true);
		
			h.WinCounter();
			h.DrawBoard();
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
					cout << tie << Win;
				}
				else if (Win == false) {
					c.DrawBoard();
					c.NextPlayer();
					c.PlaceValue();
					c.CheckWin();
					c.CheckTie();
					tie = c.getTie();
					Win = c.getWin();
					cout << tie << Win;
				}
				else {
					break;
				}
			}
			c.DrawBoard();
			c.WinCounter();
			
			
			
			
		}
		else if (choice !=1) {
			cout << "You've entered an invalid input. Please try again." << endl;

		}
		else if (choice != 2) {
			cout << "You've entered an invalid input. Please try again." << endl;
		}


	} while (choice != 3);
}
