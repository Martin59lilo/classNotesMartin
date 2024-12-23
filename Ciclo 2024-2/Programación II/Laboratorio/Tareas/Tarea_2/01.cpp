#include <iostream>

using namespace std;

string select_Angel(int* dia, int* mes, int*anio){
    if (*anio % 2 == 0)
    {
        if (*dia % 2 == 0)
        {
            if (*mes == 1 or *mes == 2 or *mes == 3)
            {
                return "Miguel";
            }
            else if (*mes == 4 or *mes == 5 or *mes == 6)
            {
                return "Jofiel";
            }
            else if (*mes == 7 or *mes == 8 or *mes == 9)
            {
                return "Chamuel";
            }
            else
            {
                return "Ariel";
            }
        }
        else
        {
            if (*mes == 1 or *mes == 2 or *mes == 3)
            {
                return "Gabriel";
            }
            else if (*mes == 4 or *mes == 5 or *mes == 6)
            {
                return "Raziel";
            }
            else if (*mes == 7 or *mes == 8 or *mes == 9)
            {
                return "Selatiel";
            }
            else
            {
                return "Jeremiel";
            }
        }   
    }
    else
    {
        if (*dia % 2 == 0)
        {
            if (*mes == 1 or *mes == 2 or *mes == 3)
            {
                return "Rafael";
            }
            else if (*mes == 4 or *mes == 5 or *mes == 6)
            {
                return "Barachiel";
            }
            else if (*mes == 7 or *mes == 8 or *mes == 9)
            {
                return "Zadquiel";
            }
            else
            {
                return "Anael";
            }
        }
        else
        {
            if (*mes == 1 or *mes == 2 or *mes == 3)
            {
                return "Uriel";
            }
            else if (*mes == 4 or *mes == 5 or *mes == 6)
            {
                return "Jehudiel";
            }
            else if (*mes == 7 or *mes == 8 or *mes == 9)
            {
                return "Metatrón";
            }
            else
            {
                return "Azrael";
            }
        }   
    }
}

int main(){
    int dia, mes, anio;
    int* p_dia = &dia;
    int* p_mes = &mes;
    int* p_anio = &anio;
    cout << "Día: ";
    cin >> *p_dia;
    cout << "Mes: ";
    cin >> *p_mes;
    cout << "Anio: ";
    cin >> *p_anio;
    cout << select_Angel(p_dia, p_mes, p_anio);
    return 0;
}