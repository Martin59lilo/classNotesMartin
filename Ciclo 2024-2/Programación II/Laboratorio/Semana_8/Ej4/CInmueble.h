#include <iostream>
using namespace std;

class CInmueble
{
private:
    float area, precio;

public:
    CInmueble(float _area, float _precio);
    CInmueble();
    CInmueble(float _precio);
    ~CInmueble();
    float get_area();
    void set_area(float _area);
    float get_precio();
    void set_precio(float _precio);

};