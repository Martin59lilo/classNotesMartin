---
tags:
  - Math/Vectorial
---

# Ecuación de la recta
- Ecuación vectorial de la recta:
$$
\begin{aligned}
\vec{r}= \vec{r_{o}}+t\vec{v}
\end{aligned}
$$
$\vec{r}$: recta $<x;y;z>$
$\vec{r_{o}}$: vector de cualquier punto que pasa por la recta $<x_{o};y_{o},z_{o}>$
$t$: escalar
$\vec{v}$: vector dirección de la recta $<v_{1};v_{2};v_{3}>$
- Ecuación paramétrica de la recta:
$$
	\begin{aligned}
	x = x_{o}+t\vec{v_{1}} \\
	y = y_{o}+t\vec{v_{2}} \\
	z = z_{o}+t\vec{v_{3}} \\
	\end{aligned}
	$$
- Ecuación simétrica de la recta:
$$
\begin{aligned}
t = \frac{x-x_{o}}{v_{1}} = \frac{y-y_{o}}{v_{2}} = \frac{z-z_{o}}{v_{3}}
\end{aligned}
$$
# Ecuación del plano
- Ecuación vectorial del plano:
$$
\begin{aligned}
\vec{n}\cdot (\vec{r}-\vec{r_{o}}) = 0
\end{aligned}
$$
$\vec{n}$: vector normal del plano $<a;b;c>$
$\vec{r}$: vector de cualquier punto del plano $<x_{o};y_{o};z_{o}>$
$\vec{r_{o}}$: $<x;y;z>$
- Ecuación general del plano:
$$
ax + by + cz = d
$$
# Planos paralelos y rectas paralelas
1. Planos
	1. Paralelos: $\vec{n_{1}} \times \vec{n_{2}} = 0$ (producto vectorial de las normales), $\vec{n_{1}}= \lambda\vec{n_{2}}$ (Proporcionales los vectores normales)
	2. Perpendiculares: $\vec{n_{1}} \cdot \vec{n_{2}} = 0$ (producto escalar de las normales)
2. Rectas
	1. Paralelos: $\vec{v_{1}} \times \vec{v_{2}} = 0$ (producto vectorial de los vectores dirección), $\vec{v_{1}}= \lambda\vec{v_{2}}$ (Proporcionales los vectores dirección)
	2. Perpendiculares: $\vec{v_{1}} \cdot \vec{v_{2}} = 0$ (producto escalar de los vectores directores)

# Propiedades geométricas
## Distancia de un punto a un plano
Distancia de un punto Q:
$$
D = \frac{\|\vec{PQ} \cdot \vec{n} \|}{\|\vec{n}\|}
$$
## Distancia entre dos rectas oblicuas
$$
D = \frac{\|\vec{PQ} \cdot (\vec{v_{1}} \times \vec{v_{2}})\|}{\| \vec{v_{1}} \cdot \vec{v_{2}} \|}
$$
