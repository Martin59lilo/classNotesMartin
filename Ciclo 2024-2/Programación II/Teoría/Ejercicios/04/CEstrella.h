#include <iostream>
#include <cmath>
using namespace std;

class CEstrella
{
private:
    double masa;
    double pos_x;
    double pos_y;
    string estrella;
public:
    CEstrella();
    CEstrella(double _masa, double _pos_x, double _pos_y);
    ~CEstrella();
    string tipo_estrella();

    double getposX() const { return pos_x; }
    void setPosX(double posX) { pos_x = posX; }

    double getposY() const { return pos_y; }
    void setPosY(double posY) { pos_y = posY; }

    string getEstrella() const { return estrella; }
    void setEstrella(const string &estrella_) { estrella = estrella_; }

    double getMasa() const { return masa; }
    void setMasa(double masa_) { masa = masa_; }
};
