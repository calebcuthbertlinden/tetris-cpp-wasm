#include <iostream>
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
    
    TetrominoType type = tetrominoHelper.getTetrominoName(tetrominoHelper.getRandomInt());
    Tetromino tetrominoInPlay = Tetromino().newInstance(type, tetrominoHelper.getStartXCoord(type));

    // The Tetris game loop
    while (!gameFinished) {

        // TODO - Check if next Tetromino should start falling
        // --> create one and start moving it down
        if (tetrominoInPlay.getYCoord() == 20) {
            TetrominoType type = tetrominoHelper.getTetrominoName(tetrominoHelper.getRandomInt());
            tetrominoInPlay = Tetromino().newInstance(type, tetrominoHelper.getStartXCoord(type));
        }

        // Listen for keyboard inputs

        // TODO - Move tetromino down
        tetrominoInPlay.updateLocation(0, 1);

        // Execute this loop every 0.5 second
        Sleep(200);
    }
    
    return 0;
}