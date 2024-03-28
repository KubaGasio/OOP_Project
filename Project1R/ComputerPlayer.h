#include "Player.h" 

class ComputerPlayer :public Player {
private:

	int CompXPosition;

	int CompYPosition;

	

public:
	void ComputerInputEasy(Game& game);
	void ComputerInputHard(Game& game);

	void setCompXPosition();
	void setCompYPosition();
	int getCompXPosition();
	int getCompYPosition();

	void getUserName();
	bool BlockOpponentWin();
	bool CheckTwoInARow();


};