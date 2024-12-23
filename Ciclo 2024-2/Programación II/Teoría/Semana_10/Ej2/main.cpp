#include "CUniversidad.h"
#include "CCurso.h"
#include "CAlumno.h"

int main(){
    CUniversidad* UTEC = new CUniversidad("UTEC");
    CAlumno* Jose = new CAlumno("Jose",25);
    CAlumno* Pedro = new CAlumno("Pedro",21);
    CAlumno* Marta = new CAlumno("Marta",20);
    CCurso* Programacion = new CCurso("Programacion");
    CCurso* Optica_Ondas = new CCurso("Optica_Ondas");

    (*UTEC).agregar_alumnos(Jose);
    (*UTEC).agregar_alumnos(Pedro);
    (*UTEC).agregar_alumnos(Marta);
    (*UTEC).imprimir_alumnos();
    (*UTEC).agregar_cursos(Programacion);
    (*UTEC).agregar_cursos(Optica_Ondas);
    (*UTEC).imprimir_cursos();

    delete UTEC;
    delete Jose;
    delete Pedro;
    delete Marta;
    delete Programacion;
    delete Optica_Ondas;

    return 0;
}