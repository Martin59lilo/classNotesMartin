---
tags:
  - Math/EDO
date / time: 2025-04-10T23:19:00
Status: false
---
> [!abstract] Abstract
> Contents

---
# Mezclas de un solo tanque
**Queremos hallar la cantidad de sal o cualquier soluto en la mezcla final.**
- [ ] En un tanque con mezclas existe una entrada y una salida. Ambas tienen una concentración del soluto y un flujo correspondiente
- $s_{in}$: **concentración** del soluto a la entrada $\frac{masa}{volumen}$
- $q_{in}$: **flujo** de entrada o caudal $\frac{volumen}{tiempo}$
Lo mismo pasa con una concentración de salida y un flujo de salida. **La ecuación que rige al soluto o la concentración es la diferencia de las razones de entrada y salida**:
$$
\frac{dA}{dt}=R_{in}-R_{out}=q_{in}\cdot c_{in}-q_{out}\cdot c_{out}
$$
De la misma manera la relación del volumen de un recipiente con el tiempo se expresa de la siguiente forma (El volumen será constante si $q_{in}=q_{out}$):
$$
\frac{dV}{dt}=q_{in}-q_{out}
$$
A partir de estos datos podemos usar el método de variables separables o EDO's lineales de primer órden y sacar el $V(t)$ o el $A(t)$.
## Mezclas de dos tanques
En el proceso de mezcla de dos tanques se tiene que trabjaar por órden desde el primer tanque y encontrar las variables correspondientes. Luego, el caudal y concentración de salida del primer tanque tomarlo como el caudal y concentración de entrada para el segundo tanque.
# Vaciado de un tanque
Para un vaciado de tanque podemos encontrar que la razón de cambio de la altura respecto al tiempo se expresa de esta manera ($h_{(t)}$ es la altura de un tanque en un tiempo $t$):
$$
\frac{dh}{dt}=-c\cdot \frac{A_{o}}{A_{h}}\sqrt{ 2gh }
$$
- $A_{o}$ es el área transversal del agujero
- $A_{h}$ es el área transversal en una altura determinada por un tiempo
- $g$ es la gravedad
## Teoremas
Teorema de cuerdas
Tangentes
# References
- [[Semana03_Auditorio_25-1.pdf]]
- [[Semana03_Teoria_25-1.pdf]]