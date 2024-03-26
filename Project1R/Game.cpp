#include "Game.h" 

Game::Game() {
    WCounter = 0;
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
void Game::CheckWin() {

    for (int i = 0; i < 3; i++) {

        if (GameBoard[i][0] == GameBoard[i][1] && GameBoard[i][1] == GameBoard[i][2] && GameBoard[i][0] == 'X') {

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

        else if (GameBoard[i][0] == GameBoard[i][1] && GameBoard[i][1] == GameBoard[i][2] && GameBoard[i][0] == 'Y') {

            Win = true;
            WinCounter();
        }

        else if (GameBoard[0][i] == GameBoard[1][i] && GameBoard[1][i] == GameBoard[2][i] && GameBoard[1][i] == 'Y') {

            Win = true;
            WinCounter();
        }

        else if (GameBoard[0][0] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][2] && GameBoard[1][1] == 'Y') {

            Win = true;
            WinCounter();
        }

        else if (GameBoard[0][2] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][0] && GameBoard[1][1] == 'Y') {

            Win = true;
            WinCounter();
        }

        else {

            Win = false;
            WinCounter();
        }
    
    }
   


}
void Game::DrawBoard() {
    cout << "------------" << endl;
    for (int row = 0; row < 3; row++) {
        cout << " | ";
        for (int col = 0; col < 3; col++) {
            cout << GameBoard[row][col] << " | ";
        }
        cout << endl;
        cout << "------------" << endl;

    }

}
void Game::resetBoard() {
    for (int i = 0; i < 3; i++) {

        for (int c = 0; c < 3; c++) {

            GameBoard[i][c] = '\0';
        }
    }
}
void Game::WinCounter() {
    if (Win == true) {
        WCounter++;
        resetBoard();
        Win = false;
        
    }
    

}
void Game::isFull() {
    if (CurrentSize == 9) {
        Full = true;
    }
    else {
        Full = false;
    }

}
void Game::CheckTie() {
    if (Full = true) {
        Tie = true;
    }
    else if (Win = true) {
        Tie = true;
    }
    else {
        Tie = false;
    }
}
bool Game::getTie() {
    return Tie;
}
void Game::PlaceValue() {

}
