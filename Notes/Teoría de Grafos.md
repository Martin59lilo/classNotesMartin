---
tags:
  - Math/MD2
---
Un grafo se define $G=(V,E)$ donde $V$: conjunto de vértices; $E$: conjunto de aristas.
# Grafos no dirigidos
## Grado de un vértice en grafos no dirigidos
El grado de un vértice es el número de aristas que inciden en el vértice. *Observación: un lazo incide dos aristas al vértice y contribuye 2 unidades al grado de un vértice*
**Teorema apretón de manos**: $2m = \sum grad(v)$. $m$: número de aristas. Así mismo, el grado total de un grafo es par.
**Teorema**: Un grafo no dirigido tiene un número par de vértices de grado impar.
## Trayectorias, caminos y circuitos en grafos
- Trayectoria: es una secuencia de vértices adyacentes unidos por aristas y su longitud es el número de aristas utilizadas.
- Camino: es una trayectoria que usa vértices distintos, no repite vértices.
- Circuito o ciclo: es un camino donde el primer y último vértice son iguales solo esa repetición de vértices es la que ocurre.
Propiedad: si $a$ y $b$ están unidos por una trayectoria entonces están unidos por un camino
# Grafo dirigido o digrafo
## Grado de un vértice en grafos dirigidos
- Grado de entrada: $grad^{-}v$: número de aristas que inciden en $v$.
- Grado de salida: $grad^{+}v$: número de aristas que nacen de $v$
**Grado de un vértice**: $\sum grad^{-}(v)=\sum grad^{+}(v)=E$, $E$: número de aristas.
# Tipos de grafos
1. Grafo conexo:
   Es un grafo si dados cualesquiera dos vértices $v$ y $w$, existe un camino de $v$ a $w$. De caso contrario, se dice que el grafo es disconexo.
2. Grafos simples:
   Sólo hay una arista entre los vértices como máximo, no hay bucles o lazos.
	   1. Grafos completos: 
	   2. Grafos ciclo:
	   3. Grafos rueda:
	   4. N-cubo:
	   5. Grafos bipartidos:
	   6. Grafos bipartidos completos:
# Representación computacional
