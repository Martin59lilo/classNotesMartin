---
tags:
  - Math/EDO
date / time: 2025-03-24T21:38:00
Status: false
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
En EDO's autónomas los puntos críticos o puntos de equilibrio son cuando igualamos la derivada a 0 $\frac{dy}{dx}=0$. 
Los puntos críticos de una función separan el campo en partes. En la línea de fase podemos trazar las pendientes y su signo nos van a mostrar hacia dónde apuntan (EDO's autónomas):
- Atractores o Estable: las regiones se encuentran en el punto crítico
- Repulsores o Inestable: las regiones se repelen en el punto crítico
- Semiestable: Una región atrae y la otra repele en el punto crítico.

# Métodos de solución EDO
## Variables separables
Se puede realizar este método siempre y cuando puedas separar la función incógnita de la variable independiente a cada lado de la ecuación. *Encontrar soluciones perdidas*.
**Pasos**:
1. Separar las variables en los lados
2. Integrar en ambos lados y encontrar la función incógnita con una condición inicial.
$$
\begin{aligned}
\frac{dy}{dx} &= xe^{-x^{2}},y(3)=5 \\
\int dy &= \int xe^{-x^{2}}dx \\
u = -x^{2}, du&=-2xdx, dx=-\frac{du}{2x} \\
y &= -\frac{1}{2}\int \frac{xe^{u}du}{x}du \\
y &= -\frac{1}{2}e^{-x^{2}}+C \\
y &= -\frac{1}{2}e^{-x^{2}}+5+\frac{1}{2}e^{-9}
\end{aligned}
$$
# References
- [[Semana01_Teoria_25-1.pdf]]