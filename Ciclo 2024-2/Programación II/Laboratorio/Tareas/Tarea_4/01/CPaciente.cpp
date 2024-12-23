#include "CPaciente.h"

CPaciente::CPaciente(/* args */)
{
}

CPaciente::CPaciente(string _nombre, string _apellidos, int _edad):CPersona(_nombre,_apellidos,_edad){}

void CPaciente::imprimirdatos(){
    cout << "Datos del Paciente:" << endl,
    CPersona::imprimirdatos();
    imprimir_historial();
}

void CPaciente::imprimir_historial(){
    cout << "Historial médico: " << endl;
    for (auto &&i : historialmedico)
    {
        cout << "-" << i.first.getNombre() << "(" << i.second << " unidades)"<<endl;;
    }
}

vector<pair<CMedicamento,int>> CPaciente::getHistorialmedico()  { return historialmedico; }
void CPaciente::setHistorialmedico( vector<pair<CMedicamento,int>> &historialmedico_) { historialmedico = historialmedico_; }

CPaciente::~CPaciente()
{   
}
