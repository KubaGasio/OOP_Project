
#include "Player.h" 

class HumanPlayer :public Player {

protected:

	string UserName2;
	
public:

	void getUserName2();
	void Winner();
	void CheckWin();
	void WinCounter();
	bool getWin();
	bool getTie();
};