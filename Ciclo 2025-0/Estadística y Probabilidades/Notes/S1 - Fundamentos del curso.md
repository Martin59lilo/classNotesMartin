Las filas se llaman observaciones o registros y las columnas variables. La observación es la descripción de la unidad de análisis.
Data prolija es data que solo tenga un solo dato en cada celda.
Existen variables numéricas y no numéricas.
# Variables
1. Cualitativas
	1. Nominal: se nombra un valor sin jerarquía.
	2. Ordinal: se nombra una jerarquía.
2. Cuantitativas
	1. Discreta: lo que se puede contar si tiene solo valores enteros.
	2. Continua: algo que se puede medir si tiene valores decimales.
# Análisis descriptivo univariado
Concentración de datos: Es donde aparecen más datos.
La muestra es una parte de la población.
Datos atípicos: hacen que la media sea menos representativa (la afecta significativamente). Cuando hay datos atípicos la mediana es más representativa.
- Frecuencia absoluta simple $(f_{i})$ es cuantas veces un dato aparece.
- Frecuencia relativa simple $(h_{i})$ es cuantas veces aparece el dato respecto al todo. Diagrama circular para porcentajes.
# Comandos
```r
a <- 3
b <- 4
suma <- a+b
resta <- a-b
div <- a/b
mult <- a*b
edad <- c(14,15,20,15) # Creación de un vector
# Media:
media <- mean(edad)
# Mediana
mediana <- median(edad)
#
```
Cuando se quiere agarrar una muestra de una población se usa el muestre y nos debemos preguntar: ¿Qué?, ¿Quiénes? y ¿Cuántos?. Existen dos tipos de muestre
1. Probabilístico:
2. No probabilístico:
Estadístico: es una medida que se obtiene de la muestra.
Parámetro: es una medida que se obtiene de la población.
# Medidas de tendencia central
## Media
## Mediana
## Moda
# Medidas de dispersión
Permiten analizar la variabilidad de un conjunto de datos respecto a las medidas de tendencia central. Ejemplos de ello son: Rango, Rango Intercuartil, Varianza, Desviación estándar, Coeficiente de variación, etc.
