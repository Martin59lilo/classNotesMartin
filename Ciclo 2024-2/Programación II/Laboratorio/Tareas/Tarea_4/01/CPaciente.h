#ifndef CPACIENTE_H
#define CPACIENTE_H

#include <iostream>
#include <vector>
#include "CMedicamento.h"
#include "CPersona.h"
using namespace std;

class CPaciente: public CPersona
{
private:
    vector<pair<CMedicamento,int>> historialmedico;
public:
    CPaciente();
    CPaciente(string _nombre, string _apellidos, int _edad);
    void imprimirdatos() override;
    void imprimir_historial();
    ~CPaciente();
    vector<pair<CMedicamento,int>> getHistorialmedico();
    void setHistorialmedico( vector<pair<CMedicamento,int>> &historialmedico_);
    
    
};

#endif