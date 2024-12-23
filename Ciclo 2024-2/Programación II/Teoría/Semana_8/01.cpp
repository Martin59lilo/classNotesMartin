#include <iostream>
#include <vector>

using namespace std;

class CRectangulo
{
private:
    float largo;
    float ancho;

public:
    CRectangulo(){
        largo = 0;
        ancho = 0;
    }
    CRectangulo(float l, float a){
        largo = l;
        ancho = a;
    }
};

int main(){
    CRectangulo Rec_1(2.3,4.2);
    CRectangulo* ptr_Rec_1 = &Rec_1;
    CRectangulo* Arr_Rect = new CRectangulo[4];
    Arr_Rect[0] = CRectangulo(2.1,4.5);
    Arr_Rect[1] = CRectangulo(7.2,7.5);
    Arr_Rect[2] = CRectangulo(1.1,8.5);
    Arr_Rect[3] = CRectangulo(5.6,7.2);

    vector<CRectangulo> Vector_rectangulos;
    Vector_rectangulos.push_back(CRectangulo(2.67,7.43));

    return 0;
}