---
tags:
  - Math/EDO
date / time: 
Status: false
---
> [!abstract] Abstract
> Contents

---
# Solucion de un sistema homogéneo
## Eliminación sistemática
Pasos para solución por eliminación sistemática:
1. Reescribir el SED en términos del operador diferencial "D"
2. Factorizar y eliminar una variable "x"
3. Encontrar la ecuación característica y encontrar $y_{t}$
4. Reemplazar $y'$ y $y$ en cualquiera de las ecuaciones y encontrar $x_{t}$
Ejemplo de solución de sistema por método de eliminación sistemática:
$$
\begin{cases}
x_1' = 2x_1 + x_2 \\[6pt]
x_2' = 3x_1
\end{cases}
\quad \Rightarrow \quad
\begin{cases}
D x_1 - 2x_1 - x_2 = 0 \\[6pt]
D x_2 - 3x_1 = 0
\end{cases}
$$
$$
x_2 = (D - 2) x_1
$$
$$
D x_2 - 3 x_1 = D (D - 2) x_1 - 3 x_1 = 0 \quad \Rightarrow \quad D^2 x_1 - 2 D x_1 - 3 x_1 = 0
$$
$$
r^2 - 2r - 3 = 0 \quad \Rightarrow \quad (r-3)(r+1) = 0 \quad \Rightarrow \quad r=3, \, -1
$$
$$
x_1 = C_1 e^{3t} + C_2 e^{-t}
$$
$$
x_2' = 3 x_1 = 3 (C_1 e^{3t} + C_2 e^{-t}) \quad \Rightarrow \quad x_2 = C_1 e^{3t} - 3 C_2 e^{-t}
$$
## Solución por eigenvectores y eigenvalores
Pasos:
1. Tener el sistema en su forma matricial $X'=AX$
2. Encontrar el polinomio característico $\det(A-\lambda I)=0$ y factorizar para encontrar los eigenvalores
3. Analizar cada eigenvalor en $(A-\lambda I)=0$ y tener los eigenvectores de cada eigenvalor.
4. Tenemos la solución con los eigenvectores ($v_{1},v_{2},\dots,v_{n}$) y eigenvalores $y(x)=C_{1}e^{\lambda_{1}}[v_{1}]+C_{2}e^{\lambda_{2}}[v_{2}]$.
# Solución de un sistema no homogéneo
En un sistema no homogéneo de $n$ variables $X' =AX+v(t)$. Siendo $A$ una matriz $n\times n$ y $X$ junto a $b$ vectores de $n\times 1$. Seguimos los siguientes pasos para hallar la solución:
1. Hallar la solución homogénea del sistema $A'=AX$. La solución será la siguiente $X_{h}=C_{1}e^{\lambda_{1}}a+C_{2}e\lambda_{2}b$.
2. Llevamos la solución homogénea a la siguiente forma para tener la matriz fundamental ($\Phi$): $$ \begin{align}
X_{h} &= C_{1}\begin{bmatrix}
e^{\lambda_{1}}a_{11} \\
e^{\lambda_{1}}a_{21}
\end{bmatrix} + C_{2}\begin{bmatrix}
e^{\lambda_{2}}b_{11} \\
e^{\lambda_{2}}b_{21}
\end{bmatrix} \\
\Phi &= \begin{bmatrix}
e^{\lambda_{1}}a_{11} & e^{\lambda_{2}}b_{11} \\
e^{\lambda_{1}}a_{21} & e^{\lambda_{2}}b_{21}
\end{bmatrix}
\end{align}
$$
3. Usamos la siguiente fórmula para conseguir la solución particular: $X_{p}=\Phi(t) \int \Phi^{-1}(t)v(t)dt$.
4. La solución general es $X=X_{h}+X_{p}$.


# References
- [[Semana07_Auditorio_25-1.pdf]]
- [[Semana07_Teoria_25-1.pdf]]
- [[Semana08_Auditorio_25-1.pdf]]
- [[Semana09_Auditorio_25_1.pdf]]
- [[Lineamientos_Proyectos_2025-1_.pdf]]
- [[Modelo6_2024-1.pdf]]
- [[Modelo7_2024-1.pdf]]
- [[Modelo9_2024-1.pdf]]
- [[Modelo4_2024_1.pdf]]