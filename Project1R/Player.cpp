#include "Player.h" 

Player::Player() {

	Turn = 0;

	UserName1 = "";

	xPosition = 0;

	yPosition = 0;

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

	if (GameBoard[xPosition][yPosition] == 'X') {
		Same = true;
	}
	else if (GameBoard[xPosition][yPosition] == 'Y') {
		Same = true;
	}
	else if(GameBoard[xPosition][yPosition] =='\0') {
		Same = false;
	}
}

void Player::PlayerInputs1() {
	bool validInput = false; // Flag to control loop

	do {
		cout << "Row position: ";
		cin >> xPosition;
		cout << "Column position:";
		cin >> yPosition;

		// Range checks first
		if (xPosition < 0 || xPosition > 2 || yPosition < 0 || yPosition > 2) {
			cout << "Input is out of range. Please enter values between 0 and 2." << endl;
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
		cout << "Row position: ";
		cin >> xPosition;
		cout << "Column position:";
		cin >> yPosition;

		// Range checks first
		if (xPosition < 0 || xPosition > 2 || yPosition < 0 || yPosition > 2) {
			cout << "Input is out of range. Please enter values between 0 and 2." << endl;
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

void Player::getUserName() {
	cout << "Please give Player1's name:";
	cin >> UserName1;
}
void Player::PlaceValue() {
	int Check = Turn % 2;
	
	if (Check == 0) {
		
		GameBoard[xPosition][yPosition] = 'X';
	}
	if (Check == 1) {
		GameBoard[xPosition][yPosition] = 'Y';
	}
	
}
