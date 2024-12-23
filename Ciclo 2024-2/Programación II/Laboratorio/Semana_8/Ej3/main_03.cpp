#include "CAlumno.h"
#include "CProfesor.h"

template<typename T>
void mostrarDatosBasico(T object){
    cout << "Nombre:" << object.getNombre() << endl;
    cout << "Apellido:" << object.getApellido() << endl;
    cout << "Edad: " << object.getEdad() << endl;
}

int main(){
    CAlumno a1;
    a1.setNombre("Maria");
    a1.setApellido("Gonzales");
    a1.setEdad(18);
    CProfesor p1;
    p1.setNombre("Jose");
    p1.setApellido("Fiestas");
    p1.setEdad(40);
    mostrarDatosBasico(a1);
    mostrarDatosBasico(p1);
    return 0;
}