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

    
    Tetromino tetrominoInPlay;
    tetrominoInPlay.setTetrominoType(tetrominoHelper.getTetrominoName(tetrominoHelper.getRandomInt()));
    tetrominoInPlay.setStartLocation(tetrominoHelper.getStartXCoord(), 0);
        
    while (!gameFinished) {

        // TODO - Check if next Tetromino should start falling
        // --> create one and start moving it down
        if (tetrominoInPlay.getYCoord() == 20) {
            Tetromino requestedTetromino;
            requestedTetromino.setTetrominoType(tetrominoHelper.getTetrominoName(tetrominoHelper.getRandomInt()));
            requestedTetromino.setStartLocation(tetrominoHelper.getStartXCoord(), 0);
            tetrominoInPlay = requestedTetromino;
        }

        // TODO - Move tetromino down
        tetrominoInPlay.updateLocation(0, 1);

        // Execute this loop every 0.5 second
        Sleep(500);
    }
    
    return 0;
}