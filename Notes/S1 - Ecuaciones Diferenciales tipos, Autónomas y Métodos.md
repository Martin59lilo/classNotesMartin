---
tags:
  - Math/EDO
---
# Definición y clasificación
Una ecuación diferencial ordinaria es una ecuación que se expresa con sus derivadas en función de variables independientes.
Ejemplo: $y'=y\cdot 0.2x$. $y$ es la función incógnita o dependiente.
## Clasificación
1. Por tipo:
	1. Ordinaria: la función o las funciones incógnita depende de una variable independiente.
	2. Parcial: la función incógnita o las funciones depende de más variables.
2. Por orden: cantidad de veces que es derivada la función incógnita. El orden de una ecuación diferencial es el orden de la mayor derivada de la ecuación.
3. Por linealidad, una EDO es lineal si cumple dos características:
	1. La función incógnita y sus derivadas son de primer grado (potencia es igual a 1).
	2. Los coeficientes de la función incógnita son constantes o dependen de la variable independiente.
## Campos direccionales
Un campo direccional es el conjunto de los puntos de pendiente de una función mostrando la curva solución de manera gráfica.
- Las EDO's ordinaria en que la variable independiente no aparece explícitamente se llama autónoma. $\frac{dy}{dx}=f(y)$.
## Puntos críticos


# Métodos de solución EDO
## Variables separables
Se puede realizar este método siempre y cuando puedas separar la función incógnita de la variable independiente a cada lado.
**Pasos**:
1. Separar las variables en los lados
2. Integrar en ambos lados y encontrar la función incógnita con una condición inicial.
$$
\begin{aligned}
\frac{dA}{dt} = 0.6-\frac{3A}{125}=\frac{75-3A}{125} \\
\int\frac{dA}{75-3A}=\int \frac{dt}{125} \\
-\frac{1}{3}\ln(75-3A)=\frac{t}{125}+C \\
75-3A = -\frac{3}{125}\cdot C \\
A = 25-Ce^{-3t/125}

\end{aligned}
$$
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



[[Semana01_Teoria_25-1.pdf]]