---
tags:
  - Math/EDO
---
## EDO's lineales de primer orden
Se puede realizar este método siempre y cuando la ecuación pueda llevarse a la forma estándar que es $y'+P_{(x)}\cdot y=Q_{(x)}$. Siendo $P_{(x)}$ y $Q_{(x)}$ cualquier polinomio.
**Pasos**:
1. Llevar la ecuación a su forma estándar
2. Identificar $P_{(x)}$ y $Q_{(x)}$.
3. Determinar el factor integrante: $\mu=e^{\int P(x)dx}$ 
4. Reemplazar en esta ecuación: $y=\frac{1}{\mu}\int Q_{(x)}\cdot \mu dx$
Demostración:
## EDO's exactas
Se puede realizar este método cuando $\frac{\partial M}{\partial x}=\frac{\partial N}{\partial y}$ falta...



# Mezclas de un solo tanque
**Queremos hallar la cantidad de sal o cualquier soluto en la mezcla final.**
En un tanque con mezclas existe una entrada y una salida. Ambas tienen una concentración del soluto y un flujo correspondiente $s_{in}$: **concentración** del soluto a la entrada $\frac{masa}{volumen}$ y $q_{in}$: **flujo** de entrada o caudal $\frac{volumen}{tiempo}$. Lo mismo pasa con una concentración de salida y un flujo de salida. **La ecuación que rige al soluto es la diferencia de las razones de entrada y salida** $(R_{i}=q_{in}\cdot s_{in})$ respectivamente. 
$$
\frac{dA}{dt}=R_{in}-R_{out}=q_{in}\cdot c_{in}-q_{out}\cdot c_{out}
$$
De la misma manera la relación del volumen de un recipiente con el tiempo se expresa de la siguiente forma ($V_{o}$ volumen inicial):
$$
V_{(t)} = V_{o}+(q_{in}-q_{out})t
$$
Así veremos si el volumen del recipiente es variable o no. Si el volumen es **constante** tenemos que usar el método de **variables separables** y si es **variable** tenemos que usar el método para **EDO's lineales de primer orden**.