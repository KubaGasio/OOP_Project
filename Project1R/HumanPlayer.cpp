#include "HumanPlayer.h"

void HumanPlayer::getUserName2() {
	Player::getUserName();
	cout << "Please give Player2's name:";
	cin >> UserName2;
}
