---
tags:
  - Math/EDO
date / time: 2025-04-20T12:39:00
Status: false
---
> [!abstract] Abstract
> Contents

---
# Solución general de EDO lineal no homogénea
En una EDO linea no homogénea $a_{n}(x)\frac{d^{n}y}{dx^{n}}+a_{n-1}(x)\frac{d^{n-1}y}{dx^{n-1}}+a_{1}(x) \frac{dy}{dx}+\dots+a_{0}(x)y = g(x)$ tenemos que hallar la solución homogénea y la particular porque la solución general es la suma de ambas $y=y_{h}+y_{p}$.
## Solución homogénea
Tenemos que encontrar las raíces a partir de la ecuación característica. Existen 3 casos según las raíces que tenemos (recordar: $y=e^{rx}$):
- Raíces distintas: Si las raíces son distintas ponemos los coeficientes junto a las soluciones reemplazando en $r$ cada raíz. $y_{h}=C_{1}e^{r_{1}x}+C_{2}e^{r_{2}x}$.
- Raíces iguales: Si las raíces son iguales ponemos los coeficientes multiplicado a un $x^{n}$ de forma que haya $k$ raíces distintas. $y_{h}=C_{1}e^{rx}+C_{2}x^{2}e^{rx}+\dots+C_{k-1}x^{k-1}e^{rx}$.
- Raíces complejas: Si las raíces son complejas ($r=\alpha+\beta i$) tenemos que colocar los coeficientes con $\sin \text{ y } \cos$. $y_{h}=C_{1}e^{\alpha x}\sin (\beta x)+C_{2}e^{\alpha x}\cos (\beta x)$.
## Solución particular



# References

- [[Semana05_Auditorio_25-1.pdf]]
- [[Semana05_Teoría_25-1.pdf]]