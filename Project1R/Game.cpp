#include "Game.h" 

Game::Game() {
    WCounter = 0;
    CurrentSize = 0;
    Full = false;
    GameBoard[3][3] = {};
    Win = false;
    Tie = false;
}
void Game::CheckWin() {
    if (GameBoard[0][0] == GameBoard[0][1] && GameBoard[0][1] == GameBoard[0][2]) {
        Win = true;
    }
    else if (GameBoard[1][0] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[1][2]) {
        Win = true;
    }
    else if (GameBoard[2][0] == GameBoard[2][1] && GameBoard[2][1] == GameBoard[2][2]) {
        Win = true;
    }
    else if (GameBoard[0][0] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][2]) {
        Win = true;
    }
    else if (GameBoard[0][1] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][1]) {
        Win = true;
    }
    else if (GameBoard[0][2] == GameBoard[1][2] && GameBoard[1][2] == GameBoard[2][2]) {
        Win = true;
    }
    else if (GameBoard[0][0] == GameBoard[1][0] && GameBoard[1][0] == GameBoard[2][0]) {
        Win = true;
    }
    else if (GameBoard[0][2] == GameBoard[1][1] && GameBoard[1][1] == GameBoard[2][0]) {
        Win = true;
    }
    else {
        Win = false;
    }
}
void Game::DrawBoard() {
    cout << "-------" << endl;
    for (int row = 0; row < 3; row++) {
        cout << "|";
        for (int col = 0; col < 3; col++) {
            cout << GameBoard[row][col] << "|";
        }
        cout << endl;
        cout << "-------" << endl;

    }

}
void Game::WinCounter() {
    if (Win = true) {
        WCounter++;
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
