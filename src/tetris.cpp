#include<iostream>
#include "tetromino.cpp"
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;

int main(){

    TetrominoHelper tetrominoHelper = TetrominoHelper();

    cout << "\nWELCOME TO TETRIS\n\n";
    bool gameFinished = false;
    srand(time(NULL)); 
        
    while (!gameFinished) {

        // TODO - Move tetromino down

        // TODO - Check if next Tetromino should start falling
        // --> create one and start moving it down
        Tetromino requestedTetromino;
        requestedTetromino.setTetrominoType(tetrominoHelper.getTetrominoName(tetrominoHelper.getRandomInt()));

        // Execute this loop every 1 second
        Sleep(1000);
    }
    
    return 0;
}