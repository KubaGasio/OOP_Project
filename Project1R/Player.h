#pragma once
#include "Game.h" 

class Player :public Game {

protected:

	int Turn;

	string UserName1;

	int xPosition;

	int yPosition;

	

public:

	Player();

	void NextPlayer();

	void PlayerInputs1();

	void PlayerInputs2();

	void getUserName();
	
	void setXPosition(int x);

	void setYPosition(int y);

	void getPosition();


};