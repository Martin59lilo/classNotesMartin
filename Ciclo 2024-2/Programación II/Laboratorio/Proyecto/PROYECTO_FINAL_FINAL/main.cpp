#include <iostream>
#include "Game.h"
using namespace std;

int main() {
    // Inicializar el juego
    Game game;
    cout << "Bienvenido al TEHKAN WORLD CUP FSR" << endl;

    string flag_init;
    cin >> flag_init;

    while (flag_init != "INIT")
    {
        cout << "Ingrese INIT para inicializar juego" << endl;
        cin >> flag_init;
    }

    // Bucle para procesar comandos
    while (true) {
        
        if (game.get_isGoal())
        {
            break;
        }


        game.print();
        cout << game.get_currentTeam()->get_name()<< ": ";

        vector<string> command;
        for (int i = 0; i < 5; ++i){
            string _tmp;
            cin >> _tmp;
            command.push_back(_tmp);
        }

        game.play(command);
    }
    return 0;
}