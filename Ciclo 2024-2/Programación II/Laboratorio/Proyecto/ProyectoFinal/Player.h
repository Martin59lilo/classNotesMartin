#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include "Person.h"
using namespace std;

class Player: public Person {
private:
    char letter;
    int posX;
    int posY;

public:
    Player(char _letter, int _posX, int _posY);

    // Métodos de movimiento de la clase jugador
    void moveUp(int number_spaces);
    void moveDown(int number_spaces);
    void moveRight (int number_spaces);
    void moveLeft(int number_spaces);
    void moveUpRight(int number_spaces);
    void moveDownRight(int number_spaces);
    void moveDownLeft(int number_spaces);
    void moveUpLeft (int number_spaces);

    //GETTERS Y SETTERS
    char get_letter() const;
    void set_letter(char letter);
    int get_pos_x() const;
    void set_pos_x(int pos_x);
    int get_pos_y() const;
    void set_pos_y(int pos_y);
    
    ~Player();
};

#endif //PLAYER_H
