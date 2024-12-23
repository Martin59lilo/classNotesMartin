#include "Game.h"

Game::Game(){
    posYball = 60;
    posXball = 25;
    redTeam = new Team(0,"redTeam");
    blueTeam = new Team(1,"blueTeam");
    soccerField = SoccerField();
    current_team = redTeam;
    is_goal = false;
}

void Game::play(vector<string> commands) {
    // SELECT PLAYER
    Player* player = nullptr;
    for (int i = 0; i < 11; i++)
    {
        if (commands[0][0] == current_team->get_players()[i]->get_letter())
        {
            player = current_team->get_players()[i];
        }
    }

    // ACTION
    if (commands[2] == "PLAYER"){
      // Hay dos opciones: que el jugador esté con la pelota (o cerca) y, por lo tanto, se muevan juntos.
      if (abs(player->get_pos_x()-posXball) <= 2 && abs(player->get_pos_y()-posYball) <= 2) {
        	movement_p(commands[1], player, stoi(commands[3]));
            redirection(commands[1], player);
        }
      // O que el jugador esté sin pelota.
      else {
          movement_p(commands[1], player, stoi(commands[3]));
      }
    }
    else{
    	// Si la pelota está cerca del jugador (en un radio de 2 casillas), se podrá patear el balón
        if (abs(player->get_pos_x()-posXball) <= 2 && abs(player->get_pos_y()-posYball) <= 2) {
            movement_b(commands[1], player, stoi(commands[3]));
        }
        else {
          cout << "ERROR" << endl;
        }
    }

    // TEAM ACTION
    for (int i = 1; i < 11; i++)
    {
        if (player != current_team->get_players()[i])
        {
            if (commands[4] == "RIGHT")
            {
                current_team->get_players()[i]->set_pos_y(current_team->get_players()[i]->get_pos_y()+4);
            }
            else if (commands[4] == "LEFT")
            {
                current_team->get_players()[i]->set_pos_y(current_team->get_players()[i]->get_pos_y()-4);
            }
        }
    }

    // CHECKGOAL
    if (checkball())
    {
        cout << "CULMINO EL JUEGO" << endl;
        cout << "Ganador: " << current_team->get_name();
        this->is_goal = true;
    }
    
    // CAMBIO DE EQUIPO ACTUAL Y TURNO
    if (current_team == redTeam) {
    current_team = blueTeam;
    } else {
    current_team = redTeam;
    }
}

bool Game::checkball(){
    if (posXball >= 20 and posXball <=30)
    {
        if ((posYball >= 117 and posYball <= 120) or (posYball >=0 and posYball <= 3))
        {
            return true;
        }
    }
    return false;   
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
//
// Funcion para validar cuál movimiento debe hacer la pelota.
void Game::movement_b(string& move, Player* &player, int number_spaces){
  // Dentro de cada condicional se redireccion la pelota antes de moverla.
  // Ej: Si la pelota está a la derecha del jugador a 2 casillas, pero el usuario ingresa que
  // desea mover la pelota para arriba, entonces lo que se hace es poner la pelota justo arriba del
  // jugador y luego moverla la cantidad de casillas ingresada.
  if (move == "UP"){
    	redirUp(player);
        moveUp(number_spaces);
    }
    else if (move == "DOWN") {
      	redirDown(player);
        moveDown(number_spaces);
    }
    else if (move == "RIGHT") {
      	redirRight(player);
        moveRight(number_spaces);
    }
    else if (move == "LEFT") {
      	redirLeft(player);
        moveLeft(number_spaces);
    }
    else if (move == "UP-RIGHT") {
      	redirUpRight(player);
        moveUpRight(number_spaces);
    }
    else if (move == "DOWN-RIGHT") {
      	redirDownRight(player);
        moveDownRight(number_spaces);
    }
    else if (move == "DOWN-LEFT") {
      	redirDownLeft(player);
        moveDownLeft(number_spaces);
    }
    else if (move == "UP-LEFT") {
    	redirUpLeft(player);
        moveUpLeft(number_spaces);
    }
}
//
// Funcion para verificar cuál redirección tendrá el balón
void Game::redirection(string& move, Player* &player){
    if (move == "UP"){
        redirUp(player);
    }
    else if (move == "DOWN") {
        redirDown(player);
    }
    else if (move == "RIGHT") {
        redirRight(player);
    }
    else if (move == "LEFT") {
        redirLeft(player);
    }
    else if (move == "UP-RIGHT") {
        redirUpRight(player);
    }
    else if (move == "DOWN-RIGHT") {
        redirDownRight(player);
    }
    else if (move == "DOWN-LEFT") {
        redirDownLeft(player);
    }
    else if (move == "UP-LEFT") {
        redirUpLeft(player);
    }
}

// Funciones movimiento de la pelota
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

// Funciones para redireccionar el balón
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
//

// FUNCIÓN PARA IMPRESIÓN DEL TABLERO
void Game::print() {
    // Dimensiones del campo
    int ROWS = soccerField.get_rows();
    int COLS = soccerField.get_cols();

    // Crear e inicializar la matriz
    string** matrix_print = new string*[ROWS];
    
    // ESPACIOS POR DEFECTO
    for (int i = 0; i < ROWS; i++) {
    matrix_print[i] = new string[COLS];
    for (int j = 0; j < COLS; j++) {
        matrix_print[i][j] = " ";
        }
    }

    // LINEA SUPERIOR ARCO
    for (int j = 0; j < 10; j++)
    {
        matrix_print[12][j] = "#";
        matrix_print[12][120-j] = "#";
    }
    // LÍNEA INFERIOR ARCO
    for (int j = 0; j < 10; j++)
    {
        matrix_print[38][j] = "#";
        matrix_print[38][120-j] = "#";
    }
    
    // LÍNEA QUE UNE SUPERIOR INFERIOR ARCO
    for (int i = 0; i < 25; i++)
    {
        matrix_print[13+i][9] = "#";
        matrix_print[13+i][120-9] = "#";
    }

    // LÍNEA SUPERIOR MEDIA ARCO
    for (int j = 0; j < 5; j++)
    {
        matrix_print[19][j] = "#";
        matrix_print[19][120-j] = "#";
    }
    
    // LÍNEA INFERIOR MEDIA ARCO
    for (int j = 0; j < 5; j++)
    {
        matrix_print[31][j] = "#";
        matrix_print[31][120-j] = "#";
    }
    
    // LÍNEA QUE UNA SUPERIOR INFERIOR MEDIA ARCO
    for (int i = 0; i < 11; i++)
    {
        matrix_print[20+i][4] = "#";
        matrix_print[20+i][120-4] = "#";
    }
    
    // Agregar jugadores rojos
    for (auto player : redTeam->get_players()) {
        int posY = player->get_pos_y();
        int posX = player->get_pos_x();
        // Verificar que las posiciones estén dentro del campo
        if (posX >= 0 && posX < ROWS && posY >= 0 && posY < COLS) {
            matrix_print[posX][posY] = string(1, player->get_letter());
        }

    }    
    // Agregar jugadore azules
    for (auto player : blueTeam->get_players()) {
        int posY = player->get_pos_y();
        int posX = player->get_pos_x();
        if (posX >= 0 && posX < ROWS && posY >= 0 && posY < COLS) {
            matrix_print[posX][posY] = string(1, player->get_letter());
        }
    }

    // Agregar la pelota
    matrix_print[posXball][posYball] = "X";

    // Imprimir el campo

    for (int i = 0; i < COLS+2; i++){
        cout << " - ";
    }
    cout << endl;
    
    for (int i = 0; i < ROWS; i++) {
        cout << "| ";

        // Imprime la matriz
        for (int j = 0; j < COLS; j++) {
                cout << " "<< matrix_print[i][j] << " ";
        }
        cout << " |";
        cout << endl;
    }

    for (int i = 0; i < COLS +2; i++){
            cout << " - ";
    }
    cout << endl;

    // Liberar memoria
    for (int i = 0; i < ROWS; i++) {
        delete[] matrix_print[i];
    }

    delete[] matrix_print;
}



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

bool Game::get_isGoal() {
    return is_goal; 
}

void Game::set_isGoal(bool isGoal) {
    is_goal = isGoal; 
}

Team* Game::get_currentTeam()  {
    return current_team; 
}

void Game::set_currentTeam(Team* currentTeam) {
    current_team = currentTeam; 
}

Game::~Game() {
    delete redTeam;
    delete blueTeam;
}