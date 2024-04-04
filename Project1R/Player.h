#pragma once
#include "Game.h" 

class Player :public Game {

protected:

	

	string UserName1;

	int xPosition;

	int yPosition;
	bool Same;
	string inputline;
	
public:

	Player();

	void NextPlayer();

	void PlayerInputs1();

	void PlayerInputs2();

	void getUserName();

	void setXPosition(int x);

	void setYPosition(int y);

	int getXPosition();

	int getYPosition();
	void PlaceValue();
	void SamePosition();
	

};

