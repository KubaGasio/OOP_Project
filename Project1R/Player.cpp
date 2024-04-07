#include "Player.h" 
#include <string>
//initializes the username and x/y coordinates in the game
Player::Player() {

	UserName1 = "";

	xPosition = 1;

	yPosition = 1;

	Same = false;
	
}
//setter for the x position
void Player::setXPosition(int x) {
	xPosition = x;

}
//setter for the y position
void Player::setYPosition(int y) {
	yPosition = y;

}
//getter for the x position
int Player::getXPosition() {
	return xPosition;

}
//getter for the y position
int Player::getYPosition() {
	return yPosition;
}


//changes turns between players
void Player::NextPlayer() {
	int Check = Turn % 2;
	if (Check == 0) {
		PlayerInputs1();
		Turn++;
	}
	else {
		PlayerInputs2();
		Turn++;
	}

}
//Checks the board so that players cannot place their marker in the same spot
void Player::SamePosition() {

	if (GameBoard[xPosition-1][yPosition-1] == 'O') {
		Same = true;
	}
	else if (GameBoard[xPosition-1][yPosition-1] == 'X') {
		Same = true;
	}
	else if(GameBoard[xPosition-1][yPosition-1] =='\0') {
		Same = false;
	}
}
//Allows player 1 to input values
void Player::PlayerInputs1() {
	bool validInput = false; 

	do {
		
		cout << "Enter row and column:";
		cin.ignore();
		cin >> xPosition >> yPosition;
		
		
		if (xPosition < 1 || xPosition > 3 || yPosition < 1 || yPosition > 3) {
			cout << "Input is out of range. Please enter values between 1 and 3." << endl;
			validInput = false;
		}
		else {
			SamePosition(); 

			if (Same==true) {
				cout << "Invalid position, space already occupied. Please try again." << endl;
				validInput = false;
			}
			else {
				validInput = true; 
				CurrentSize++;
				isFull();
			}
		}
	} while (!validInput);
}


//Allows opposing player to make an input
void Player::PlayerInputs2() {
	bool validInput = false; 

	do {
		
		cout << "Enter row and column:";
		cin.ignore();
		
		cin >> xPosition >> yPosition;


		
		if (xPosition < 1 || xPosition > 3 || yPosition < 1 || yPosition > 3) {
			cout << "Input is out of range. Please enter values between 1 and 3." << endl;
			validInput = false;

		}
		else {
			SamePosition(); 

			if (Same==true) {
				cout << "Invalid position, Please try again." << endl;
				validInput = false;
			}
			else {
				validInput = true; 
				CurrentSize++;
				isFull();
			}
		}
	} while (!validInput);
}


//Prompts Player1 for their username
void Player::getUserName() {
	cout << "Please give Player1's name:";
	cin >> UserName1;
}
void Player::PlaceValue() {
	int Check = Turn % 2;
	
	if (Check == 0) {
		
		GameBoard[xPosition-1][yPosition-1] = 'O';
	}
	if (Check == 1) {
		GameBoard[xPosition-1][yPosition-1] = 'X';
	}
	
}
