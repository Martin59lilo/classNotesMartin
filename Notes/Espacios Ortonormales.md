---
tags:
  - Math/AlgLineal
---

# Producto interno
Es una función que asocia un número real a un par de vectores.
$$
<u,v> = u \cdot v = u^{T}v=u_{1}v_{1}+u_{2}v_{2}+\dots+u_{n}v_{n}
$$
El módulo de un vector será: $\|v \| = \sqrt{ <v,v> }=\sqrt{ v_{1}²+v_{2}² }$.
# Ortogonalidad y Ortonormales
- Si $<u,v> = u\cdot v= 0$. Los vectores $u, v$ son **ortogonales** o perpendiculares.
- Si la norma de ambos vectores son 1, entonces serán **ortonormales**. $\|u \|=\|v\|=1$.
Teoremas de subespacio de productos interno real $V$:
- $W^\perp$ es un subespacio de $V$.
- $W \cap W^{\perp}={0}$
- $(W^{\perp})^{\perp}=W$
# Matriz Ortogonal
- Una matriz ortogonal $U$ cumple: $UU^{T}=I$ y $U^T=U^{-1}$.
- A es diagonalizable ortogonalmente si existe una matriz $A = PDP^T$ y $A$ es simétrica.
## ==Diagonalización Ortogonal==
Requisitos:
- A es simétrica. $A^{-1}=A^T$
- Los vectores propios de cada espacio son ortogonales entre sí.
Pasos a seguir:
1. Base para cada espacio propio de A
2. Aplicar Gram-Schmidt a las bases y obtener una base **ORTONORMAL** para cada espacio propio.
3. Formar $P$ cuyas columnas son los vectores nuevos y los $D$ son los valores propios en el mismo orden.
# Proceso de Gram-Schmidt
Es un proceso para convertir 3 vectores $\{u_{1},u_{2},\dots,u_{n}\}$ en una base ortogonal $\{v_{1},v_{2},\dots,v_{n}\}$:
1. $v_{1} = u_{1}$
2. $v_{2}=u_{2}-proy_{u_{2}}v_{1}$
3. $v_{3}=u_{3}-proy_{v_{1}}u_{3}-proy_{v_{2}}u_{3}$
Y así sucesivamente durante $r$ pasos.
# Factorización QR
Una matriz ortogonal la podemos expresar de esta forma donde se cumple:
$$
\begin{aligned}
A &=\begin{bmatrix}
u_{1} & u_{2} & \dots & u_{n}
\end{bmatrix} =QR\\
Q &= \begin{bmatrix}
q_{1}  & q_{2} & \dots & q_{n} \\
\end{bmatrix} \\
R &= \begin{bmatrix}
u_{1}\cdot q_{1} & u_{2}\cdot q_{1} & \dots & u_{n}\cdot q_{1} \\
0 & u_{2}\cdot q_{2} & \dots & u_{n}\cdot q_{2} \\
\vdots & \vdots & \ddots & \vdots \\
0 & 0 & \dots & u_{n}\cdot q_{n}
\end{bmatrix}
\end{aligned}
$$
- $u_{1},u_{2},\dots ,u_{n}$: son los vectores de A.
- $q_{1},q_{2},\dots,q_{n}$: son los vectores ortonormales del proceso de Gram-Schmidt al diagonalizar ortogonalmente $A$.