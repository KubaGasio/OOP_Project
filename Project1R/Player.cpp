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
	else {
		Same = false;
	}
}

void Player::PlayerInputs1() {
	
	do {
		
		cout << "Row position: ";
		cin >> xPosition;
		cout << "Column position:";
		cin >> yPosition;
		SamePosition();
		if (xPosition < 0 || xPosition > 2) {
			cout << "The row value is not in the range." << endl;
		}
		else if (yPosition < 0 || yPosition > 2) {
			cout << "The column value is not in the range." << endl;
		}
		else if (Same=true) { // Check for conflict if range is valid
			cout << "Invalid position, please enter a new position." << endl;
		}
	} while (xPosition < 0 || xPosition > 2||yPosition<0 ||yPosition>2 || !Same);

	// Repeat the same structure for yPosition

	
	CurrentSize++;
	isFull();


}
void Player::PlayerInputs2() {
	do {

		cout << "Row position: ";
		cin >> xPosition;
		cout << "Column position:";
		cin >> yPosition;
		SamePosition();
		if (xPosition < 0 || xPosition > 2) {
			cout << "The row value is not in the range." << endl;
		}
		else if (yPosition < 0 || yPosition > 2) {
			cout << "The column value is not in the range." << endl;
		}
		else if (Same=true) { // Check for conflict if range is valid
			cout << "Invalid position, please enter a new position." << endl;
		}
	} while (xPosition < 0 || xPosition > 2 || yPosition < 0 || yPosition>2 || !Same);

	CurrentSize++;

	isFull();
}
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
