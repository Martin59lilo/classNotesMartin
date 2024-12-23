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
    vector<string> commands;
    Team* current_team;

public:
    Game();

    void play();
    // Acciones prinicipales
    void take_commands();
    void init();
    void actions(string& Action, string& Choice, string& NumberSpaces, Player* player);
    void team_action(Player* player);
    void print();
    bool check_goal();
    void change_turn();

    // Acciones secundarias

    // Verificar el numero de espacios
    bool check_number_spaces(string& Choice, string& NumberSpaces);
    // movement_p realiza los movimientos para los jugadores
    void movement_p(string& move, Player* &player, int number_spaces);
    // movement_b realiza los movimientos para el balón
    void movement_b(string& move, Player* &player, int number_spaces);
    void moveUp(int number_spaces);
    void moveDown(int number_spaces);
    void moveRight(int number_spaces);
    void moveLeft(int number_spaces);
    void moveUpRight(int number_spaces);
    void moveDownRight(int number_spaces);
    void moveDownLeft(int number_spaces);
    void moveUpLeft (int number_spaces);
    // redirection redirecciona el balón
    void redirection(string &move, Player*& player);
    void redirUp(Player* &player);
    void redirDown(Player* &player);
    void redirRight(Player* &player);
    void redirLeft(Player* &player);
    void redirUpRight(Player* &player);
    void redirDownRight(Player* &player);
    void redirDownLeft(Player* &player);
    void redirUpLeft(Player* &player);
    // Getters y Setters
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
    Team* get_currentTeam();
    void set_currentTeam(Team* currentTeam);

    ~Game();
};

#endif //GAME_H
