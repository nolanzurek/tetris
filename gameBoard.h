#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <vector>

class Piece;

class GameBoard
{
private:            
    // board with all piece positions
    int rows, cols;
    std::vector<std::vector<Piece *>> board;
    
public:
    GameBoard(int rows, int cols);
    virtual ~GameBoard();

    int getRows();
    int getCols();

    bool intersects(Piece *piece, int row, int col);

    void drawPiece(Piece *piece, int row, int col);
    void erasePiece(Piece *piece, int row, int col);
    void clear();
    void setPiece(Piece *piece, int row, int col);
    virtual Piece *getPiece(int row, int col);
};

#endif
