#include <iostream>
#include "ComputerPlayer.h"
#include "Game.h"
#include "HumanPlayer.h"
#include "Player.h"
int main()
{
	cout << "This is a Tic-Tac-Toe game. Please select your game mode:" << endl;
	int choice = 0;
	
	
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
				
			} while (tie != true && Win!=true);
		    if(Win){
				
				h.DrawBoard();
				h.WinCounter();
			}
			else if (tie) {
				h.DrawBoard();
				cout << "The game ends in a tie." << endl;

			}
			
		}
		else if (choice == 2) {
			
			
			ComputerPlayer c;
			c.resetData();
			bool tie = false;
			bool Win = false;

			do {
				c.DrawBoard();
				c.NextPlayer();
				c.PlaceValue();
				c.CheckWin();
				c.CheckTie();
				Win = c.getWin();
				tie = c.getTie();
				
			} while (tie != true && Win != true);

			if (Win) {

				c.DrawBoard();
				c.WinCounter();
			}
			else if (tie) {
				c.DrawBoard();
				cout << "The game ends in a tie." << endl;
			}

		}
		else if (choice != 3) {
			cout << "You'vr entered an invalid choice. Please enter again." << endl;
		}

	} while (choice != 3);
	cout << " GAME END";
}
