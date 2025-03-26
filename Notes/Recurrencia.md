---
tags:
  - Math/MD2
---
# Recurrencia lineal homogénea de orden $k$
$$
a_{n}=r_{1}a_{n-1}+r_{2}a_{n-2}+\dots+r_{k}a_{n-k}
$$
- $r_{n}$ son constantes y $k$ es el orden de la recurrencia "*el orden es hasta cuántos retrocede $n$*".
## Ecuación característica
$$
x^{k}=r_{1}x^{k-1}+r_{2}x^{k-2}+\dots+r_{k}x^{k-k}
$$
- $r_{n}$ son constantes y $k$ es el orden de la recurrencia.
### Recurrencia lineal homogénea de orden 1
$$
a_{n} = c \cdot a_{n-1}
$$
Solución general:$a_{n}=c^{n}a_{o}$
### Recurrencia lineal homogénea de orden 2
$$
a_{n}=c_{1}a_{n-1}+c_{2}a_{n-2}
$$
Ecuación característica: $x^{2}=c_{1}x+c_{2}$
Solución general:
- $a_{n}=AS_{1}^{n}+BS_{2}^{n}$, $S_{1}$ y $S_{2}$ son raíces diferentes.
- $a_{n}=S_{1}^{n}(An+B)$, $S_{1}$ es la única raíz ya que son raíces iguales.
# Relación de recurrencia no homogénea
Sea la relación de recurrencia:
$$
a_{n}+r_{1}a_{n-1}+r_{2}a_{n-2}+\dots+r_{k}a_{n-k}=g(n)
$$
La solución general viene a ser:
$$
a_{n}=a_{n}^{h}+a_{n}^{p}
$$
$a_{n}^{h}$: es la solución asociada a una recurrencia homogénea sin tomar en cuenta la parte no homogénea.
$a_{n}^{p}$: es la solución particular.
$$
a_{n}^{(p)}=p(n)\cdot b^{n}\cdot n^{s}
$$
$p(n)$: polinomio de cierto grado.
$b^{n}$: coeficiente al grado $n$.
Si $b$ es raíz de la ecuación característica de $a_{n}$ entonces $s$ es la multiplicidad de la raíz, caso contrario, $s$ es 0.

$$
a_{n}=2^{n}\left( \frac{11n}{2}+6 \right)+n^{2}2^{n}\left( 6n-\frac{33}{2} \right)
$$
