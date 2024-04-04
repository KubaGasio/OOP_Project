#include "Player.h" 
#include <string>
Player::Player() {



	UserName1 = "";

	xPosition = 1;

	yPosition = 1;

	Same = false;
	
}
void Player::setXPosition(int x) {
	xPosition = x;

}

void Player::setYPosition(int y) {
	yPosition = y;

}

int Player::getXPosition() {
	return xPosition;

}
int Player::getYPosition() {
	return yPosition;
}



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

void Player::PlayerInputs1() {
	bool validInput = false; // Flag to control loop

	do {
		
		cout << "Enter row and column:";
		cin.ignore();
		cin >> xPosition >> yPosition;
		
		// Range checks first
		if (xPosition < 1 || xPosition > 3 || yPosition < 1 || yPosition > 3) {
			cout << "Input is out of range. Please enter values between 1 and 3." << endl;
			validInput = false;
		}
		else {
			SamePosition(); // Check if position is occupied

			if (Same==true) {
				cout << "Invalid position, space already occupied. Please try again." << endl;
				validInput = false;
			}
			else {
				validInput = true; // Input passed all checks
				CurrentSize++;
				isFull();
			}
		}
	} while (!validInput);
}

// Modify PlayerInputs2 similarly

void Player::PlayerInputs2() {
	bool validInput = false; // Flag to control loop

	do {
		
		cout << "Enter row and column:";
		cin.ignore();
		
		cin >> xPosition >> yPosition;


		// Range checks first
		if (xPosition < 1 || xPosition > 3 || yPosition < 1 || yPosition > 3) {
			cout << "Input is out of range. Please enter values between 1 and 3." << endl;
			validInput = false;

		}
		else {
			SamePosition(); // Check if position is occupied

			if (Same==true) {
				cout << "Invalid position, Please try again." << endl;
				validInput = false;
			}
			else {
				validInput = true; // Input passed all checks
				CurrentSize++;
				isFull();
			}
		}
	} while (!validInput);
}

// Modify PlayerInputs2 similarly

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
