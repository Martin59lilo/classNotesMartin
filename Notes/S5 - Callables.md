---
tags:
  - Computer_Science/Progra3
date / time: 2025-04-21T19:06:00
Status: false
---
> [!abstract] Abstract
> Contents

---
# Callable
Es una operación que podemos llamar a algo como puede ser el puntero a una función, functor o lambda, etc.
## Puntero a función
Guarda la dirección de una función en una variable y se debe especificar el tipo de parámetros (los paréntesis son obligatorios en la sintáxis):
```c++
tipo_retorno (*nombreVariable)(lista_de_parámetros) = &dir_funcion;
```
Ejemplo de puntero a función:
```c++
int sumar(int a, int b){ return a + b; }
int (*pf)(int, int) = &sumar;   // “pf” apunta a la función “sumar”
int resultado = pf(3, 4);       // Llama a sumar(3,4) → 7
```
## Functor
Es un objeto que actúa como una función a través de la sobrecarga del operador (). Ejemplo:
```c++
class Foo
{
public:
	int a = 2;
    int operator()(int _b){
        return a*_b;}
};

int main(){
    Foo f;
    std::cout << f(3);
    return 0;
}
```

## Lambda
```c++
auto lambda_name = [capture](parameters) {body;};
```
- Capture: Podemos capturar variables externas por valor (no se modifican) y por referencia `&` o `mutable` (sí se modifican).
- Parameters: Argumentos que recibe como una función normal.
- Body: Acciones que realizará el lambda
Ejemplo de lambda:
```c++
auto cuadrado = [](int x){ return x * x; };
std::cout << cuadrado(5);          // Imprime 25
```
# References

- [[Unidad 2 - Semana 5 - Libreria Estandar - Contanedores.pdf]]
- [[Unidad 2 - Semana 6 - Libreria Estandar - Iteradores.pdf]]
- [[Laboratorio 5A.pdf]]
- [[2025_1_Prog_3___PC1__Lab_1_03_.pdf]]