#include "Game.h"

Game::Game(){
    posYball = 60;
    posXball = 25;
    redTeam = new Team(0,"redTeam");
    blueTeam = new Team(1,"blueTeam");
    soccerField = SoccerField();
    current_team = redTeam;
}

// Metodo prinicipal
void Game::play() {
    init();
    // Impresión inicial de la cancha
    print();
    while (true) {
        // Capturar comandos
        take_commands();
        // Realizar acciones
        Player* player = nullptr;
        for (int i = 0; i < 11; i++)
            if (commands[0][0] == current_team->get_players()[i]->get_letter())
                player = current_team->get_players()[i];
        if (check_number_spaces(commands[2], commands[3])) {
            actions(commands[1], commands[2], commands[3], player);
        }
        else
            continue;
        team_action(player);
        // Imprimir la cancha
        print();
        // Verificar gol
        if (check_goal())
            break;
        // Cambiar turno
        change_turn();
    }
}

// Acciones principales
void Game::init() {
    cout << "Bienvenido al TEHKAN WORLD CUP FSR" << endl;
    string flag_init;
    do {
        cout << "Ingrese INIT para inicializar juego" << endl;
        cin >> flag_init;
    } while (flag_init != "INIT");
}
void Game::take_commands() {
    cout << current_team->get_name() << ": ";
    for (int i = 0; i < 5; ++i){
        string _tmp;
        cin >> _tmp;
        this->commands.push_back(_tmp);
    }
}
void Game::actions(string& Action, string& Choice, string& NumberSpaces, Player* player) {
    if (Choice == "PLAYER"){
        // Hay dos opciones: que el jugador esté con la pelota (o cerca) y, por lo tanto, se muevan juntos.
        if (abs(player->get_pos_x()-posXball) <= 2 && abs(player->get_pos_y()-posYball) <= 2) {
            movement_p(Action, player, stoi(NumberSpaces));
            redirection(Action, player);
        }
        // O que el jugador esté sin pelota.
        else {
            movement_p(Action, player, stoi(NumberSpaces));
        }
    }
    else{
        // Si la pelota está cerca del jugador (en un radio de 2 casillas), se podrá patear el balón
        if (abs(player->get_pos_x()-posXball) <= 2 && abs(player->get_pos_y()-posYball) <= 2) {
            movement_b(Action, player, stoi(NumberSpaces));
        }
        else {
            cout << "ERROR" << endl;
        }
    }
}
void Game::team_action(Player* player) {
    for (int i = 1; i < 11; i++) {
        if (player != current_team->get_players()[i]) {
            if (commands[4] == "RIGHT")
                current_team->get_players()[i]->set_pos_y(current_team->get_players()[i]->get_pos_y()+4);
            else if (commands[4] == "LEFT")
                current_team->get_players()[i]->set_pos_y(current_team->get_players()[i]->get_pos_y()-4);
        }
    }
}
void Game::print() {
    // Dimensiones del campo
    int ROWS = soccerField.get_rows();
    int COLS = soccerField.get_cols();

    // Crear e inicializar la matriz
    string** matrix_print = new string*[ROWS];

    // ESPACIOS POR DEFECTO
    for (int i = 0; i < ROWS; i++) {
        matrix_print[i] = new string[COLS];
        for (int j = 0; j < COLS; j++)
            matrix_print[i][j] = " ";
    }

    // LINEA SUPERIOR ARCO
    for (int j = 0; j < 10; j++) {
        matrix_print[12][j] = "#";
        matrix_print[12][120-j] = "#";
    }
    // LÍNEA INFERIOR ARCO
    for (int j = 0; j < 10; j++) {
        matrix_print[38][j] = "#";
        matrix_print[38][120-j] = "#";
    }

    // LÍNEA QUE UNE SUPERIOR INFERIOR ARCO
    for (int i = 0; i < 25; i++) {
        matrix_print[13+i][9] = "#";
        matrix_print[13+i][120-9] = "#";
    }

    // LÍNEA SUPERIOR MEDIA ARCO
    for (int j = 0; j < 5; j++) {
        matrix_print[19][j] = "#";
        matrix_print[19][120-j] = "#";
    }

    // LÍNEA INFERIOR MEDIA ARCO
    for (int j = 0; j < 5; j++) {
        matrix_print[31][j] = "#";
        matrix_print[31][120-j] = "#";
    }

    // LÍNEA QUE UNA SUPERIOR INFERIOR MEDIA ARCO
    for (int i = 0; i < 11; i++) {
        matrix_print[20+i][4] = "#";
        matrix_print[20+i][120-4] = "#";
    }

    // Agregar jugadores rojos
    for (auto player : redTeam->get_players()) {
        int posY = player->get_pos_y();
        int posX = player->get_pos_x();
        // Verificar que las posiciones estén dentro del campo
        if (posX >= 0 && posX < ROWS && posY >= 0 && posY < COLS)
            matrix_print[posX][posY] = string(1, player->get_letter());
    }
    // Agregar jugadore azules
    for (auto player : blueTeam->get_players()) {
        int posY = player->get_pos_y();
        int posX = player->get_pos_x();
        if (posX >= 0 && posX < ROWS && posY >= 0 && posY < COLS)
            matrix_print[posX][posY] = string(1, player->get_letter());
    }

    // Agregar la pelota
    matrix_print[posXball][posYball] = "X";

    // Imprimir el campo

    for (int i = 0; i < COLS+2; i++)
        cout << " - ";
    cout << endl;

    for (int i = 0; i < ROWS; i++) {
        cout << "| ";
        // Imprime la matriz
        for (int j = 0; j < COLS; j++)
                cout << " "<< matrix_print[i][j] << " ";
        cout << " |" << endl;
    }

    for (int i = 0; i < COLS +2; i++)
            cout << " - ";
    cout << endl;

    // Liberar memoria
    for (int i = 0; i < ROWS; i++)
        delete[] matrix_print[i];
    delete[] matrix_print;
}
bool Game::check_goal() {
    if (posXball >= 20 and posXball <=30) {
        if ((posYball >= 117 and posYball <= 120) or (posYball >=0 and posYball <= 3)){
            cout << "CULMINO EL JUEGO" << endl;
            cout << "Ganador: " << current_team->get_name();
            return true;
        }
    }
    return false;   
}
void Game::change_turn() {
    current_team = current_team==redTeam ? blueTeam : redTeam;
}

// Acciones secundarias

// Metodo para verificar el numero de espacios a recorrer
bool Game::check_number_spaces(string& Choice, string& NumberSpaces) {
    int number_spaces = stoi(NumberSpaces);
    if (Choice == "PLAYER") {
        if (number_spaces < 0 || number_spaces > 10) {
            cout << "Mal movimiento [RANGO: 0-10]" << endl;
            return false;
        }
    }
    else if (Choice == "BALL") {
        if (number_spaces < 0 || number_spaces > 40) {
            cout << "Mal movimiento [RANGO: 0-40]" << endl;
            return false;
        }
    }
    return true;
}

// Función que verifica cuál movimiento debe hacer el jugador
void Game::movement_p(string& move, Player* &player, int number_spaces){
    if (move == "UP"){
        player->moveUp(number_spaces);
    }
    else if (move == "DOWN") {
        player->moveDown(number_spaces);
    }
    else if (move == "RIGHT") {
        player->moveRight(number_spaces);
    }
    else if (move == "LEFT") {
        player->moveLeft(number_spaces);
    }
    else if (move == "UP-RIGHT") {
        player->moveUpRight(number_spaces);
    }
    else if (move == "DOWN-RIGHT") {
        player->moveDownRight(number_spaces);
    }
    else if (move == "DOWN-LEFT") {
        player->moveDownLeft(number_spaces);
    }
    else if (move == "UP-LEFT") {
        player->moveUpLeft(number_spaces);
    }
}

// Funcion para validar cuál movimiento debe hacer la pelota.
void Game::movement_b(string& move, Player* &player, int number_spaces){
  // Dentro de cada condicional se redireccion la pelota antes de moverla.
  // Ej: Si la pelota está a la derecha del jugador a 2 casillas, pero el usuario ingresa que
  // desea mover la pelota para arriba, entonces lo que se hace es poner la pelota justo arriba del
  // jugador y luego moverla la cantidad de casillas ingresada.
  if (move == "UP"){
      redirUp(player);
      moveUp(number_spaces);
  }else if (move == "DOWN") {
      	redirDown(player);
        moveDown(number_spaces);
    }else if (move == "RIGHT") {
        redirRight(player);
        moveRight(number_spaces);
        }else if (move == "LEFT") {
      	    redirLeft(player);
            moveLeft(number_spaces);
            }else if (move == "UP-RIGHT") {
      	        redirUpRight(player);
                moveUpRight(number_spaces);
                }else if (move == "DOWN-RIGHT") {
                    redirDownRight(player);
                    moveDownRight(number_spaces);
                    }else if (move == "DOWN-LEFT") {
      	                redirDownLeft(player);
                        moveDownLeft(number_spaces);
                        }else if (move == "UP-LEFT") {
    	                    redirUpLeft(player);
                            moveUpLeft(number_spaces);}
}
void Game::moveUp(int number_spaces){
    posXball -= number_spaces;
}
void Game::moveDown(int number_spaces){
    posXball += number_spaces;
}
void Game::moveRight (int number_spaces){
    posYball += number_spaces;
}
void Game::moveLeft(int number_spaces){
    posYball -= number_spaces;
}
void Game::moveUpRight(int number_spaces){
    posYball += number_spaces;
    posXball -= number_spaces;
}
void Game::moveDownRight(int number_spaces){
    posYball += number_spaces;
    posXball += number_spaces;
}
void Game::moveDownLeft(int number_spaces){
    posYball -= number_spaces;
    posXball += number_spaces;
}
void Game::moveUpLeft (int number_spaces){
    posYball -= number_spaces;
    posXball -= number_spaces;
}

// Funcion para verificar cuál redirección tendrá el balón
void Game::redirection(string& move, Player* &player){
    if (move == "UP")
        redirUp(player);
    else if (move == "DOWN")
        redirDown(player);
    else if (move == "RIGHT")
        redirRight(player);
    else if (move == "LEFT")
        redirLeft(player);
    else if (move == "UP-RIGHT")
        redirUpRight(player);
    else if (move == "DOWN-RIGHT")
        redirDownRight(player);
    else if (move == "DOWN-LEFT")
        redirDownLeft(player);
    else if (move == "UP-LEFT")
        redirUpLeft(player);
}
void Game::redirUp(Player* &player){
    posYball = player->get_pos_y();
    posXball = player->get_pos_x() - 1;
}
void Game::redirDown(Player* &player){
    posYball = player->get_pos_y();
    posXball = player->get_pos_x() + 1;
}
void Game::redirRight(Player* &player){
    posYball = player->get_pos_y() + 1;
    posXball = player->get_pos_x();
}
void Game::redirLeft(Player* &player){
    posYball = player->get_pos_y() - 1;
    posXball = player->get_pos_x();
}
void Game::redirUpRight(Player* &player){
    posYball = player->get_pos_y() + 1;
    posXball = player->get_pos_x() - 1;
}
void Game::redirDownRight(Player* &player){
    posYball = player->get_pos_y() + 1;
    posXball = player->get_pos_x() + 1;
}
void Game::redirDownLeft(Player* &player){
    posYball = player->get_pos_y() - 1;
    posXball = player->get_pos_x() + 1;
}
void Game::redirUpLeft(Player* &player){
    posYball = player->get_pos_y() - 1;
    posXball = player->get_pos_x() - 1;
}

// Función para imprimir el tablero


// Getters y Setters
SoccerField Game::get_soccer_field() const {
    return soccerField;
}
void Game::set_soccer_field(const SoccerField &soccer_field) {
    soccerField = soccer_field;
}
Team * Game::get_red_team() const {
    return redTeam;
}
void Game::set_red_team(Team *red_team) {
    redTeam = red_team;
}
Team * Game::get_blue_team() const {
    return blueTeam;
}
void Game::set_blue_team(Team *blue_team) {
    blueTeam = blue_team;
}
int Game::get_pos_xball() const {
    return posXball;
}
void Game::set_pos_xball(int pos_xball) {
    posXball = pos_xball;
}
int Game::get_pos_yball() const {
    return posYball;
}
void Game::set_pos_yball(int pos_yball) {
    posYball = pos_yball;
}
Team* Game::get_currentTeam()  {
    return current_team; 
}
void Game::set_currentTeam(Team* currentTeam) {
    current_team = currentTeam; 
}

// Destructor
Game::~Game() {
    delete redTeam;
    delete blueTeam;
}