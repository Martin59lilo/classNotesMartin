---
tags:
  - Math/EDO
date / time: 2025-04-11T18:12:00
Status: false
---
> [!abstract] Abstract
> Contents

---
# Dependencia lineal
Se dice que un conjunto de $n$ funciones es linealmente dependiente, si existen $n$ constantes (no todas iguales a 0) tales que $c_{1}f_{1}+c_{2}f_{2}+\dots+c_{n}f_{n}=0$.
El *wronskiano* de un conjunto de $n$ funciones es la determinante de la matriz de sus derivadas:
$$ W =
\det \begin{bmatrix}
f_{1} & f_{2} & \dots & f_{n} \\
f^{1}_{1} & f^{1}_{2} & \dots & f^{1}_{n} \\
\vdots & \vdots & \ddots & \vdots \\
f^{n}_{1} & f^{n}_{2} & \dots & f^{n}_{n} \\
\end{bmatrix}
$$

> [!NOTE] Teorema con wronskiano de funciones
> **Teorema**
Para una EDO lineal homogénea $a_{n}(x)\frac{d^{n}y}{dx^{n}}+a_{n-1}(x)\frac{d^{n-1}y}{dx^{n-1}}+\dots+a_{1}(x)\frac{dy}{dx}+a_{0}(x)y=0$, se cumple que $y_{1},y_{2},\dots ,y_{n}$ soluciones de la EDO son linealmente **independientes** en el intervalo $I$ si y solo sí $W \neq 0,\forall x \in I$.

# Ecuación Logística
La ecuación logística es $\frac{dP}{dt}=P(a-bP)$. Muchos modelos siguen la ecuación logística y podemos resolver esta ecuación con variables separables para luego integrar con fracciones parciales.


# References

- [[Semana04_Auditorio_25-1.pdf]]
- [[Semana04_Teoría_25-1.pdf]]
- [[AG1_ED_25-1.pdf]]