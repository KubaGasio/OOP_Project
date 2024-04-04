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
	int WCounter2;
	bool Full;
	int CurrentSize;
	char GameBoard[3][3];
	bool Tie;
public:

	Game();
	void resetData();
	void CheckWin();
	int getfull();
	void DrawBoard();

	void WinCounter();

	void isFull();

	void PlaceValue();

	void CheckTie();
	bool getTie();
	bool getWin();

	void resetBoard();
	
	void ReturnToMenu();


};
