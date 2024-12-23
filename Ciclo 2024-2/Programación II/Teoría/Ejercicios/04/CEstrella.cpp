#include "CEstrella.h"

CEstrella::CEstrella()
{
    pos_x = (rand()%100)/100.0;
    pos_y = (rand()%100)/100.0;
    masa = (rand()%500)/10.0;
    estrella = tipo_estrella();
}


CEstrella::CEstrella(double _masa, double _pos_x, double _pos_y){
    masa = _masa;
    pos_x = _pos_x;
    pos_y = _pos_y;
    estrella = tipo_estrella();
}

CEstrella::~CEstrella()
{
}

string CEstrella::tipo_estrella(){
    if (masa < 0.5)
    {
        return "No_star";
    }
    else if (0.5 <= masa && masa <= 9)
    {
        return "Enana Blanca";
    }
    else if (9 <= masa && masa < 30)
    {
        return "Estrella de Neutrones";
    }
    else
    {
        return "Agujero Negro";
    }
}

