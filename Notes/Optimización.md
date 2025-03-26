---
tags:
  - Math/Vectorial
---
# Puntos críticos
Para hallar los puntos crítico debemos: $\nabla f{(x,y)}=<0;0>$.
## Criterio de la segunda derivada
Usamos la matriz hessiana:
$$
A =
\begin{bmatrix}
f_{xx} & f_{xy}  \\
f_{yx} & f_{yy}
\end{bmatrix}
$$
1. El $\det(A)>0$ existe un extremo.
    1. Máximo: $f_{xx} < 0$
    2. Mínimo: $f_{xx} > 0$
2. El $\det(A) < 0$ no existe un extremo y es punto de silla.
3. El $\det(A) = 0$ indeterminado.
# Multiplicadores de Lagrange
Se usa para hallar el área más óptima en una región delimitada, planteamos el sistema ecuación:
$$\nabla f_{(x,y)} = \lambda \nabla g_{(x,y)}$$
$f_{(x,y)}$: función objetivo
$g_{(x,y)}$: función restricción