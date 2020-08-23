#include "tetrominoType.cpp"
using namespace std;

// TODO understand how to do this properly
bool upsideDownLeft[][3] = {{true, true},{false, true},{false, true}};
bool square[][3]= {{true, true},{true, true}};
bool downLeftDown[][3] = {{false, true},{true, true},{true, false}};
bool upsideDownRight[][3] = {{true, true},{true, false}, {true, false}};
bool fourWide[][3] = {true, true,true,true};
bool podium[][3] = {{false, true, false},{true, true, true}};
bool downRightDown[][3] = {{true, false},{true, true},{false, true}};

class Tetromino {
  private:
    int height = 0;
    int width = 0;
    TetrominoType tetrominoType;
    string readableName;
    int xCoord = 0;
    int yCoord = 0;

  public:
    int getHeight() {
      return height;
    };

    int getWidth() {
      return width;
    };

    int getXCoord() {
      return xCoord;
    };

    int getYCoord() {
      return yCoord;
    };

    int getTetrominoType() {
      return tetrominoType;
    };

    void setTetrominoType(TetrominoType newTetrominoType) {
      tetrominoType = newTetrominoType;    
      setTetrominoDimensions();
    };

    void setStartLocation(int newXCoord, int newYCoord) {
      xCoord = newXCoord;
      yCoord = newYCoord;
    };

    void updateLocation(int xCoordDif, int yCoordDif) {
      xCoord = xCoord + xCoordDif;
      yCoord = yCoord + yCoordDif;
      cout << xCoord << " " << yCoord << "\n";
    }

    void setTetrominoDimensions() {
        switch(tetrominoType) {
          case 0:
            initialiseShape(3, 2, "upsideDownLeft");
            printTetrominoDetails(upsideDownLeft);
            break;
          case 1:
            initialiseShape(2, 2, "square");
            printTetrominoDetails(square);
            break;
          case 2:
            initialiseShape(3, 2, "downLeftDown");
            printTetrominoDetails(downLeftDown);
            break;
          case 3:
            initialiseShape(3, 2, "upsideDownRight");
            printTetrominoDetails(upsideDownRight);
            break;
          case 4:
            initialiseShape(1, 4, "fourWide");
            printTetrominoDetails(fourWide);
            break;
          case 5:
            initialiseShape(2, 3, "podium");
            printTetrominoDetails(podium);
            break;
          case 6:
            initialiseShape(3, 2, "downRightDown");
            printTetrominoDetails(downRightDown);
            break;
          default:
            // nothing happens
            break;
        };
    }

    void initialiseShape(int newHeight, int newWidth, string newReadableName) {
      readableName = newReadableName;
      height = newHeight;
      width = newWidth;
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