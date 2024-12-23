#include "Team.h"


Team::Team(int lado, string _name) {
    // Definimos las posiciones base para los jugadores
    vector<pair<int, int>> posicion = {
        {1, 25}, {18, 5}, {18, 19}, {18, 33}, {18, 47},
        {35, 10}, {35, 25}, {35, 40}, {52, 10}, {52, 25}, {52, 40}
    };

    // Si el equipo es rojo (lado 0), asignamos las posiciones directamente.
    // Si el equipo es azul (lado 1), invertimos las posiciones horizontales de X (120 - X).
    vector<char> letters = (lado == 0) 
        ? vector<char>{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K'} 
        : vector<char>{'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V'};

    // Recorremos la lista de posiciones y asignamos los jugadores a su equipo correspondiente
    for (int i = 0; i < 11; i++) {
        int xPos = posicion[i].second;
        int yPos = posicion[i].first;

        // Si el equipo es azul (lado 1), invertimos la coordenada X
        if (lado == 1) {
            yPos = 120 - yPos;  // Invertimos la X para el equipo azul
        }

        // Validamos que las posiciones estén dentro del campo
        if (yPos >= 0 && yPos < 121 && xPos >= 0 && xPos < 51) {
            Player* pp = new Player(letters[i], xPos, letters[i] == 'J' ? yPos + 6 : yPos);
            players.push_back(pp);
        } else {
            // Si alguna coordenada está fuera de los límites del campo, lanzamos un error
            cout << "ERROR: Posición fuera de los límites del campo para el jugador " << letters[i] << endl;
        }
    }
    this->name = _name;
}

string Team::get_name() const {
    return name;
}
void Team::set_name(const string &name) {
    this->name = name;
}

void Team::set_players( vector<Player *> &players_) {
    this->players = players_;
}

vector<Player*> Team::get_players() {
    return players; 
}

Person Team::get_coach() const {
    return coach;
}

void Team::set_coach(const Person &coach) {
    this->coach = coach;
}

Team::~Team() {
    for (auto p:players) {
        delete p;}
}
