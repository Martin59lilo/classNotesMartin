#ifndef VARIABLES_GLOBALES_H
#define VARIABLES_GLOBALES_H

#include <iomanip>
using namespace std;

string Prendas[4] = {"Polos (jersey)","Camisas (jersey)","Polos (franela)","Camisas (franela)"};

// PESOS (kg) [polo j, camisa j, polo f, camisa f]
const float Pesos[4] = {0.2,0.5,0.5,1.0};

// MATERIA PRIMA (kg_m / kg_h) [polo j, camisa j, polo f, camisa f]
const float MateriaPrima[4] = {0.7,0.7,0.3,0.3};

// VELOCIDAD (kg/h -> h/kg) [polo j, camisa j, polo f, camisa f]
const float V_TEJIDO = 1; const float V_TENIDO = 10; const float V_ACABADO = 20;
const float V_COMUN = (1/V_TEJIDO)+(1/V_TENIDO)+(1/V_ACABADO);
const float V_CON_J = 0.3; const float V_CON_F = 0.5;
const float Velocidad[4] = {V_COMUN+(1/V_CON_J),V_COMUN+(1/V_CON_J),V_COMUN+(1/V_CON_F),V_COMUN+(1/V_CON_F)};

// PRECIOS (soles) [polo j, camisa j, polo f, camisa f]
const float Precios[4] = {30.0,50.0,60.0,80.0};

// COSTOS (soles)
const float Pr_HILO = 10;

// DURACION DE UN DIA (horas)
const float T_DIA = 24;

#endif //VARIABLES_GLOBALES_H