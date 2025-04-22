---
tags:
  - Math/EDO
Status: true
date / time: 2025-04-10T23:15:00
---
> [!abstract] Abstract
> - En caso de EDO's lineales de primer orden podemos usar método de factor integrando: llevamos la ecuación a su forma estándar $y'+P_{(x)}\cdot y=Q_{(x)}$ de esta manera podemos conseguir el factor integrante $\mu = e^{\int P_{(x)}dx}$, luego podemos hallar la función incógnita $y_{(x)}=\frac{1}{\mu}\int Q_{(x)}\cdot \mu dx$.
> - En el caso de ecuaciones diferenciales exactas tenemos que tener un polinomio de 2 variables $M_{(x,y)}dx+N_{(x,y)}dy=0$. Si comprobamos que $\frac{\partial M}{\partial y}=\frac{\partial N}{\partial x}$ podemos decir que es una función exacta. De esta manera podemos realizar lo siguiente: $f_{(x,y)}=\int M_{(x,y)}dx+g_{(y)}$ al conseguir ese resultado podemos derivar la función y compararlo con $N_{(x,y)}$ para conseguir el último término $g_{(y)}$ y completar la función.
> - Los modelos de dinámica poblacional y decaimiento radioactivo son de la siguiente forma $\frac{dP}{dt}=kP$ que es lo mismo decir que la función incógnita es $P_{(t)}=P_{o}e^{kt}$. En el caso de la ley de enfriamiento de Newton tiene la siguiente forma $\frac{dT}{dt}=k(T-T_{m})$.

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
> Partiendo de $f_{(x,y)}=C$ su [[Incrementos y Diferenciales|diferencial total]] sera $dz=\frac{\partial f}{\partial x}dx+\frac{\partial f}{\partial y}dy$: $$\begin{aligned} \frac{\partial f}{\partial x}dx+\frac{\partial f}{\partial y}dy=0 \\ M_{(x,y)}dx+N_{(x,y)}dy=0 \\ M_{(x,y)}=\frac{\partial f}{\partial x  },N_{(x,y)}=\frac{\partial f}{\partial y}\\ \frac{\partial M}{\partial y }=\frac{\partial N}{\partial x}=\frac{\partial^{2}f}{\partial x \partial  } =\frac{\partial^{2}f}{\partial y \partial x} \end{aligned} $$ Por lo tanto podemos afirmar que una ecuación exacta debe satisfacer $\frac{\partial M}{\partial y}=\frac{\partial N}{\partial x}$.

A partir de ello podemos integrar por separación de variables al despejar $\partial f=M_{(x,y)}dx$ (o también podemos despejar en la ecuación de $N_{(x.y)}$) y podemos obtener $f_{(x,y)}=h_{(x,y)}+g_{(y)}$ este $g_{(y)}$ es de la variable que no usamos en la integración. La expresión que obtuvimos de $f_{(x,y)}$ derivamos en función de la variable que no usamos e igualamos ambas ecuaciones para encontrar $g_{(y)}$ y tener la expresión completa.
## Modelos de ecuaciones diferenciales de 1er orden
### Dinámica poblacional y Decaimiento Radioactivo
$$
\frac{dP}{dt}=kP
$$

### Ley de Enfriamiento de Newton
$$
\frac{dT}{dt}=k(T-T_{m})
$$

# References
- [[Semana02_Auditorio_25_1.pdf]]
- [[Semana02_Teoria_25-1.pdf]]