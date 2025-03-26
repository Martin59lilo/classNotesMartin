---
tags:
  - Math/Vectorial
---
# Integrales iteradas
$$
V = \int \int_{R}f_{(x,y)}dA=\int^{a}_{b}\int^{d}_{c}f_{(x,y)}dy dx
$$
- Para hallar el área de una región plana siempre el integrando será la unidad $f_{(x,y)} = 1$.
# Tipos de dominio
1. Dominio rectangular: $\int_{a}^{b}\int_{c}^{d}f_{(x,y)}dydx = \int_{c}^{d}\int_{a}^{b}f_{(x,y)}dxdy$
2. $x$ constante y funciones distintas: $\int_{a}^{b}\int_{g_{(x)}}^{h_{(x)}}f_{(x,y)}dydx$
3. $y$ constante y funciones distintas: $\int_{c}^{d}\int_{g_{(y)}}^{h_{(y)}}f_{(x,y)}dxdy$
## Pasos para hacer una integral doble:
1. Graficar las funciones y encontrar el área que la encierra.
2. Hallar los límites de la figura
3. Plantear la doble integral y resolver
# Coordenadas polares
Las coordenadas cartesianas de un punto en coordenadas polares es: 
$$
(x,y)=(r,\theta)
$$
$r = \sqrt{x^{2}+y^{2}}$, $\theta=\tan ^{-1}\left( \frac{y}{x} \right)$, $x=r\cos \theta$, $y = r\sin \theta$.
- Doble integral en coordenadas polares:
  $$
\int \int_{D}f_{(x,y)}dA=\int \int_{P}f_{(r\cos \theta,r\sin \theta)}rdrd\theta
$$
Área de una superficie:
$$
\int \int_{A}\sqrt{ f_{x}^{2}+f_{y}^{2} +1}dA
$$