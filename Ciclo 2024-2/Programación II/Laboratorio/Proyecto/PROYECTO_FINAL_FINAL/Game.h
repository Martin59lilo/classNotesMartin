#ifndef GAME_H
#define GAME_H
#include <iostream>
#include <cmath>
#include <string>
#include "SoccerField.h"
#include "Team.h"
using namespace std;

class Game {
private:
    SoccerField soccerField;
    Team* redTeam;
    Team* blueTeam;
    int posXball;
    int posYball;
// Leer línea 12 y 13 del archivo Game.cpp
    Team* current_team;
    bool is_goal;

public:
    Game();

    void print(); 
    // Función para imprimir

    bool checkball();
    // Función de verificación si es gol o no

    void play(vector<string> commands);
    // movement_p realiza los movimientos para los jugadores
    void movement_p(string& move, Player* &player, int number_spaces);
    // movement_b realiza los movimientos para el balón
    void movement_b(string& move, Player* &player, int number_spaces);
    // redirection redirecciona el balón
    void redirection(string &move, Player*& player);

    // Estas funciones realizan un movimiento de la pelota en específico, ya sea arriba, abajo, etc.
    void moveUp(int number_spaces);
    void moveDown(int number_spaces);
    void moveRight(int number_spaces);
    void moveLeft(int number_spaces);
    void moveUpRight(int number_spaces);
    void moveDownRight(int number_spaces);
    void moveDownLeft(int number_spaces);
    void moveUpLeft (int number_spaces);

    // Funciones para redireccionar el balón antes de patearlo en cierta dirección.
    void redirUp(Player* &player);
    void redirDown(Player* &player);
    void redirRight(Player* &player);
    void redirLeft(Player* &player);
    void redirUpRight(Player* &player);
    void redirDownRight(Player* &player);
    void redirDownLeft(Player* &player);
    void redirUpLeft(Player* &player);

    //GETTERS Y SETTERS
    SoccerField get_soccer_field() const;
    void set_soccer_field(const SoccerField &soccer_field);
    Team * get_red_team() const;
    void set_red_team(Team *red_team);
    Team * get_blue_team() const;
    void set_blue_team(Team *blue_team);
    int get_pos_xball() const;
    void set_pos_xball(int pos_xball);
    int get_pos_yball() const;
    void set_pos_yball(int pos_yball);
    bool get_isGoal();
    void set_isGoal(bool isGoal);
    Team* get_currentTeam();
    void set_currentTeam(Team* currentTeam);

    ~Game();
};

#endif //GAME_H
