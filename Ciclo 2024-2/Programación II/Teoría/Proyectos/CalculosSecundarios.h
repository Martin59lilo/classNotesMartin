#ifndef CÁLCULOS_SECUNDARIOS_H
#define CÁLCULOS_SECUNDARIOS_H
#include "VariablesGlobales.h"

#include <iostream>
#include <vector>
using namespace std;

void pedirCantidades(vector<float> &v) {
    cout <<"CANTIDADES"<<endl;
    for (int i=0; i<4; i++) {
        do {
            cout<<Prendas[i]<<": ";
            cin>>v[i];
            if (v[i]<0) cout<<"Ingresa un numero no negativo"<<endl;
        } while (v[i]<0);}
    cout << endl;}

vector<vector<float>> operar(vector<float>& cantidades) {
    // 0. Vector 2D de 3 filas y 4 columnas. Cada columna es el calculo de cada prenda.
    vector<vector<float> > calculos(3, vector<float>(4, 0)); // {TiemposPrendas[],MateriaprimaPrendas[],GananciasPrendas[]}
    // 1. Cálculos para fila 0, es decir, TiemposPrendas[]
    for(int col=0; col<4; col++) {
        calculos[0][col] = (cantidades[col]*Pesos[col]) * Velocidad[col];}
    // 2. Cálculos para fila 1, es decir, MateriaprimaPrendas[]
    for(int col=0; col<4; col++) {
        calculos[1][col] = (cantidades[col]*Pesos[col]) / MateriaPrima[col];}
    // 3. Cálculos para fila 2, es decir, GananciasPrendas[]
    for(int col=0; col<4; col++) {
        calculos[2][col] = (Precios[col] - (Pesos[col]*Pr_HILO/MateriaPrima[col])) * cantidades[col];}
    return calculos;}

float total(vector<float>& v) {
    return v[0]+v[1]+v[2]+v[3];}

void imprimir(vector<float>& tiempos, vector<float>& materiaprima, vector<float>& ganancias) {
    cout <<"RESULTADOS"<<endl;
    cout <<"* El tiempo total de produccion requerido para el pedido es " << total(tiempos) << " horas" << endl;
    cout <<"* La cantidad de materia prima necesaria para cumplir el pedido es " << total(materiaprima) << " kg de hilo" << endl;
    cout <<"* Las ganancias esperadas por tipo de tela son " << total(ganancias) << " soles" << endl;
    cout <<endl;}

void calcularDias(vector<float> &tiempos, vector<int> &cant_dias) {
    int length_tiempos = tiempos.size();
    for (int i = 0; i < length_tiempos; ++i)
        cant_dias[i] = tiempos[i] / T_DIA;}

void calcularFechas(vector<int> &cant_dias) {
    cout <<"FECHAS DE ENTREGA"<<endl;
    int length_cant_dias = cant_dias.size();
    int dia = 18, mes = 10, anno = 2024; int d = 0, m = 0, a = 0;
    for (int i = 0; i < length_cant_dias; ++i){
        d = (cant_dias[i]) % 30;
        m = (cant_dias[i]) / 30;
        if (dia + d > 30) {
            m += (dia + d) / 30;
            d = (dia + d) % 30 - dia;
        }
        if (mes + m > 12) {
            a = (mes +m)/12;
            m = (mes + m) % 12 - mes;
        }
        cout <<"* "<<Prendas[i]<< ": "<<dia+d<< "/"<<mes+m<<"/"<<anno+a<< endl;}
    cout << endl;}

#endif //CÁLCULOS_SECUNDARIOS_H