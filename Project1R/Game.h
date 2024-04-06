#pragma once
#include <iostream> 
#include <sstream>
#include <string>
using namespace std;

class Game {

protected:
	int Turn;
	bool Win;
	int WCounter;
	
	bool Full;
	int CurrentSize;
	char GameBoard[3][3];
	bool Tie;
public:

	Game();
	void resetData();

	void CheckWin();
	
	void DrawBoard();

	void WinCounter();

	void isFull();

	void PlaceValue();

	void CheckTie();

	bool getTie();

	bool getWin();

	void resetBoard();
};
