#include "Player.h" 

Player::Player() {

	Turn = 0;

	UserName1 = "";

	xPosition = 0;

	yPosition = 0;



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

void Player::PlayerInputs1() {

	cout << "Row position: ";

	cin >> xPosition;

	cout << "Column position: ";

	cin >> yPosition;

	CurrentSize++;
	isFull();


}
void Player::PlayerInputs2() {
	while (true) {
		cout << "Row position:";
		cin >> xPosition;
		if (xPosition <= 3 && xPosition >= 0) {
			break;
		}
	}
	while (true) {
		cout << "Column position: ";

		cin >> yPosition;
		if (yPosition <= 3 && yPosition >= 0) {
			break;
		}
	}
	CurrentSize++;

	isFull();
}
void Player::getUserName() {
	cout << "Please give Player1's name:";
	cin >> UserName1;
}
