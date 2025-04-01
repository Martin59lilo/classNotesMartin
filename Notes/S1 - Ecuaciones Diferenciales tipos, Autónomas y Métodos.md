---
tags:
  - Math/EDO
date / time:
---
> [!abstract] Abstract
> Contents

---
# Repaso de integrales
1. Integral de polinomios
   $$
\int x^{n}dx=\frac{x^{n+1}}{n+1}+C
$$
2. Integral de $\ln(x)$
   $$
\int x^{-1}dx=\ln(x)+C
$$
3. Integrales trigonométricas
   $$\begin{aligned}
\int \sin(x)dx &= -\cos(x)+C \\
\int \cos(x)dx &= \sin (x)+C \\
\int \frac{1}{1+x^{2}}dx &= \arctan(x)+C
\end{aligned}
$$
4. Integral de $\frac{f'(x)}{f(x)}$
	$$
\int \frac{f'(x)}{f(x)}dx=\ln(f(x))+C
$$
5. Integral por cambio de variable

$$
\int (x+3)^{100}dx $$
$$
u = x+3; du=1\cdot dx \\
$$
$$\int u^{100}du =\frac{u^{101}}{101}+C=\frac{(x+3)^{101}}{101}+C
$$


6. Integral por partes
   
7. Integral por fracciones parciales


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
Un campo direccional es el conjunto de los puntos de pendiente de una función mostrando una aproximación de la curva solución de manera gráfica sin resolver la ecuación diferencial.
- Las EDO's ordinaria en que la variable independiente no aparece explícitamente se llama autónoma. $\frac{dy}{dx}=f(y)$.
## Puntos críticos
Los puntos críticos de una función separan el campo en partes. 
- Atractores:
- Repulsores:
- Inestables:

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

# References
- [[Semana01_Teoria_25-1.pdf]]