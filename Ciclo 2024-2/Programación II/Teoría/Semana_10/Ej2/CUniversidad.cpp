#include "CUniversidad.h"

CUniversidad::CUniversidad(/* args */)
{
}

CUniversidad::CUniversidad(string _nombre){
    nombre = _nombre;
}

void CUniversidad::agregar_alumnos(CAlumno* _alumno){
    alumnos.emplace_back(_alumno);
}

void CUniversidad::imprimir_alumnos(){
    for (auto &&i : alumnos)
    {
        cout << (*i).getNombre() << ", " << (*i).getEdad() << endl;
    }
}

void CUniversidad::agregar_cursos(CCurso* _curso){
    cursos.emplace_back(_curso);
}

void CUniversidad::imprimir_cursos(){
    for (auto &&i : cursos)
    {
        cout << "El curso " << (*i).getNombre() << " tiene " << (*i).getCreditos() << " créditos" << endl;
    }
    
}

CUniversidad::~CUniversidad()
{
}
