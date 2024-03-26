#pragma once


#include <iostream> 

using namespace std;



class Game {

protected:



	bool Win;

	int WCounter;

	bool Full;
	int CurrentSize;
	char GameBoard[3][3];
	bool Tie;
public:

	Game();

	void CheckWin();

	void DrawBoard();

	void WinCounter();

	void isFull();

	void PlaceValue();

	void CheckTie();
	bool getTie();

	void resetBoard();



};
