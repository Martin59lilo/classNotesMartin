---
tags:
  - Math/Óptica
---
# Movimiento Armónico Simple (MAS)
1. La función de la posición en función del tiempo se describe:
$$
x_{(t)} = Acos(wt +\phi)
$$
	$A$: amplitud
	$w$: frecuencia angular $= \frac{2\pi}{T} = 2\pi f = \sqrt{\frac{k}{m}}$
	$k$: constante de resorte
	$m$: masa de resorte
	$f$: frecuencia $= \frac{1}{T}$
	$T$: periodo $= \frac{1}{f}$
	$\phi$: desfase horizontal
2. La función de la velocidad en función del tiempo se describe:
	$$
	v_{(t)} = \frac{dx}{dt}= -wAsin(wt +\phi)
	$$
3. La función de la aceleración en función del tiempo se describe:
	$$
	a_{(t)} = \frac{dv}{dt}= -w^2Acos(wt +\phi)
	$$
4. La energía mecánica de un resorte se describe:
	$$
	\begin{aligned}
	E &= K + U \\
	E &= \frac{1}{2}mv^2+\frac{1}{2}kx^2 \\
	E &= \frac{1}{2}kA^2 \\
	E &= \frac{1}{2}mw^{2}A^{2}
	\end{aligned}
	$$
5. En un péndulo simple se cumple:
   $$
	\begin{aligned}
	T &= 2\pi\sqrt{\frac{L}{g}} \\
	w &= \sqrt{\frac{g}{L}}
	\end{aligned}
   $$
# Ondas mecánicas
**Una onda es una perturbación a través de un medio, transfiere energía por la materia.**
1. La función de una onda se describe de este modo:   
	$$
		y_{(x,t)} = Asin(kx\pm wt+\phi)
	$$
	$\pm$: si es + la onda va a la derecha, si es - la onda va a la izquierda
	$A$: amplitud
	$k$ número de onda (longitudes de onda completas en 2pi): $= \frac{2\pi}{\lambda}$
	$w$: frecuencia angular $= \frac{2\pi}{T} = 2\pi f$
	$\lambda$: distancia de cresta a cresta o valle a valle
	$v$: rapidez de la onda en el eje "x" $= \lambda f = \frac{\lambda}{T} = \sqrt{\frac{F}{\mu}} = \frac{w}{k}$
	$\mu$: masa por unidad de longitud $= \frac{m}{L}$
1. La velocidad de onda se describe:
$$
v_{(x,t)}=-wAcos(kx-wt)
$$
3. La aceleración de onda se describe:
$$
a_{(x,t)} = -w^2Asin(kx-wt)
$$
4. La potencia es la transferencia de energía en un intervalo de tiempo:
   $$
   \begin{aligned}
   P &= \frac{E\cdot\lambda}{T} \\
   P &= \frac{\frac{1}{2}\mu w^2 \cdot A^2 \lambda}{T} \\
   P &= \frac{1}{2}\mu w^2 A^2\cdot v 
   \end{aligned}
   $$
5. La intensidad es la potencia por una unidad de área:
   $$
   I = \frac{P}{4\pi r^2}
   $$
6. La interferencia es la interacción de dos ondas viajeras
   $$
   \begin{aligned}
   y_{(x,t)} &= y_1 +y_2 \\
   y_{(x,t)} &= Asin(kx - wt) + Asin(kx - wt + \phi) \\
   y_{(x,t)} &= 2Acos(\frac{\phi}{2})sin(kx-wt+\frac{\phi}{2}) \\
   
   \end{aligned}
   $$
	1. Constructiva: La amplitud es la suma de ambas ondas $\phi$ = 0°, $\vartriangle r = n \lambda$ (n: 0,1,2,3,...)
	2. Destructiva: La amplitud por lo menos será menor que una de las amplitudes, $\vartriangle r = n \frac{\lambda}{2}$ (n: 1,3,5,7,...)
7. Las ondas estacionarias son ondas idénticas que viajan en sentido opuesto en un contorno fijo:
   $$
   \begin{aligned}
   y_{(x,t)} &= y_1 +y_2 \\
   y_{(x,t)} &= Asin(kx - wt) + Asin(kx + wt) \\
   y_{(x,t)} &= 2Asin(kx)cos(wt) \\   
   \end{aligned}
   $$
   - Para una frecuencia de onda estacionario en un armónico $n$:
   $$
   f_{n}=n \cdot \frac{v}{2L}
   $$