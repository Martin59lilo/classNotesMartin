---
tags:
  - Math/Vectorial
---

# Regla de la cadena

En una función $f_{(x,y,z)}$ dónde las variables son $x_{(t)},y_{(t)},z_{(t)}$ se concluye:
$$
\frac{df}{dt} = \frac{\partial{f}}{\partial{x}}\cdot \frac{dx}{dt}+ \frac{\partial{f}}{\partial{y}}\cdot \frac{dy}{dt} + \frac{\partial{f}}{\partial{z}}\cdot \frac{dz}{dt}
$$
# Gradiente (vector)
El operador $\nabla$ realiza este proceso:
$$
	\nabla = <\frac{\partial }{\partial x};\frac{\partial }{\partial y}; \frac{\partial }{\partial z} >
$$
El gradiente genera un vector a partir de ésta operación:
$$
\nabla f_{(x,y,z)} = <\frac{\partial{f}}{\partial{x}}; \frac{\partial{f}}{\partial{y}}; \frac{\partial{f}}{\partial{z}}>
$$
# Derivada direccional (escalar)
La derivada direccional es la pendiente de la recta tangente a un plano en una dirección
La derivada direccional genera un escalar a partir de el producto escalar en ésta operación:
$$
D_{\vec{u}}f_{(x,y)} = \nabla f_{(x,y)} \cdot \vec {u}
$$
donde $\vec u$ es un vector unitario que nos da la dirección

# Curvas de nivel y gradiente
Toda curva de nivel se puede describir como $z = f_{(x;y)} = k$. Así mismo podemos parametrizar los valores de $x$ y $y$ en función de $t$ y tendríamos como resultado $z = f_{(x(t),y(t))} = k$. Podemos hallar la diferencial de $z$ en función de $t$:
$$
\begin{aligned}
\frac{dz}{dt} &= \frac{\partial z}{\partial x} \frac{dx}{dt} + \frac{\partial z}{\partial y} \frac{dy}{dt} = \frac{dk}{dt} \\
\frac{dz}{dt} &=  <\frac{\partial z}{\partial x};\frac{\partial z}{\partial y}> \cdot <\frac{dx}{dt};\frac{dy}{dt}>  = 0\\
\frac{dz}{dt} &= \nabla z \cdot r'_{(t)} = 0
\end{aligned}
$$
**La gradiente va a ser perpendicular a la curva de nivel.**
# Razón de cambio máxima
Recordar que toda gradiente apunta a los máximos de la función. Para hallar el máximo cambio tendríamos que buscar el vector que tiene la dirección de la gradiente que sería el vector unitario de la gradiente $\frac{\nabla f}{\|\nabla f\|} = \vec{u}$. De esa manera tendríamos que la mayor pendiente es $\|\nabla f\|$:
$$
\begin{aligned}
D_{\vec{u}}f_{(x,y)} &= \nabla f_{(x,y)} \cdot \vec{u} \\
D_{\vec{u}}f_{(x,y)} &= \nabla f \cdot \frac{\nabla f}{\|\nabla f\|} = \frac{\nabla f^2}{\|\nabla f\|} = \|\nabla f\|
\end{aligned}
$$
Observaciones:
- Si queremos hallar los mínimos de la función tendríamos que ir en dirección opuesta de la gradiente.
- El mayor cambio de la función se realiza cuando las curvas son cercanas.

# Linealización
Podemos aproximar un valor con:
$$
L_{(x,y)}=f_{(x_{o},y_{o})}+f_{x}(x_{o},y_{o})(x-x_{o})+f_{y}(x_{o},y_{o})(y-y_{o})
$$
# Ecuación del plano tangente
Para un $z=f(x,y)$:
$$
P_{(x,y)}=f(x_{o},y_{o})+f_{x}(x_{o},y_{o})(x-x_{o})+f_{y}(x_{o},y_{o})(y-y_{o})
$$