---
tags:
  - Math/EDO
date / time: 2025-05-30T14:22:00
Status: false
---
> [!abstract] Abstract
> Contents

---
# Circuitos
### Circuito LC
Para un circuito LC (sin fuerza externa), la ecuación diferencial es la siguiente:
$$
\begin{align}
L\frac{di}{dt}+\frac{Q}{C}=0 \\ \\
L \frac{d^{2}q}{dt}+\frac{Q}{C} = 0
\end{align}
$$
Recordar que la corriente eléctrica es la derivada de la carga en función del tiempo $i = \frac{dq}{dt}$.
### Circuito RLC
Si el circuito no tiene una fuente entonces el $V(t)$ será 0.
$$
L \frac{d^{2}Q}{dt^{2}}+R \frac{dQ}{dt} + \frac{1}{C}Q = V(t)
$$
Si la discriminante es ($\Delta=R^{2}-\frac{4L}{C}$) se va a decir que el circuito es:
- Sobreamortiguado si $\Delta>0.$
- Críticamente amortiguado si $\Delta=0$.
- Subamortiguado si $\Delta<0$.
# References
- [[Semana10_Teoría_25_1.pdf]]
- [[Semana11_Teoria_25-1.pdf]]