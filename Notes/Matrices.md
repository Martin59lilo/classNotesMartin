---
tags:
  - Math/AlgLineal
---

`Multiplicación de matrices`
`Operaciones elementales`
`Determinantes`
`Inversa`
`Rango`
`Sistema de ecuaciones lineales`
`Consistencia`
`Espacio nulo`
`Transformaciones lineales`
`Espacios vectoriales`
`Combinaciones lineales`
`Sistema Independiente y dependiente`
# Multiplicación de matrices
# Matrices especiales
# Operaciones elementales
# Matriz escalonada
# Inversa de una matriz
Una matriz cuadrada $A$ de orden $n$ es invertible, si existe una matriz $C$ (del mismo orden) tal que: $AC = CA = I_{n}$ por lo tanto $C = A^{-1}$. Se obtiene la matriz con una matriz ampliada $AC$ y lograr que $A_{n} = I_{n}$.
Observación: En una matriz de $2x2$ se puede calcular la inversa así:
$$
A^{-1}=\frac{1}{\det (A)}\begin{bmatrix}
a_{22} & -a_{12} \\
-a_{21} & a_{11}
\end{bmatrix}
$$
# Rango
Es el número de filas no nulas de una matriz tras haber sido escalonada.
# Determinante
Hallar determinante por método de cofactores:
$$ \det(A) = \sum^n_{j=1}a_{ij}\cdot C_{ij} = \sum^n_{j=1}a_{ij}\cdot [(-1)^{i+j}\cdot \det(A_{ij})]$$
Propiedades:
- Para una matriz triangular A el determinante será el producto de la fila diagonal.
Observación: Dada una matriz cuadrada $A$, la adjunta de $A$ se define como la transpuesta de la matriz de cofactores de A, es decir: 
$$
Adj(A) = (Cof(A))^t
$$
Se cumple si una matriz es invertible, es posible calcular su inversa así:
$$
A^{-1} = \frac{1}{\det(A)}\cdot Adj(A)
$$
