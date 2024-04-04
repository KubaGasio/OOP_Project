#include "Player.h" 

class ComputerPlayer :public Player {
protected:

	int CompXPosition;

	int CompYPosition;

	

public:
	bool isEmpty(int row, int col);
	int random_move();
	
	void Computer_move();
	void getUserName();
	
	void CheckWin();
	void WinCounter();
	void Winner();
	void NextPlayer();
	void PlaceValue();
	bool getWin();
	bool getTie();
};