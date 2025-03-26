---
tags:
  - Math/AlgLineal
---

# Espacio vectorial
Conjunto de vectores que cumple ($v$):
$$
\begin{aligned}
\vec{w} &= \vec{u} + \vec{v}, \vec{w} \in v \\
\vec{t} &= \lambda \vec{u}, \vec{t} \in v
\end{aligned}
$$
# Subespacio vectorial
Es un subespacio vectorial  $V$ de $R^m$ si satisface:
1. El vector nulo $\in V$
2. $\forall x,y \in V, x+y \in V$
3. $\forall \alpha \in \mathbb{R}$ y $x \in V$, $\alpha x \in V$
# Combinación Lineal
$z$ es una combinación lineal de $\{v_{1},v_{2}\}$ si: $z = \lambda v_{1}+\delta v_{2}$, $\lambda, \delta$: escalares.
Diremos que $v \in R^m$ es una combinación lineal de los vectores $u_{1},u_{2},\dots ,u_{n} \in R^m$ si el sistema es consistente: 
$$
Ax=v=x_{1}u_{1}+x_{2}u_{2}+\dots x_{n}u_{n}
$$
$x_{n}$: pesos o escalares
$u_{n}$: vectores de la combinación
# Independencia lineal
Vectores linealmente independientes si el S.E.L. tiene solución única para el vector nulo: 
$$
\begin{aligned}
\begin{bmatrix}
v_{1} & v_{2} & \dots & v_{n}
\end{bmatrix}\cdot \begin{bmatrix}
\alpha_{1} \\ \alpha_{2} \\ \dots \\\alpha_{n}
\end{bmatrix} = A\alpha=0
\end{aligned}
$$
En caso contrario, diremos que los vectores son linealmente dependientes.
# Espacio generado
Un espacio generado se domina a todas las combinaciones lineales que generan un conjunto de vectores:
$$
Gen\{v_{1},v_{2},\dots,v_{n}\}= \{\alpha_{1}v_{1}+\alpha_{2}v_{2}+\dots \alpha_{i}v_{n}:\alpha _{i} \in \mathbb{R}\} 
$$

**Base**: Una base de un subespacio vectorial  $V$ son los vectores linealmente independientes y que formen el subespacio vectorial $V$.
**Dimensión**: Es el cardinal del conjunto de la base que forman el subespacio vectorial $V$.
# Espacios fundamentales de una matriz
1. Espacio columna: Es el espacio generado por las columnas de una matriz. $Gen\{c_{1},c_{2},\dots,c_{n}\}=x_{1}c_{1}+x_{2}c_{2}+\dots+x_{i}c_{n}$
2. Espacio fila: Es el espacio generado por las filas de una matriz. $Gen\{f_{1},f_{2},\dots,f_{n}\}=x_{1}f_{1}+x_{2}f_{2}+\dots+x_{i}f_{n}$
Observación: Una matriz luego de operaciones elementales, el espacio fila no cambia pero el espacio columna sí.
# Núcleo de una transformación lineal
Es el conjunto de vectores del conjunto de partida que al sufrir una transformación lineal son 0.
# Nulidad de una matriz
Es la dimensión del espacio nulo de una matriz que es el número de variables libres de $Ax = b$ tras haber sido escalonada.
Observación: La suma de la nulidad y el rango de la matriz da como resultado el número de variables o columnas de la matriz.
La dimensión del espacio fila, espacio columna y rango son iguales.
# Bases para espacios de una matriz
Tenemos una matriz aumentada $A|I$ que al aplicar operaciones elementales y escalonarla tenemos: $R|E$
1. Base para espacio fila: serán las filas no nulas de $R$.
2. Base para espacio fila: serán las columnas de A que tengan pivotante en $R$.
3. Base para el espacio nulo de la matriz traspuesta: últimas $m-r$ filas de $R$.