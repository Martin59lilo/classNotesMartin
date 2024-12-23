#include "CMedico.h"

CMedico::CMedico(/* args */)
{
}

CMedico::CMedico(string _nombre, string _apellidos, int _edad, int _salario):CPersona(_nombre,_apellidos,_edad), salario(_salario){}

void CMedico::imprimirdatos(){
    cout << "Datos del Medico:" << endl;
    CPersona::imprimirdatos();
    cout << "Salario: " << salario << endl;
}

void CMedico::recetarMedicamento(CMedico medico, CPaciente &paciente, CMedicamento medicamento, int dosis){
    vector<pair<CMedicamento,int>> new_historial_med = paciente.getHistorialmedico();
    new_historial_med.push_back(make_pair(medicamento,dosis));
    paciente.setHistorialmedico(new_historial_med);
    cout << "Receta exitosa para " << paciente.getNombre() << endl;
}

int CMedico::getSalario() { return salario; }
void CMedico::setSalario(int salario_) { salario = salario_; }



CMedico::~CMedico()
{
}