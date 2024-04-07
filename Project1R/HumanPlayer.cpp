#include "HumanPlayer.h"

//Gets the second player's name
void HumanPlayer::getUserName2() {
	Player::getUserName();
	cout << "Please give Player2's name:";
    cin >> UserName2;
    
}
//Outputs a message when someone wins
void HumanPlayer::Winner() { 
    int Check = Turn % 2;

    if (Check == 1) {
        cout << "The winner is " << UserName1 << endl;
        
    }
    if (Check == 0) {
        cout << "The winner is " << UserName2<< endl;
        
    }

}
//Calls the Winner function when someone wins
void HumanPlayer::WinCounter() {
    if (Win == true) {
        
        Winner();
    }
}
//Lists the win conditions for the game
void HumanPlayer::CheckWin() {
    
    
    for (int i = 0; i < 3; i++) {

        if (GameBoard[i][0] == GameBoard[i][1] && GameBoard[i][1] == GameBoard[i][2] &&GameBoard[i][0]!='\0') {

              Win = true;
                
                
            }

        else if (GameBoard[0][i] == GameBoard[1][i] && GameBoard[1][i] == GameBoard[2][i] &&GameBoard[1][i] != '\0') {

                Win = true;
                
                
            }

        }
        if (GameBoard[0][0] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][2] &&GameBoard[2][2] != '\0') {

            Win = true;


            }
        else if (GameBoard[0][2] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][0] && GameBoard[1][1] != '\0') {

            Win = true;


            }
    }
//Returns a value for win
bool HumanPlayer::getWin() {
    return Win;
}
//Returns a value for tie
bool HumanPlayer::getTie() {
    return Tie;
}