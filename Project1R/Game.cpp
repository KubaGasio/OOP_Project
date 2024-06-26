#include "Game.h" 

Game::Game() { //initializes the game and draws the board
    Turn = 0;

    CurrentSize = 0;
    Full = false;
    for (int i = 0; i < 3; i++) {

        for (int c = 0; c < 3; c++) {

            GameBoard[i][c] = '\0';
        }
    }
    Win = false;
    Tie = false;
   
}
void Game::resetData() { //Resets the game state by clearing the board and resets variables
    Turn = 0;
    
    CurrentSize = 0;
    Full = false;
    Win = false;
    Tie = false;
    for (int i = 0; i < 3; i++) {

        for (int c = 0; c < 3; c++) {

            GameBoard[i][c] = '\0';
        }
    }
   
    
}

void Game::CheckWin() { //provides win conditions for the game

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
        }

        else if (GameBoard[0][2] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][0] && GameBoard[1][1] == 'O') {

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
void Game::DrawBoard() { //Creates the board and has rows and columns to make it readable
    cout << "\n   1   2   3" << endl;
    cout << "  ----------" << endl;
    
    for (int row = 0; row < 3; row++) {
        cout << row+1<<" | ";
        for (int col = 0; col < 3; col++) {
            cout << GameBoard[row][col] << " | ";
        }
        cout << endl;
        cout << "  ----------" << endl;

    }

}
void Game::resetBoard() { //Resets the Board
    for (int i = 0; i < 3; i++) {

        for (int c = 0; c < 3; c++) {

            GameBoard[i][c] = '\0';
        }
    }
    Turn = 0;
}
void Game::WinCounter() { //Resets the board if there is a win
    if (Win == true) {
        resetBoard();
    }
}
void Game::isFull() { //Checks if the board is full
    if (GameBoard[0][0] != '\0' && GameBoard[0][1] != '\0' && GameBoard[0][2] != '\0' && GameBoard[1][0] != '\0' && GameBoard[1][1] != '\0' && GameBoard[1][2] != '\0' && GameBoard[2][0] != '\0' && GameBoard[2][1] != '\0' && GameBoard[2][2] != '\0') {
        Full = true;
    }
}
void Game::CheckTie() { //Checks if the game is a tie
    isFull();
    if (Full ==true) {
        Tie = true;
    }else {
        Tie = false;
    }
}
bool Game::getTie() { //Returns a value for tie
    return Tie;
}
void Game::PlaceValue() { 

}
bool Game::getWin() { //Returns a value for win
    return Win;
}