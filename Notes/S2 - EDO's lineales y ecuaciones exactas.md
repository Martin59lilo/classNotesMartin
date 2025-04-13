---
tags:
  - Math/EDO
Status: false
date / time: 2025-04-10T23:15:00
---
> [!abstract] Abstract
> Contents

---
## EDO's lineales de primer orden
Se puede realizar este método siempre y cuando la ecuación pueda llevarse a la forma estándar que es $y'+P_{(x)}\cdot y=Q_{(x)}$. Siendo $P_{(x)}$ y $Q_{(x)}$ cualquier polinomio.
**Pasos**:
1. Llevar la ecuación a su forma estándar
2. Identificar $P_{(x)}$ y $Q_{(x)}$.
3. Determinar el factor integrante: $\mu=e^{\int P(x)dx}$ 
4. Reemplazar en esta ecuación: $y=\frac{1}{\mu}\int Q_{(x)}\cdot \mu dx$
## Ecuaciones diferenciales exactas
**Una ecuación de esta forma $M_{(x,y)}dx+N_{(x,y)}dy=0$ es exacta si $\frac{\partial M}{\partial y}=\frac{\partial N}{\partial x}$.**
> [!tip] Demostración
> Partiendo de $f_{(x,y)}=C$ su [[Incrementos y Diferenciales|diferencial total]] sera $dz=\frac{\partial f}{\partial x}dx+\frac{\partial f}{\partial y}dy$: $$\begin{aligned} \frac{\partial f}{\partial x}dx+\frac{\partial f}{\partial y}dy=0 \\ M_{(x,y)}dx+N_{(x,y)}dy=0 \\ M_{(x,y)}=\frac{\partial f}{\partial x  },N_{(x,y)}=\frac{\partial f}{\partial y}\\ \frac{\partial M}{\partial y }=\frac{\partial N}{\partial x}=\frac{\partial^{2}f}{\partial x \partial  } =\frac{\partial^{2}f}{\partial y \partial x} \end{aligned} $$ Por lo tanto podemos afirmar que una ecuación exacta debe satisfacer $\frac{\partial M}{\partial x}=\frac{\partial N}{\partial x}$.

A partir de ello podemos integrar por separación de variables al despejar $\partial f=M_{(x,y)}dx$ (o también podemos despejar en la ecuación de $N_{(x.y)}$) y podemos obtener $f_{(x,y)}=h_{(x,y)}+g_{(y)}$ este $g_{(y)}$ es de la variable que no usamos en la integración. La expresión que obtuvimos de $f_{(x,y)}$ derivamos en función de la variable que no usamos e igualamos ambas ecuaciones para encontrar $g_{(y)}$ y tener la expresión completa.
# References
- [[Semana02_Auditorio_25_1.pdf]]
- [[Semana02_Teoria_25-1.pdf]]