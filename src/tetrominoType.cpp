enum TetrominoType {
    UPSIDE_DOWN_LEFT, 
    SQUARE, 
    DOWN_LEFT_DOWN, 
    UPSIDE_DOWN_RIGHT, 
    FOUR_WIDE, 
    PODIUM, 
    DOWN_RIGHT_DOWN
};

/*! A public helper class for creating and managing Tetrominos */
class TetrominoHelper {
    public:
    
        /*! Fetch name of Tetromino based on its value*/
        TetrominoType getTetrominoName(int value) {
            switch(value) {
                case 0:
                    return UPSIDE_DOWN_LEFT;
                case 1:
                    return SQUARE;
                case 2:
                    return DOWN_LEFT_DOWN;
                case 3:
                    return UPSIDE_DOWN_RIGHT;
                case 4:
                    return FOUR_WIDE;
                case 5:
                    return PODIUM;
                case 6:
                    return DOWN_RIGHT_DOWN;
                default:
                    // default to the easier object - i.e takes up the minimum height
                    return FOUR_WIDE;
            };
        };

        /*! Generate random int for the type of Tetromino */
        int getRandomInt() {
            const int totalAmountShapes = 6;
            return rand() % (totalAmountShapes + 1);
        }

        /*! Generate random int starting x Coord */
        int getStartXCoord(TetrominoType type) {
            return rand() % (getTotalColumnsBasedOnType(type) + 1);
        }

        int getTotalColumnsBasedOnType(TetrominoType type) {
            const int totalColumns = 10;
            switch(type) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 6:
                    return 9;
                    break;
                case 4:
                    return 7;
                    break;
                case 5:
                    return 8;
                    break;
                default:
                    // default to be ruther in
                    return 7;
                    break;
            };
        }
};