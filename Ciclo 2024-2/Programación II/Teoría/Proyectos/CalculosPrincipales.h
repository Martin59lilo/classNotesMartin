#ifndef CÁLCULOS_PRINCIPALES_H
#define CÁLCULOS_PRINCIPALES_H

#include <iostream>
#include <vector>
#include "CalculosSecundarios.h"
#include "VariablesGlobales.h"
using namespace std;

void calcularPedido(vector<float> &cantidades) {
    pedirCantidades(cantidades);
    vector<vector<float> > calculos = operar(cantidades);
    imprimir(calculos[0],calculos[1],calculos[2]);}

void CalcularFechaDeEntrega(vector<float> &CantPrendas) {
    vector cantidad_dias(4, 0);
    vector<float> tiempos(4, 0);
    for(int i = 0; i < 4; ++i)
        tiempos[i] = (CantPrendas[i]*Pesos[i]) * Velocidad[i];
    calcularDias(tiempos,cantidad_dias);
    calcularFechas(cantidad_dias);}

void calcularUnidad(string tipo) {
    if (tipo=="tiempo") {
        cout <<"TIEMPO POR UNIDAD"<<endl;
        for(int i=0; i<4; i++)
            cout<<"* "<<Prendas[i]<<": "<<(1*Pesos[i])*Velocidad[i]<<" horas"<<endl;}
    else if (tipo=="ganancia") {
        cout <<"GANANCIAS POR UNIDAD"<<endl;
        for(int i=0; i<4; i++)
            cout<<"* "<<Prendas[i]<<": "<<((Precios[i]-(Pesos[i]*Pr_HILO/MateriaPrima[i]))*1)<<" soles"<<endl;}
    cout <<endl;}

void mostrarMenu(int& opcion, vector<float> &CantPrendas) {
    cout <<"MENU" << endl;
    cout << "1. Realizar pedido" << endl;
    cout << "2. Ver fechas de entregas" << endl;
    cout << "3. Ganancia por unidad" << endl;
    cout << "4. Tiempo por unidad" << endl;
    cout << "0. Salir" << endl;
    cout << "Escoge una opcion: ";
    cin >> opcion;
    cout <<endl;
    switch (opcion){
        case 1:
            calcularPedido(CantPrendas);
            break;
        case 2:
            CalcularFechaDeEntrega(CantPrendas);
            break;
        case 3:
            calcularUnidad("ganancia");
            break;
        case 4:
            calcularUnidad("tiempo");
            break;
        case 0:
            cout <<"Gracias por visitar a PEDIDOS MMC"; cout<<endl;
            break;
        default:
            cout <<"Ingresa una opcion valida"<<endl; cout<<endl;
            break;}}

#endif //CÁLCULOS_PRINCIPALES_H