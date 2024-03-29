#ifndef PIECE_H
#define PIECE_H

#include <vector>

class Piece
{
private:
    // location
    int width, height;

    // Piece shape
    std::vector<std::vector<bool>> grid;

    // drawing
    const int colour;
    const char type;

    // state
    const int level;
    int size;
    bool heavy;

public:
    Piece(std::vector<std::vector<bool>> grid, int level, int colour, char type, bool heavy);
    ~Piece();

    // accessors
    std::vector<std::vector<bool>> getGrid() const;
    int getLevel() const;
    int getColour() const;
    char getType() const;
    int getWidth() const;
    int getHeight() const;
    int getSize() const;
    bool isHeavy() const;

    // mutators
    void rotateCW();
    void rotateCCW();
    int chSize(int size);
};

#endif
