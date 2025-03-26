---
tags:
  - Math/AlgLineal
---

# Vector propio y valor propio
Son los vectores que al sufrir una transformación pertenecen al espacio generado del mismo vector. $\lambda$: son los valores propios y $x$: son los vectores propios.
$$
Ax= \lambda x
$$
1. Procedimiento para hallar los valores propios: Tenemos que encontrar las soluciones de: $\det(A-\lambda I)=0$ se denota como polinomio característico.
2. Procedimiento para hallar los vectores propios: Se busca la solución al sistema homogéneo para cada valor propio. En otras palabras hallar el espacio nulo de esa matriz $E_{n}=N(A-\lambda I)=(A-\lambda I)=0$ para cada valor propio, éstos también son los espacios propios a cada vector propio. Al tener la solución reemplazamos las variables pivotantes por las variables libres y los vectores que nos quedaron son los vectores propios asociados a tal valor propio.
Observación:
- Polinomio característico: es $p_{A}(\lambda)$
- Ecuación característica: es el polinomio característico evaluado en lambda igual a 0. $p_{A}(\lambda)=\det(A-\lambda I)=0$
# Multiplicidad algebraica de un valor propio
Es el exponente del valor propio que acompaña al factor $ma(\lambda_{i})= i$. $n$: grado del polinomio
# Multiplicidad geométrica de un valor propio
Es la dimensión del espacio propio generado por el valor propio $mg(\lambda)=dim(E_{\lambda})=n°filas  ,columnas-rango(A-\lambda I)$.

