
## 1. **Herencia**

La herencia en C++ permite crear nuevas clases basadas en clases existentes, reutilizando el código y añadiendo o modificando funcionalidades.

**Ejemplo de herencia simple:**
```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void comer() {
        cout << "El animal está comiendo." << endl;
    }
};

class Perro : public Animal {  // Perro hereda de Animal
public:
    void ladrar() {
        cout << "El perro está ladrando." << endl;
    }
};

int main() {
    Perro p;
    p.comer();  // Método heredado
    p.ladrar(); // Método de la clase Perro
    return 0;
}

```
**Explicación:**

- `Perro` hereda de `Animal`, lo que le permite usar el método `comer` sin necesidad de definirlo en la clase `Perro`.

---

## 2. **Override (Sobreescritura de Métodos)**

El `override` se utiliza cuando se desea modificar un método heredado en una clase derivada.

**Ejemplo de `override`:**

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void hacerSonido() {
        cout << "El animal hace un sonido." << endl;
    }
};

class Perro : public Animal {
public:
    void hacerSonido() override {  // Sobrescribe el método de Animal
        cout << "El perro ladra." << endl;
    }
};

int main() {
    Animal* animal = new Perro();
    animal->hacerSonido();  // Llama a la versión sobrescrita
    delete animal;
    return 0;
}

```
**Explicación:**

- El uso de `override` indica que estamos modificando un método virtual heredado.
- Esto asegura que estamos sobrecargando correctamente el método y previene errores si la firma no coincide.

---

## 3. **Friend (Amigos de una Clase)**

El modificador `friend` permite que una función o clase acceda a los miembros privados y protegidos de otra clase.

**Ejemplo de `friend`:**

```cpp
#include <iostream>
using namespace std;

class Caja {
private:
    int largo;
    int ancho;
public:
    Caja(int l, int a) : largo(l), ancho(a) {}
    friend void mostrarDatos(Caja& c);  // Función amiga
};

void mostrarDatos(Caja& c) {
    cout << "Largo: " << c.largo << ", Ancho: " << c.ancho << endl;  // Accede a miembros privados
}

int main() {
    Caja c(10, 5);
    mostrarDatos(c);  // Función amiga puede acceder a los miembros privados
    return 0;
}

```
**Explicación:**

- `mostrarDatos` es una función amiga de la clase `Caja`, lo que le permite acceder directamente a los miembros privados.

---

## 4. **Sobrecarga de Operadores**

La sobrecarga de operadores permite redefinir cómo los operadores funcionan con objetos de una clase personalizada.

**Ejemplo de sobrecarga de operador de inserción (`<<`):**

```cpp
#include <iostream>
using namespace std;

class Punto {
private:
    int x, y;
public:
    Punto(int x, int y) : x(x), y(y) {}
    friend ostream& operator<<(ostream& out, const Punto& p);  // Sobrecarga de <<
};

ostream& operator<<(ostream& out, const Punto& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

int main() {
    Punto p(2, 3);
    cout << p << endl;  // Uso del operador sobrecargado
    return 0;
}
```
**Explicación:**

- Se sobrecarga el operador `<<` para poder imprimir objetos de la clase `Punto` directamente usando `cout`.

---

## 5. **Sobrecarga de Métodos**

La sobrecarga de métodos permite definir múltiples versiones de un método, pero con diferentes parámetros.

**Ejemplo de sobrecarga de método:**

```cpp
#include <iostream>
using namespace std;

class Calculadora {
public:
    int sumar(int a, int b) {
        return a + b;
    }
    
    double sumar(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculadora calc;
    cout << "Suma de enteros: " << calc.sumar(3, 4) << endl;
    cout << "Suma de decimales: " << calc.sumar(3.5, 4.7) << endl;
    return 0;
}

```
**Explicación:**

- Se tienen dos versiones del método `sumar`: una para enteros y otra para decimales.

---

## 6. **Constructores y Destructores**

Los constructores inicializan objetos cuando se crean, mientras que los destructores se usan para limpiar recursos cuando el objeto se destruye.

**Ejemplo de constructor y destructor:**

```cpp
#include <iostream>
using namespace std;

class Caja {
private:
    int largo;
public:
    Caja(int l) : largo(l) {
        cout << "Constructor: Caja de largo " << largo << endl;
    }
    
    ~Caja() {
        cout << "Destructor: Caja destruida." << endl;
    }
};

int main() {
    Caja c(10);
    // El destructor se llama automáticamente cuando el objeto 'c' sale de alcance
    return 0;
}

```
**Explicación:**

- El constructor inicializa el valor de `largo`.
- El destructor se llama cuando el objeto sale de alcance y se destruye.

---

## 7. **Polimorfismo**

El polimorfismo permite que una clase derivada utilice métodos definidos en su clase base, permitiendo diferentes comportamientos.

**Ejemplo de polimorfismo:**

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void hacerSonido() {
        cout << "Sonido de animal." << endl;
    }
};

class Gato : public Animal {
public:
    void hacerSonido() override {
        cout << "Miau!" << endl;
    }
};

int main() {
    Animal* a = new Gato();
    a->hacerSonido();  // Llamada al método sobrescrito en Gato
    delete a;
    return 0;
}
   return 0; }`
```
**Explicación:**

- `hacerSonido()` es un método virtual, y se usa el polimorfismo para que un objeto de tipo `Animal` pueda comportarse como un objeto de tipo `Gato`.


EJEMPLOS

```cpp
// p1.cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Clase base
class CPersona {
protected:
    string nombre;
    string apellidos;
    int edad;
public:
    CPersona(string n, string a, int e) : nombre(n), apellidos(a), edad(e) {}
    virtual ~CPersona() {}

    // Métodos getters y setters
    string getNombre() { return nombre; }
    string getApellidos() { return apellidos; }
    int getEdad() { return edad; }

    virtual void imprimirDatos() {
        cout << "Nombre: " << nombre << "\nApellidos: " << apellidos << "\nEdad: " << edad << endl;
    }
};

// Clase Médico
class CMedico : public CPersona {
private:
    double salario;
public:
    CMedico(string n, string a, int e, double s) : CPersona(n, a, e), salario(s) {}
    double getSalario() { return salario; }
    void imprimirDatos() override {
        CPersona::imprimirDatos();
        cout << "Salario: " << salario << endl;
    }
};

// Clase Paciente
class CPaciente : public CPersona {
private:
    string historialMedico;
public:
    CPaciente(string n, string a, int e, string h) : CPersona(n, a, e), historialMedico(h) {}
    string getHistorial() { return historialMedico; }
    void actualizarHistorial(string medicamento) {
        historialMedico += "- " + medicamento + "\n";
    }
    void imprimirDatos() override {
        CPersona::imprimirDatos();
        cout << "Historial Médico:\n" << historialMedico << endl;
    }
};

// Clase Medicamento
class CMedicamento {
private:
    string nombre;
    int dosis;
public:
    CMedicamento(string n, int d) : nombre(n), dosis(d) {}
    string getNombre() { return nombre; }
    int getDosis() { return dosis; }

    void imprimirDatos() {
        cout << "Nombre: " << nombre << "\nDosis: " << dosis << endl;
    }
};

// Método para recetar medicamento
void recetarMedicamento(CMedico& medico, CPaciente& paciente, CMedicamento& medicamento) {
    cout << "Receta exitosa para " << paciente.getNombre() << endl;
    paciente.actualizarHistorial(medicamento.getNombre() + " (" + to_string(medicamento.getDosis()) + " unidades)");
}

int main() {
    CMedico medico("Juan", "Perez", 45, 5000);
    CPaciente paciente("Ana", "Fernandez", 30, "");
    CMedicamento medicamento("Paracetamol", 3);

    medico.imprimirDatos();
    paciente.imprimirDatos();
    medicamento.imprimirDatos();

    recetarMedicamento(medico, paciente, medicamento);

    cout << "\nHistorial actualizado:\n";
    paciente.imprimirDatos();

    return 0;
}

```

```cpp
// p2.cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Clase base
class CPersona {
protected:
    string nombre;
    string apellidos;
    int edad;
public:
    CPersona(string n, string a, int e) : nombre(n), apellidos(a), edad(e) {}
    virtual ~CPersona() {}

    virtual void imprimirDatos() {
        cout << "Nombre: " << nombre << "\nApellidos: " << apellidos << "\nEdad: " << edad << endl;
    }
};

// Clase Cliente
class CCliente : public CPersona {
private:
    vector<string> historialAlquileres;
public:
    CCliente(string n, string a, int e) : CPersona(n, a, e) {}

    void agregarAlquiler(string vehiculo) {
        historialAlquileres.push_back(vehiculo);
    }

    void imprimirHistorial() {
        cout << "Historial de Alquileres:\n";
        for (const auto& vehiculo : historialAlquileres) {
            cout << "- " << vehiculo << endl;
        }
    }
};

// Clase Vehículo
class CVehiculo {
private:
    string marca;
    string modelo;
    bool disponible;
public:
    CVehiculo(string m, string mod, bool disp) : marca(m), modelo(mod), disponible(disp) {}

    bool estaDisponible() { return disponible; }
    void alquilar() { disponible = false; }
    void imprimirDatos() {
        cout << "Marca: " << marca << "\nModelo: " << modelo << "\nDisponible: " << (disponible ? "Sí" : "No") << endl;
    }
};

// Método para alquilar vehículo
void alquilarVehiculo(CCliente& cliente, CVehiculo& vehiculo) {
    if (vehiculo.estaDisponible()) {
        vehiculo.alquilar();
        cliente.agregarAlquiler(vehiculo.getMarca() + " " + vehiculo.getModelo());
        cout << "Alquiler exitoso.\n";
    } else {
        cout << "El vehículo no está disponible.\n";
    }
}

int main() {
    CCliente cliente("Andrea", "Portugal", 35);
    CVehiculo vehiculo1("Toyota", "Corolla", true);
    CVehiculo vehiculo2("Kia", "Picanto", false);

    cliente.imprimirDatos();
    vehiculo1.imprimirDatos();
    vehiculo2.imprimirDatos();

    alquilarVehiculo(cliente, vehiculo1);
    cliente.imprimirHistorial();

    return 0;
}

```

```cpp
// p3.cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Clase base Persona
class CPersona {
protected:
    string nombre;
    string apellidos;
public:
    CPersona(string n, string a) : nombre(n), apellidos(a) {}
    virtual ~CPersona() {}

    virtual void imprimirDatos() {
        cout << "Nombre: " << nombre << "\nApellidos: " << apellidos << endl;
    }
};

// Clase Tarjeta de Crédito
class CTarjetaCredito {
private:
    string numeroTarjeta;
    double limiteCredito;
    double saldoDisponible;
public:
    CTarjetaCredito(string num, double limite) : numeroTarjeta(num), limiteCredito(limite), saldoDisponible(limite) {}

    double getSaldoDisponible() { return saldoDisponible; }
    void actualizarSaldo(double monto) { saldoDisponible -= monto; }
    
    void imprimirDatos() {
        cout << "Número de Tarjeta: " << numeroTarjeta << "\nLímite de Crédito: " << limiteCredito << "\nSaldo Disponible: " << saldoDisponible << endl;
    }
};

// Clase Usuario que hereda de CPersona
class CUsuario : public CPersona {
private:
    double saldoCuenta;
    vector<CTarjetaCredito> tarjetasCredito;
public:
    CUsuario(string n, string a, double saldo) : CPersona(n, a), saldoCuenta(saldo) {}

    void agregarTarjeta(CTarjetaCredito tarjeta) {
        tarjetasCredito.push_back(tarjeta);
    }

    bool realizarCompra(double monto, int indiceTarjeta) {
        if (indiceTarjeta >= 0 && indiceTarjeta < tarjetasCredito.size()) {
            if (tarjetasCredito[indiceTarjeta].getSaldoDisponible() >= monto) {
                tarjetasCredito[indiceTarjeta].actualizarSaldo(monto);
                cout << "Compra realizada con éxito. Monto: " << monto << endl;
                return true;
            } else {
                cout << "Saldo insuficiente en la tarjeta." << endl;
            }
        } else {
            cout << "Índice de tarjeta inválido." << endl;
        }
        return false;
    }

    void imprimirTarjetas() {
        for (size_t i = 0; i < tarjetasCredito.size(); ++i) {
            cout << "Tarjeta " << i + 1 << ":\n";
            tarjetasCredito[i].imprimirDatos();
        }
    }
};

int main() {
    CUsuario usuario("Ricardo", "Mendoza", 5000);
    CTarjetaCredito tarjeta1("1234567890123456", 3000);
    CTarjetaCredito tarjeta2("9876543210987654", 5000);

    usuario.agregarTarjeta(tarjeta1);
    usuario.agregarTarjeta(tarjeta2);

    usuario.imprimirDatos();
    usuario.imprimirTarjetas();

    usuario.realizarCompra(2000, 0);
    usuario.realizarCompra(1000, 1);

    cout << "\nSaldos actualizados:\n";
    usuario.imprimirTarjetas();

    return 0;
}


```

```cpp
// p4.cpp

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Clase base Persona
class CPersona {
protected:
    string nombre;
    string apellidos;
public:
    CPersona(string n, string a) : nombre(n), apellidos(a) {}
    virtual ~CPersona() {}

    virtual void imprimirDatos() {
        cout << "Nombre: " << nombre << "\nApellidos: " << apellidos << endl;
    }
};

// Clase Proyecto
class CProyecto {
private:
    string nombre;
    double presupuesto;
    vector<CPersona*> equipoTrabajo;
public:
    CProyecto(string n, double p) : nombre(n), presupuesto(p) {}

    void agregarEmpleado(CPersona* empleado) {
        equipoTrabajo.push_back(empleado);
    }

    void eliminarEmpleado(CPersona* empleado) {
        equipoTrabajo.erase(remove(equipoTrabajo.begin(), equipoTrabajo.end(), empleado), equipoTrabajo.end());
    }

    void imprimirDatos() {
        cout << "Nombre del Proyecto: " << nombre << "\nPresupuesto: " << presupuesto << "\nEmpleados del Proyecto:\n";
        for (auto empleado : equipoTrabajo) {
            empleado->imprimirDatos();
        }
    }
};

// Clase Empleado que hereda de CPersona
class CEmpleado : public CPersona {
private:
    string puesto;
    vector<CProyecto*> proyectosAsignados;
public:
    CEmpleado(string n, string a, string p) : CPersona(n, a), puesto(p) {}

    void asignarProyecto(CProyecto* proyecto) {
        proyectosAsignados.push_back(proyecto);
        proyecto->agregarEmpleado(this);
    }

    void eliminarDeProyecto(CProyecto* proyecto) {
        proyectosAsignados.erase(remove(proyectosAsignados.begin(), proyectosAsignados.end(), proyecto), proyectosAsignados.end());
        proyecto->eliminarEmpleado(this);
    }

    void imprimirProyectos() {
        cout << "Proyectos Asignados a " << nombre << " " << apellidos << ":\n";
        for (auto proyecto : proyectosAsignados) {
            proyecto->imprimirDatos();
        }
    }

    void imprimirDatos() override {
        CPersona::imprimirDatos();
        cout << "Puesto: " << puesto << endl;
    }
};

int main() {
    CEmpleado empleado1("Fernando", "Paredes", "Desarrollador");
    CEmpleado empleado2("Ana", "Gonzalez", "Diseñadora");

    CProyecto proyecto1("Desarrollo de App", 50000);
    CProyecto proyecto2("Desarrollo Web", 30000);

    empleado1.asignarProyecto(&proyecto1);
    empleado2.asignarProyecto(&proyecto1);
    empleado1.asignarProyecto(&proyecto2);

    proyecto1.imprimirDatos();
    proyecto2.imprimirDatos();

    cout << "\nEliminando a Fernando del proyecto Desarrollo Web...\n";
    empleado1.eliminarDeProyecto(&proyecto2);

    empleado1.imprimirProyectos();

    return 0;
}

```

