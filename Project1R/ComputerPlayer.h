#include "Player.h" 

class ComputerPlayer :public Player {

public:
	bool isEmpty(int row, int col);

	int random_move();

	void Computer_move();

	void CheckWin();

	void WinCounter();

	void Winner();

	void NextPlayer();

	void PlaceValue();

	bool getWin();

	bool getTie();
};