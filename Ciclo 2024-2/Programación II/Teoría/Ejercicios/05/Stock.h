//
// Created by matia on 11/15/2024.
//

#ifndef STOCK_H
#define STOCK_H
#include "Contenedor.h"
#include "Tienda.h"

class Stock: public Contenedor{
public:
    Stock(string nombre);
    void trasladar_producto(Tienda& tienda, int index);
    ~Stock();
};



#endif //STOCK_H
