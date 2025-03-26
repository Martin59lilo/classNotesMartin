---
tags:
  - Math/MD2
---
# Definiciones
Es un [[Conjunto parcialmente ordenado (CPO)]] donde todos los elementos del conjunto tienen ínfimo y supremo.
En un retículo podemos tener los operadores:
- $\lor$: supremo de $\{a,b\}$
- $\land$: ínfimo de $\{a,b\}$
# Propiedades de los retículos:
- Acotado: Un retículo es acotado si tiene máximo y mínimo. (Elemento máximo lo denotamos como 1 y el elemento mínimo lo denotamos como 0)
- Complementario: Un retículo es complementado si todos los elementos del retículo tienen elemento complementario.
  *Observación: $a'$ es complementario si $a \lor a' = 1$ y $a \land a' = 0$.*
- Distributivo: Un retículo es distributivo si para todo $a,b,c \in A$ se cumple que: $a \lor (b\land c) = (a \lor b)\land(a \lor c)$, $a \land (b \lor c) = (a \land b) \lor (a \land c)$.
## Teoremas de los retículos
- Todo retículo finito es acotado.
- En un retículo acotado y distributivo, el complementario de cada elemento es único.