#include "HumanPlayer.h"

void HumanPlayer::getUserName2() {
	Player::getUserName();
	cout << "Please give Player2's name:";
	cin >> UserName2;
}

void HumanPlayer::Winner() {
    int Check = Turn % 2;

    if (Check == 1) {
        cout << "The winner is " << UserName1 << endl;
        
    }
    if (Check == 0) {
        cout << "The winner is " << UserName2<< endl;
        
    }

}
void HumanPlayer::WinCounter() {
    if (Win == true) {
        
        Winner();
        Game::resetBoard();
      

    }


}

void HumanPlayer::CheckWin() {
   

        for (int i = 0; i < 3; i++) {

            if (GameBoard[i][0] == GameBoard[i][1] && GameBoard[i][1] == GameBoard[i][2] && GameBoard[i][0] == 'O') {

                Win = true;
                WinCounter();
                
            }

            else if (GameBoard[0][i] == GameBoard[1][i] && GameBoard[1][i] == GameBoard[2][i] && GameBoard[1][i] == 'O') {

                Win = true;
                WinCounter();
                
            }

            else if (GameBoard[0][0] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][2] && GameBoard[1][1] == 'O') {

                Win = true;
                WinCounter();
               
            }else if (GameBoard[0][2] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][0] && GameBoard[1][1] == 'O') {

                Win = true;
                WinCounter();
               
            }

            else if (GameBoard[i][0] == GameBoard[i][1] && GameBoard[i][1] == GameBoard[i][2] && GameBoard[i][0] == 'X') {

                Win = true;
                WinCounter();
                
            }

            else if (GameBoard[0][i] == GameBoard[1][i] && GameBoard[1][i] == GameBoard[2][i] && GameBoard[1][i] == 'X') {

                Win = true;
                WinCounter();
                
            }

            else if (GameBoard[0][0] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][2] && GameBoard[1][1] == 'X') {

                Win = true;
                WinCounter();
                
            }

            else if (GameBoard[0][2] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][0] && GameBoard[1][1] == 'X') {

                Win = true;
                WinCounter();
                
            }

            else {

                Win = false;
                WinCounter();
               
            }

        }



    }

bool HumanPlayer::getWin() {
    return Win;
}