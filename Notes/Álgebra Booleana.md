---
tags:
  - Math/MD2
---
# Definición
Por retículo: Es una [[Retículos]] acotada, complementada y distributiva.
Por álgebra:
- Operador (+) "supremo"
- Operador ($\cdot$) "ínfimo"
## Axiomas de álgebra booleana
1. $a+b  = b+a$ y $a \cdot b = b \cdot a$
2. $(a+b)+c=a+(b+c)$ y $(a \cdot b) \cdot c = a \cdot (b \cdot c)$
3. $a+(b \cdot c) = (a+b) \cdot (a+c)$ y $a \cdot(b+c)= (a \cdot b) + (a \cdot c)$
4. $a+0 = a$ y $a \cdot 1 = a$
5. $a + \overline a = 1$ y $a \cdot \overline a = 0$
## Propiedades de álgebra booleana
1. $\forall a, \exists$ solo un $\overline a$.
2. $\overline{(\overline{a})}=a$
3. $a+a =a$ , $a \cdot a = a$
4. $a+1 = 1$, $a \cdot 0 = 0$
5. $\overline{a+b}=\overline a \cdot \overline b$ , $\overline{a \cdot b}=\overline a + \overline b$
# Funciones booleanas
Dado $B = \{0,1\}$ una función booleana se define como: $F:B^{n} \rightarrow B$. Solo toma valores de 0 y 1 y devuelve un único valor booleano.
- **Mintérminos**(1): es un producto de todas las variables que da como resultado 1.
- **Maxtérminos**(0): es una suma de todas las variables que da como resultado 0.
Se puede expresar las funciones booleanas usando mintérminos y maxtérminos:
1. FND (suma de mintérminos): las filas con salidas igual a 1 deben ser representadas como mintérminos y la FND es el resultado de la suma de todos los mintérminos.
   En la FND se puede expresar con un código (1 o 0): $x, y, z = 1$ y $\overline x,\overline y, \overline z = 0$.
   Nos quedará un número binario y lo convertimos a un número en base decimal y tendremos el código relacionado a la FND de cada expresión boolena. La función booleana se puede expresar con los códigos de cada expresión $(a_{1},a_{2},\dots,a_{n})$:
   $$
\sum_{m}(a_{1},a_{2},\dots,a_{n})
$$
2. FNC (producto de maxtérminos): las filas con salidas igual a 0 deben ser representadas como maxtérminos y la FNC es el resultado del producto de éstos maxtérminos.
   En la FND se puede expresar con un código (1 o 0): $x,y,z=0$ y $\overline x,\overline y,\overline z=1$.
   Nos quedará un número binario y convertimos a un número en base decimal y tendremos el código relacionado a la FND de cada expresión booleana. La función booleana se puede expresar con los códigos de cada expresión $(a_{1},a_{2},\dots,a_{n})$:
   $$
   \prod_{m}(a_{1},a_{2},\dots,a_{n})
$$
Relación entre FND y FNC: $f(x_{1},x_{2},\dots ,x_{n})=\sum_{m}(a_{1},a_{2},\dots,a_{n})=\prod_{m}(b_{1},b_{2},\dots,b_{n})$
$b_{1},b_{2},\dots,b_{n}$: son los elementos que le falta a la FNC para completar todas las expresiones.
# Mapas de Karnaugh K-maps
Son diagramas rectangulares que se usan para simplificar funciones booleanas, las celdas adyacentes difieren en solo una variable. Se convierte la expresión en suma de mintérminos (FND)
Reglas de simplificación:
- Se agrupan únicamente los 1 con rectángulos de tamaño $2^{n}$ y deben ser horizontales o verticales. En ningún grupo hay un 0.
- Cada grupo debe ser tan grande como sea posible.
- Los grupos pueden superponerse, todos los 1 pueden estar en un rectángulo.
- Los grupos pueden salir de la tabla y se producen con las celdas extremas.
Las celdas escogidas son las que quedarán como simplificación y en forma de suma de productos.
EJEMPLO DE SIMPLIFICACIÓN BOOLEANA CON K-MAPS:
![[Ejemplo de K-map.png]]