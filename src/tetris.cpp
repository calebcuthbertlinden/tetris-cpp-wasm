#include<iostream>
#include "tetromino.cpp"

using namespace std;

int main(){

    cout << "\nTo view the Tetrominos for Tetris, enter a number from 0-6\n\n";

    while (true) {
        Tetromino requestedTetromino;
        int tetrominoInputValue;
        cout << "Please enter a value: ";
        cin >> tetrominoInputValue;

        switch(tetrominoInputValue) {
            case 0:
                requestedTetromino.setShapeType(UPSIDE_DOWN_L_1);
                break;
            case 1:
                requestedTetromino.setShapeType(SQUARE);
                break;
            case 2:
                requestedTetromino.setShapeType(DOWN_LEFT_DOWN);
                break;
            case 3:
                requestedTetromino.setShapeType(UPSIDE_DOWN_L_2);
                break;
            case 4:
                requestedTetromino.setShapeType(FOUR_WIDE);
                break;
            case 5:
                requestedTetromino.setShapeType(PODIUM);
                break;
            case 6:
                requestedTetromino.setShapeType(DOWN_RIGHT_DOWN);
                break;
            default:
                cout << "There is no Tetromino for this value \n\n";
                break;
            };
    }
    
    return 0;
}