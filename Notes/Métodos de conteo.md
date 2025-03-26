---
tags:
  - Math/MD2
---
# Principio de la suma
Ocurren al mismo tiempo y son $t$ etapas independientes. $n_{1}n_{2}\dots n_{t}$
# Principio del producto
Ocurren por separado y son $t$ opciones distintas de realizarlo. $n_{1}+n_{2}+\dots+n_{t}$
## Permutación
Es ordenar $n$ elementos en grupos de tamaño $k$. Sí importa el orden.
$P^n_k=\frac{n!}{(n-k)!}$
- Permutación con repetición
	Se da cuando hay repetición de elementos.
	$P^{n}_{k_{1},k_{2},\dots,k_{n}}=\frac{n!}{k_{1}!k_{2}!\dots k_{n}!}$
- Permutación circular
	$P^{n}=(n-1)!$
Observación:
Para hallar la cantidad de números en conjuntos usamos el principio de inclusión y exclusión: $|A \cup B| = |A|+|B|-|A \cap B|$
# Combinación
Son $n$ elementos distintos tomados en grupos de tamaño $r$. No importa el orden. 
$C^{n}_{r}=\frac{n!}{r!(n-r)!}$
