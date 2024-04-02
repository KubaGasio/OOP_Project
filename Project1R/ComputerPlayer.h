#include "Player.h" 

class ComputerPlayer :public Player {
private:

	int CompXPosition;

	int CompYPosition;

	

public:
	void ComputerInputEasy(Game& game);
	void ComputerInputHard(Game& game);
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
};