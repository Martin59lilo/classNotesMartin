#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class CEstrella {
private:
    double masa;
    double pos_x;
    double pos_y;
    string tipo;

public:
    CEstrella() {
        pos_x = (rand() % 100) / 100.0;
        pos_y = (rand() % 100) / 100.0;
        masa = (rand() % 500) / 10.0;
        tipo = definir_tipo();
    }

    CEstrella(double _masa, double _pos_x, double _pos_y) {
        masa = _masa;
        pos_x = _pos_x;
        pos_y = _pos_y;
        tipo = definir_tipo();
    }

    ~CEstrella() {}

    string definir_tipo() {
        if (masa < 0.5) {
            return "No se forma la estrella";
        } else if (masa <= 9) {
            return "Enana Blanca";
        } else if (masa < 30) {
            return "Estrella de Neutrones";
        } else {
            return "Agujero Negro";
        }
    }

    double getMasa() const { return masa; }
    double getPosX() const { return pos_x; }
    double getPosY() const { return pos_y; }
    string getTipo() const { return tipo; }

    void setMasa(double nueva_masa) { masa = nueva_masa; }
    void setPosX(double nueva_pos_x) { pos_x = nueva_pos_x; }
    void setPosY(double nueva_pos_y) { pos_y = nueva_pos_y; }
};

class CGalaxia {
private:
    vector<CEstrella*> estrellas;

public:
    CGalaxia() {}

    ~CGalaxia() {
        for (auto estrella : estrellas) {
            delete estrella;
        }
    }

    void agregar_estrella(CEstrella* nueva_estrella) {
        estrellas.push_back(nueva_estrella);
    }

    void imprimir_galaxia() {
        for (size_t i = 0; i < estrellas.size(); ++i) {
            if (estrellas[i] != nullptr) {
                cout << "Estrella " << i + 1 << ": Masa = " << estrellas[i]->getMasa() 
                     << ", Posición = (" << estrellas[i]->getPosX() << ", " 
                     << estrellas[i]->getPosY() << "), Tipo = " << estrellas[i]->getTipo() << endl;
            }
        }
    }

    vector<CEstrella*> getEstrellas() {
        return estrellas;
    }

    void eliminar_estrella(size_t index) {
        delete estrellas[index];
        estrellas[index] = nullptr;
    }
};

bool colision(CEstrella* estrella1, CEstrella* estrella2) {
    if ((estrella1->getTipo() == estrella2->getTipo()) &&
        (estrella1->getTipo() == "Enana Blanca" || estrella1->getTipo() == "Estrella de Neutrones")) {
        double distancia = sqrt(pow(estrella1->getPosX() - estrella2->getPosX(), 2) +
                                pow(estrella1->getPosY() - estrella2->getPosY(), 2));
        return distancia < 0.05;
    }
    return false;
}

int main() {
    srand(time(0));
    CGalaxia* via_lactea = new CGalaxia();

    // Agregar 1000 estrellas a la galaxia
    for (int i = 0; i < 1000; i++) {
        CEstrella* estrella_nueva = new CEstrella();
        via_lactea->agregar_estrella(estrella_nueva);
    }

    int num_colisiones = 0;

    // Simulación de colisiones
    vector<CEstrella*> estrellas = via_lactea->getEstrellas();
    for (size_t i = 0; i < estrellas.size(); ++i) {
        if (estrellas[i] == nullptr) continue;
        for (size_t j = i + 1; j < estrellas.size(); ++j) {
            if (estrellas[j] == nullptr) continue;

            if (colision(estrellas[i], estrellas[j])) {
                // Sumar masas y crear nueva estrella
                double nueva_masa = estrellas[i]->getMasa() + estrellas[j]->getMasa();
                double nueva_pos_x = (estrellas[i]->getPosX() + estrellas[j]->getPosX()) / 2.0;
                double nueva_pos_y = (estrellas[i]->getPosY() + estrellas[j]->getPosY()) / 2.0;
                
                CEstrella* nueva_estrella = new CEstrella(nueva_masa, nueva_pos_x, nueva_pos_y);
                delete estrellas[i];
                estrellas[i] = nueva_estrella;
                
                // Eliminar la estrella colisionada
                via_lactea->eliminar_estrella(j);
                num_colisiones++;
            }
        }
    }

    // Imprimir resultados
    cout << "La galaxia tiene estas estrellas tras la simulación de colisiones:" << endl;
    via_lactea->imprimir_galaxia();

    cout << "El número total de colisiones fue: " << num_colisiones << endl;

    // Liberar memoria
    delete via_lactea;

    return 0;
}
