---
tags:
  - Computer_Science/Progra3
date / time: 2025-04-20T12:43:00
Status: false
---
> [!abstract] Abstract
> Contents

---
# Palabras clave (Keywords)
## auto
El auto deduce automáticamente el tipo de variable `auto x = 10` (`x` será de tipo entero). Se puede usar para iterar, funciones, etc. Al usar `auto` es similar al uso de la cabecera de `template`.
```c++
# Iterar vector
for (auto item : v)
    {cout << item << ",";}

# Función
auto add(auto b, auto c){
	return b + c;
}
```
## constexpr
Indica si una variable o una función se va a ejecutar en tiempo de compilación y no de ejecución `constexpr int x = 10` (la variable `x` se va a ejecutar en tiempo de compilación y no en el tiempo de ejecución) .
## decltype
Obtiene el tipo de una expresión sin evaluarla , proporcionando el tipo exacto de una variable o operación en tiempo de compilación  `decltype(x) y = 5` (`y` tendrá el mismo tipo que `x`).
# Template de clases
Se puede usar tipos genéricos para clases con los template y sigue una lógica similar que la de template de funciones. Los template van en el archivo header `.h`. Este es un template de clases in place:z
```c++
template <typename First, typename Second>
class Pair
{
private:
    First first;
    Second second;
public:
    Pair(First f, Second s):first(f),second(s) {}
    ~Pair() {}
};
```

# Sobrecarga de funciones
Podemos sobrecargar una función para que haga un proceso específico para cierto tipo de datos y se hace de esta manera:
```c++
template<typename T, typename Q>
char sumar(T x1, Q x2){
    return x1+x2;
}

int sumar(int x1, int x2){
    return x1+x2;
}
```
## Especialización de funciones y clases
```c++
// Plantilla de función
template <typename T>
void mostrar(T t) {
    cout << "Valor genérico: " << t << endl;
}

// Especialización de la plantilla para tipo int
template <>
void mostrar<int>(int i) {
    cout << "Valor entero: " << i << endl;
}
```

```c++
// Plantilla de clase
template <typename T>
class Caja {
public:
    T valor;
    Caja(T v) : valor(v) {}
};

// Especialización de la plantilla para tipo int
template <>
class Caja<int> {
public:
    int valor;
    Caja(int v) : valor(v) {}
};
```
# Variadic Templates
Una fold expression es así hasta llegar al último parámetro:
```c++
//(args op ...) -> a_1 op (a_2 op (a_3 op ... (a_n-1 op (a_n))))
// ((args > max ? max = args: true), ...)
f```
En un variadic template se usa muchos parámetros en una función y se escribe de esta manera:
```c++
template<typename... Ts> // Ts es el paquete de tipos
int foo(Ts ...args){ //args es el paquete de argumentos
    return (pow(args,2)-...);
}
```
Así mismo, si queremos separar un argumento del paquete podemos hacerlo así:
```c++
template<typename T, typename... Ts>
double Max(T arg, Ts... args) {
    double max = arg;
    ((args > max ? max = args: true), ...);
    return max;
}
```
# References

- [[Unidad 2 - Semana 4 - Templates y Metaprogramación.pdf]]
- [[Laboratorio 4A.pdf]]
- [[Laboratorio 4B.pdf]]