#ifndef CMEDICO_H
#define CMEDICO_H

#include <iostream>
#include "CPersona.h"
#include "CMedicamento.h"
#include "CPaciente.h"

class CMedico: public CPersona
{
private:
    int salario;
public:
    CMedico(/* args */);
    CMedico(string _nombre, string _apellidos, int _edad, int _salario);
    void imprimirdatos() override;
    int getSalario();
    void setSalario(int salario_);
    void recetarMedicamento(CMedico medico, CPaciente &paciente, CMedicamento medicamento, int dosis);
    ~CMedico();
};

#endif