#include "Player.h"

Player::Player(char _letter, int _posX, int _posY){
    letter = _letter;
    posX = _posX;
    posY = _posY;
}

void Player::moveUp(int number_spaces){
    posX -= number_spaces;
}
void Player::moveDown(int number_spaces){
    posX += number_spaces;
}
void Player::moveRight (int number_spaces){
    posY += number_spaces;
}
void Player::moveLeft(int number_spaces){
    posY -= number_spaces;
}
void Player::moveUpRight(int number_spaces){
    posY += number_spaces;
    posX -= number_spaces;
}
void Player::moveDownRight(int number_spaces){
    posY += number_spaces;
    posX += number_spaces;
}
void Player::moveDownLeft(int number_spaces){
    posY -= number_spaces;
    posX += number_spaces;
}
void Player::moveUpLeft (int number_spaces){
    posY -= number_spaces;
    posX -= number_spaces;
}

char Player::get_letter() const {
    return letter;
}

void Player::set_letter(char letter) {
    this->letter = letter;
}

int Player::get_pos_x() const {
    return posX;
}

void Player::set_pos_x(int pos_x) {
    posX = pos_x;
}

int Player::get_pos_y() const {
    return posY;
}

void Player::set_pos_y(int pos_y) {
    posY = pos_y;
}


Player::~Player(){}
