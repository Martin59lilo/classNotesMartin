#include <iostream>

using namespace std;

void pedir_Valores(string &area, int &anios_exp, string &niv_cert){
    cout << "Area: ";
    cin >> area;
    cout << "Anios de experiencia: ";
    cin >> anios_exp;
    cout << "Nivel de certificacion: ";
    cin >> niv_cert;
 
}
int validation(int anios_exp, string niv_cert){
    if (anios_exp < 0 or anios_exp > 50 and (niv_cert != "Bajo" or niv_cert != "Medio" or niv_cert != "Alto"))
    {
        return false;
    }
    return true;
}

void turn_asigned(string &area, int &anios_exp, string &niv_cert){
        if (area == "Emergencias")
        {
            if (anios_exp < 3 and niv_cert == "Alto")
            {
                cout << "Turno asginado: Tarde";
                cout << "Responsabilidad: Supervisor";
            }else if (3 <= anios_exp <= 5 and niv_cert == "Medio")
            {
                cout << "Turno asignado: Tarde" << endl;
                cout << "Responsabilidad: Auxiliar"<< endl;
            }
            else
            {
                cout << "No se encontró";
            }        
        }
        if (area == "UCI")
        {
            if (anios_exp < 3 and niv_cert == "Alto")
            {
                cout << "Turno asignado: Manana" << endl;
                cout << "Responsabilidad: Supervisor" << endl;
            }else if (anios_exp> 5 and niv_cert == "Bajo")
            {
                cout << "Turno asginado: Noche" << endl;
                cout << "Responsabilidad: Auxiliar" << endl;
            }
            else
            {
                cout << "No se encontró";
            }        
        }
        if (area == "Pediatría")
        {
            if (3 <= anios_exp <= 5 and niv_cert == "Bajo")
            {
                cout << "Turno asignado: Manana" << endl;
                cout << "Responsabilidad: Asistente" << endl;
            }else if (anios_exp> 5 and niv_cert == "Alto")
            {
                cout << "Turno asginado: Tarde" << endl;
                cout << "Responsabilidad: Supervisor" << endl;
            }
            else
            {
                cout << "No se encontró";
            }        
        }
    }

int main(){
    string area = "", niv_cert = "";
    int anios_exp = 0;
    pedir_Valores(area, anios_exp, niv_cert);
    if (validation(anios_exp,niv_cert))
    {
        turn_asigned(area, anios_exp,niv_cert);
    }
    else
    {
        cout << "No se encontró";
    }
    
    ;
    return 0;
}
