#pragma once
#include "Game.h" 

class Player :public Game {

protected:

	int Turn;

	string UserName1;



	

public:

	Player();

	void NextPlayer();

	void PlayerInputs1();

	void PlayerInputs2();

	void getUserName();

	int xPosition;

	int yPosition;

};