---
tags:
  - Math/Vectorial
---

# Producto Escalar
Es el resultado de la suma de las multiplicaciones de las componentes de los vectores $a = <a_{1};a_{2};a_{3}>$ y $<b_{1};b_{2};b_{3}>$, también se puede calcular como la multiplicación de los módulos de los vectores por el cos del ángulo que forman entre ellos:
$$
\begin{aligned}
\vec{a} \cdot \vec{b} &= a_{1}\cdot b_{1} + a_{2} \cdot b_{2} + a_{3} \cdot b_{3} \\
\vec{a} \cdot \vec{b} &= \|\vec{a}\|\|\vec{b}\| \cos \theta
\end{aligned}
$$
Observaciones:
- Si $\vec{u}$ y $\vec{v}$ son perpendiculares: $\vec{u} \cdot \vec{v} = 0$
# Producto Vectorial
Es el resultado de la determinante de los componentes de 2 vectores y el módulo del producto se representa como la multiplicación de los módulos de los vectores por el seno del angulo que forman y el resultado del producto vectorial es un vector perpendicular al plano que forman los 2 vectores:
$$
\begin{aligned}
\vec{a} \times \vec{b} &= \det(<a_{1};a_{2};a_{3}>,<b_{1};b_{2};b_{3}>) \\
\|\vec{a} \times \vec{b}\| &= \|\vec{a}\||\vec{b}\|\sin \theta
\end{aligned}
$$
Observaciones:
- Si $\vec{u}$ y $\vec{v}$ son paralelos: $\vec{u} \times \vec{v} = 0$
- Si $\vec{u}$ y $\vec{v}$ son paralelos: $\vec{u} = \lambda\vec{v}$
- Si $\vec{u}$ y $\vec{v}$ tienen la misma dirección: $\vec{u} = \mu_{\vec{v}}\cdot\|\vec{u}\|$ ----- $\mu_{\vec{v}}$: vector unitario de $\vec{v}$
# Vector Unitario
Es un vector con módulo igual a la unidad, para conseguir el vector unitario de cada uno se divide entre su módulo ($\vec{u}$ unitario):
$$
\begin{aligned}
\vec{v} = \frac{\vec{v}}{\|\vec{v}\|} = \vec{u} \\
\end{aligned}
$$
# Componente y proyección de dos vectores
Es la proyección de un vector $\vec{u}$ en un vector $\vec{v}$ (vector): 
$$
proy_{\vec{v}}\vec{u} = \frac{\vec{u} \cdot \vec{v}}{\|v\|}(\frac{\vec{v}}{\|\vec{v}\|}) = \frac{\vec{u} \cdot \vec{v}}{\|v\|^2}(\vec{v})
$$
Es el módulo de la proyección de un vector $\vec{u}$ en un vector $\vec{v}$ (escalar):
$$
\begin{aligned}
comp_{\vec{v}}\vec{u} &= \frac{\vec{u} \cdot \vec{v}}{\vec{v}}
\end{aligned}
$$
# Área de un paralelogramo y Volumen de un paralelepípedo:
Para hallar el área de un paralelogramo tomamos los 2 vectores de la cara del paralelogramo y obtenemos el módulo del producto vectorial de ambos vectores:
$$
A = \|\vec{a} \times \vec{b}\| = \|\vec{a}\||\vec{b}\|\sin \theta
$$
Para hallar el volumen de un paralelepípedo tomamos 3 vectores del paralelepípedo y realizamos el triple producto escalar con dichos vectores:
$$
V = \vec{a} \cdot (\vec{b} \times \vec{c}) = \|\vec{a}\| \|\vec{b} \times \vec{c}\|\cos \theta
$$