enum TetrominoType {
    UPSIDE_DOWN_L_1, 
    SQUARE, 
    DOWN_LEFT_DOWN, 
    UPSIDE_DOWN_L_2, 
    FOUR_WIDE, 
    PODIUM, 
    DOWN_RIGHT_DOWN
};

class TetrominoHelper {
    public:
        TetrominoType getTetrominoName(int value) {
            switch(value) {
                case 0:
                    return UPSIDE_DOWN_L_1;
                case 1:
                    return SQUARE;
                case 2:
                    return DOWN_LEFT_DOWN;
                case 3:
                    return UPSIDE_DOWN_L_2;
                case 4:
                    return FOUR_WIDE;
                case 5:
                    return PODIUM;
                case 6:
                    return DOWN_RIGHT_DOWN;
                default:
                    return UPSIDE_DOWN_L_1;
            };
        };

        int getRandomInt() {
            return rand() % (6 + 1);
        }
};