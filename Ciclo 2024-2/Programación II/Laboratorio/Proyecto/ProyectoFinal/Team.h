#ifndef TEAM_H
#define TEAM_H
#include <iostream>
#include <vector>
#include "Player.h"
using namespace std;

class Team {
private:
    string name;
    vector<Player*> players;
    Person coach;

public:
    // Constructor
    Team(int lado, string _name);

    //GETTERS Y SETTERS
    string get_name() const;
    void set_name(const string &name);
    void set_players(vector<Player *> &players_);
    vector<Player*> get_players();
    Person get_coach() const;
    void set_coach(const Person &coach);

    virtual ~Team();

};

#endif //TEAM_H
