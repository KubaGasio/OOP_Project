
#include "Player.h" 

class HumanPlayer :public Player {

private:

	string UserName2;

public:

	void getUserName2();
	void Winner();
	void CheckWin();
	void WinCounter();
	bool getWin();
};