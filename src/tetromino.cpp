#include "tetrominoType.cpp"
using namespace std;

// TODO understand how to do this properly
bool upsideDownLeft[][3] = {{true, true},{false, true},{false, true}};
bool square[][3]= {{true, true},{true, true}};
bool downLeftDown[][3] = {{false, true},{true, true},{true, false}};
bool upsideDownRight[][3] = {{true, true},{true, false}, {true, false}};
bool fourWide[][3] = {true, true, true, true};
bool podium[][3] = {{false, true, false},{true, true, true}};
bool downRightDown[][3] = {{true, false},{true, true},{false, true}};

/*! The Tetromino is a shape consisting of 4 square blocks, connected by at least one edge.
This class encapsulates a Tetromino and holds its location on the Tetris board */
class Tetromino {
  private:

    /*! Different types of Tetromino */
    TetrominoType tetrominoType;

    /*! A displayable name for the TetrominoType */
    string readableName;
    
    /*! Height of the Tetromino according to amount of blocks */
    int height = 0;

    /*! Width of the Tetromino according to amount of blocks */
    int width = 0;

    /*! x coordinate of Tetromino on the Tetris board */
    int xCoord = 0;

    /*! y coordinate of Tetromino on the Tetris board */
    int yCoord = 0;

  public:
  
    /*! Fetch the height of the Tetromino */
    int getHeight() {
      return height;
    };

    /*! Fetch the width of the Tetromino */
    int getWidth() {
      return width;
    };

    /*! Fetch the X coordinate of the Tetromino */
    int getXCoord() {
      return xCoord;
    };

    /*! Fetch the Y coordinate of the Tetromino */
    int getYCoord() {
      return yCoord;
    };

    /*! Fetch the type of Tetromino */
    int getTetrominoType() {
      return tetrominoType;
    };

    /*! Update the type of Tetromino */
    void setTetrominoType(TetrominoType newTetrominoType) {
      tetrominoType = newTetrominoType;    
      initialiseTetromino();
    };

    /*! Update the start location of Tetromino - Only the X coordinate can change */
    void setStartLocation(int newXCoord) {
      updateLocation(newXCoord, 0);
    };

    /*! Update the location of Tetromino on the board */
    void updateLocation(int xCoordDif, int yCoordDif) {
      xCoord = xCoord + xCoordDif;
      yCoord = yCoord + yCoordDif;
      cout << xCoord << " " << yCoord << "\n";
    }

    /*! Set the dimensions of the Tetromino based on its type */
    void initialiseTetromino() {
        switch(tetrominoType) {
          case 0:
            setTetrominoDimensions(3, 2, "upsideDownLeft");
            printTetrominoDetails(upsideDownLeft);
            break;
          case 1:
            setTetrominoDimensions(2, 2, "square");
            printTetrominoDetails(square);
            break;
          case 2:
            setTetrominoDimensions(3, 2, "downLeftDown");
            printTetrominoDetails(downLeftDown);
            break;
          case 3:
            setTetrominoDimensions(3, 2, "upsideDownRight");
            printTetrominoDetails(upsideDownRight);
            break;
          case 4:
            setTetrominoDimensions(1, 4, "fourWide");
            printTetrominoDetails(fourWide);
            break;
          case 5:
            setTetrominoDimensions(2, 3, "podium");
            printTetrominoDetails(podium);
            break;
          case 6:
            setTetrominoDimensions(3, 2, "downRightDown");
            printTetrominoDetails(downRightDown);
            break;
          default:
            // nothing happens
            break;
        };
    }

    /*! Initialise the dimensions of the Tetromino */
    void setTetrominoDimensions(int newHeight, int newWidth, string newReadableName) {
      readableName = newReadableName;
      height = newHeight;
      width = newWidth;
    }

    Tetromino newInstance(TetrominoType type, int startCoord) {
        Tetromino newTetromino;
        newTetromino.setTetrominoType(type);
        newTetromino.setStartLocation(startCoord);
        return newTetromino;
    }

    void printTetrominoDetails(bool tetromino[][3]) {
      cout << "\nThe type is: " << readableName << "\n";
      for (int row = 0; row < height; row++) {
          for (int collumn = 0; collumn < width; collumn++) {
              cout << tetromino[row][collumn];
          }
          cout << "\n";
      }
      cout << "\n";
    }
};