#include <iostream>
#include <iomanip>

using namespace std;

int generate_random_number(int array[], int begin){
    int num_random = begin + (rand()%15);
    for (int i = 0; i < 5; i++)
    {
        if (array[i] == num_random)
            {
                return generate_random_number(array,begin);
            }
    }
    return num_random;
}

void generate_matrix(int** &matrix){
    //relleno espacios de matrix
    for (int i = 0; i < 5; i++)
    {
        matrix[i] = new int[5];
    }

    int begin = 1;
    for (int j = 0; j < 5; j++)
    {
        int array[5] = {0,0,0,0,0};
        for (int i = 0; i < 5; i++)
        {
            int num_random = generate_random_number(array, begin);
            array[i] = num_random;
            matrix[i][j] = num_random;
        }    
        begin += 15;
    }
}

int check_columns(int** oficial, int** player){
    int columns_check = 0;
    for (int j = 0; j < 5; j++)
    {
        bool bandera = true;
        for (int i = 0; i < 5; i++)
        {
            if (oficial[i][j] != player[i][j])
            {
                bandera = false;
            }
        }
        if (bandera)
        {
            columns_check += 1;        
        }
        
    }
    return columns_check;
}

void print_matrix(int** matrix){
    cout << " A  B  C  D  E" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout <<setw(2)<< matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int game_mode(){
    int n = 0;
    cout << "Seleccione el modo de juego:" << endl;
    cout << "1. Facil (1 columna completa)" << endl;
    cout << "2. Normal (2 columnas completas)" << endl;
    cout << "3. Dificil (Cartilla completa)" << endl;
    cin >> n;
    return n;
}



int main(){
    srand(time(0));

    int** oficial = new int*[5];
    generate_matrix(oficial);

    int** player = new int*[5];
    generate_matrix(player);
    player[2][2] = 0;


    int columns_coincidence = check_columns(oficial, player);
    int game_mode_ = game_mode();

    cout << "Cartilla Oficial:" << endl;
    print_matrix(oficial);

    cout << endl;

    cout << "Cartilla del Jugador:" << endl;
    print_matrix(player);
    
    switch (game_mode_)
    {
    case 1:
        if (columns_coincidence == 1)
        {
            cout << "Ganaste! Coincidiste con al menos 1 columna completa";
        }
        else
        {
            cout << "Perdiste, no lo lograste" << endl;
        }
        

        break;
    case 2:
        if (columns_coincidence == 2)
        {
            cout << "Ganaste! Coincidiste con al menos 2 columnas completas";
        }
        else
        {
            cout << "Perdiste, no lo lograste" << endl;
        }
        
        
        break;
    case 3:
        if (columns_coincidence == 5)
        {
            cout << "Ganaste! Coincidiste con toda la cartilla";
        }
        else
        {
            cout << "Perdiste, no lo lograste" << endl;
        }
        break;
    }

    delete oficial;
    delete player;


    return 0;
}