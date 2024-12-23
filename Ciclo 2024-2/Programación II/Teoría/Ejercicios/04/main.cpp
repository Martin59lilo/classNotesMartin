#include "CGalaxia.h"

bool colission(CEstrella* &_estrella1, CEstrella* &_estrella2){
    if ((_estrella1->getEstrella() == _estrella2->getEstrella()) && (_estrella1->getEstrella() == "Estrella de Neutrones" || _estrella1->getEstrella() == "Enana Blanca"))
    {
        double distance = 0;
        distance = sqrt(pow(_estrella1->getposX() - _estrella2->getposX(), 2) + pow(_estrella1->getposY() - _estrella2->getposY(), 2));
        return distance < 0.05;
    }
    return false;
}

int main(){
    srand(time(0));
    CGalaxia* via_lactea = new CGalaxia("via_lactea");

    for (int i = 0; i < 1000; i++)
    {
        CEstrella* estrella_new = new CEstrella();
        while (estrella_new->getEstrella() == "No_star")
        {
            estrella_new = new CEstrella();
        }
        via_lactea->agregar_estrella(estrella_new);
    }
    int num_colission = 0;

    for (int i = 1; i < 1000; i++)
    {
        if (via_lactea->estrellasGalaxia()[i] == nullptr)
        {
            continue;
        }
        
        if (colission(via_lactea->estrellasGalaxia()[0],via_lactea->estrellasGalaxia()[i]))
        {
            double new_masa = via_lactea->estrellasGalaxia()[0]->getMasa()+via_lactea->estrellasGalaxia()[i]->getMasa();
            double new_posX = (via_lactea->estrellasGalaxia()[0]->getposX() + via_lactea->estrellasGalaxia()[i]->getposX())/2.0;
            double new_posY = (via_lactea->estrellasGalaxia()[0]->getposY() + via_lactea->estrellasGalaxia()[i]->getposY())/2.0;

            CEstrella *p_new_star = new CEstrella(new_masa,new_posX,new_posY);

            delete via_lactea->estrellasGalaxia()[0];
            via_lactea->estrellasGalaxia()[0] = p_new_star;

            delete via_lactea->estrellasGalaxia()[i];
            via_lactea->estrellasGalaxia()[i] = nullptr;

            num_colission ++;
        }
    }
    
    cout << "La galaxia tiene estas estrellas:" << endl;
    via_lactea->imprimir_galaxia();

    cout << "El numero de colisiones es: " << num_colission << endl;
    // via_lactea->~CGalaxia();
    delete via_lactea;
    return 0;
}


/*
Pasos para realizar la Abstracción
1. Identificar los objetos en el problema a resolver: En este caso, el objeto principal es una galaxia,
   que representa las estrellas involucradas en la simulación de colisión estelar.
2. Identificar propiedades y comportamientos esenciales de un objeto: Las propiedades esenciales de la
   galaxia incluye el conjunto de estrellas que existen en esta galaxia. Así mismo, cada estrella incluyen
   su masa y posición (coordenadas x, y), mientras que su comportamiento principal es agregar una estrella
   resultante de una colisión si se da el caso entre un par de estrellas. De esa manera también se puede
   determinar el tipo de cada estrella en función de su masa y su capacidad de colisionar con otras.
3. Agrupar objetos con las mismas características en clases: Creamos la clase CGalaxia, que encapsula
   objetos de tipo CEstrella tanto las propiedades como los comportamientos de una estrella, siguiendo
   los principios de POO.

Usamos el tipo de relación de composición porque la clase galaxia va a utilizar
objetos de tipo estrella entonces cumpliría con el propósito de esta relación.
Así mismo lo interpretamos como: "Galaxia tiene estrellas" y cumple el propósito
de manejo en el código.
*/