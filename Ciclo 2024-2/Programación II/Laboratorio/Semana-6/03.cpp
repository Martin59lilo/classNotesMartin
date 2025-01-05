#include <iostream>
#include <vector>

using namespace std;
const int ROWS = 5;
const int COLS = 5;
char LETTERS[COLS] = {'B','I','N','G','O'};



int **create_card(){
    int **ppM = new int*[ROWS];
    for (int i = 0; i < COLS; i++)
    {
        ppM[i] = new int[COLS];
    }
    return ppM;
}

void fill_card(int **ppM){
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            
        }
        
    }
    
}

int main(){
    vector<int> V;
    for (int i = 0; i < 15; i++)
    {
        V.push_back(i);
    }
    (rand()%15)+1;
    return 0;

}