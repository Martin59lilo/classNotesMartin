#include <iostream>
#include "CCurso.h"
#include "CAlumno.h"
#include <vector>
using namespace std;

class CUniversidad
{
private:
    string nombre;
    vector<CCurso*> cursos;
    vector<CAlumno*> alumnos;
public:
    CUniversidad();
    CUniversidad(string _nombre);
    ~CUniversidad();
    void agregar_alumnos(CAlumno* _alumno);
    void agregar_cursos(CCurso* _curso);
    void imprimir_alumnos();
    void imprimir_cursos();
};

