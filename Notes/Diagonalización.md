---
tags:
  - Math/AlgLineal
---

# Matrices semejantes
$A$ es semejante a $B$ si: $B = P^{-1}AP$
# Diagonalización
$$\begin{aligned}
D &= P^{-1}AP&\\
A &= PDP^{-1}
\end{aligned}
$$Diremos que $P$ diagonaliza a $A$.
# Teoremas
- ==Si el número de valores propios es igual al número de filas de $A$ y son distintos, entonces $A$ es diagonalizable.==
- Si los vectores propios de A son linealmente independientes, entonces $A$ es diagonalizable.
- Si $A$ y $B$ son semejantes, entonces tienen los mismos valores propios.
- Si $A$ es diagonalizable entonces:
  $v_{1},v_{2},..,v_{n}$: vectores propios de $A$
  $\lambda_{1},\lambda_{2},\dots ,\lambda_{n}$: valores propios de $A$
  $$
  D = P^{-1}AP=\begin{bmatrix}
\lambda_{1} &0 & \dots & 0 \\
0 & \lambda_{2} & \dots & 0 \\
\vdots & \vdots & \ddots & \vdots \\
0 & 0 & \dots &  \lambda_{n} \\
\end{bmatrix}
  $$
  $$
  P = \begin{bmatrix}
v_{1} & v_{2} & \dots & v_{n}
\end{bmatrix}
  $$
Relación Multiplicidad geométrica y algebraica:
1. $mg \leq ma$ para cada valor propio
2. $A$ es diagonalizable si y solo sí, $mg=ma$ para cada valor propio