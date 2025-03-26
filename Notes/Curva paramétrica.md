---
tags:
  - Math/Vectorial
---

# Definición
Una curva $C$ está definida por:
$$
C =\{(x,y,z)\in R^3 / x = x_{(t)}; y = y_{(t)};z = z_{(t)}, t \in [a,b]\}
$$
# Curva Posición, velocidad y aceleración
1. Posición: Definimos la curva $r_{(t(}$ como la curva posición:
$$
r_{(t)} =\{(x,y,z)\in R^3 / x = x_{(t)}; y = y_{(t)};z = z_{(t)}, t \in [a,b]\}
$$
2. Velocidad: Será la derivada de las componentes de la curva posición:
$$
r'_{(t)} =\{(x,y,z)\in R^3 / x = x'_{(t)}; y = y'_{(t)};z = z'_{(t)}, t \in [a,b]\}
$$
3. Aceleración: Será la segunda derivada de las componentes de la curva posición:
$$
r''_{(t)} =\{(x,y,z)\in R^3 / x = x''_{(t)}; y = y''_{(t)};z = z''_{(t)}, t \in [a,b]\}
$$
# Longitud de curva
La longitud de curva de un punto $a$ a un punto $b$ estará representada por la integral del módulo de la curva de velocidad en función del tiempo:
$$
\int_{a}^{b}|r'_{(t)}|dt = \int_{a}^{b}\sqrt{(x'_{(t)})^2+(y'_{(t)})^2} dt  
$$
# Vector Tangente y Vector Normal
- Vector Tangente ($T(t)$):
$$
T_{(t)} = \frac{r'_{(t)}}{|r'_{(t)}|}
$$
- Vector Normal unitario$(N_{(t)})$:
$$
N_{(t)} = \frac{r''_{(t)}}{|r''_{(t)}|} = \frac{T'_{(t)}}{T'_{(t)}}
$$
# Componentes de la aceleración
Componente tangencial de la aceleración: $a_{T}=\frac{v \cdot a}{\|v\|}$
Componente normal de la aceleración: $a_{N}=\frac{\|v \times a\|}{\|v\|}$