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
## Vector
```r
edad <- c(14,15,20,15) # Creación de un vector
```
## Manipular datos de Dataframe
```r
# Visualizando los nombres de las columnas:
colnames(DF)
# Cambio de nombre a una variable (columna):
colnames(DF)[12] <- "history"
View(DF)
# Explorando el dataset:
str(DF)
# Número de datos faltantes:
n_datos_faltantes <- sum(is.na(DF))
# Mostrar el número de valores faltantes por columna:
apply(is.na(DF),2,sum)
# Número de filas con datos faltantes:
n_filas_faltantes <- sum(!complete.cases(DF))
# Independizas la variable del data frame
attach(DF)
# Resumen de medidas estadísticas
summary(DF)
# Número de filas
n_filas <- nrow(DF)
# Número de columnas:
n_columnas <- ncol(DF)
```
---
Cuando se quiere agarrar una muestra de una población se usa el muestreo y nos debemos preguntar: ¿Qué?, ¿Quiénes? y ¿Cuántos?. Existen dos tipos de muestreo
1. Probabilístico:
2. No probabilístico:
Estadístico: es una medida que se obtiene de la muestra.
Parámetro: es una medida que se obtiene de la población.
# Medidas de tendencia central
## Media
Se puede reemplazar los datos faltantes en caso que el $CV < 0.3$.
```r
media_edad <- mean(DF$Age)
media_edad <- mean(Age) # Si se uso attach
```
## Mediana
Se puede reemplazar los datos faltantes por la mediana en caso que el $0.3 <CV < 0.6$ o $0.6 < CV$.
```r
mediana_edad <- median(DF$Age)
mediana_edad <- median(Age) # Si se uso attach
```
## Moda
```r
moda_edad <- mfv(DF$Age)
moda_edad <- mfv(Age) # Si se uso attach
```
# Medidas de dispersión
Permiten analizar la variabilidad de un conjunto de datos respecto a las medidas de tendencia central.
## Rango (R)
Es la diferencia entre el máximo y mínimo valor de un conjunto de datos.
```r
rango_peso <- max(Weight)-min(Weight)
```
## Rango Intercuartílico (RI)
Es la diferencia entre el tercer y primer cuartil (Q3 - Q1):
```r
RI_peso <- IQR(Weight)
```
## Varianza (VA)
Es el promedio de desviaciones cuadráticas respecto a la media.
```r
varianza_peso <- var(Weight)
```
## Desviación estándar (DE)
Mide la dispersión de la variable respecto a la media. 
```r
DE_peso <- sd(Weight)
DE_peso1 <- sqrt(varianza_peso)
```
## Coeficiente de variación (CV)
Es la relación entre la desviación estándar y la media. $CV=\frac{DE}{Media}\cdot100\%$
- Si $CV<30\%$, los datos presentan homogenidad (dispersión baja).
- Si $30\%\leq CV<60\%$, los datos presentan una variabilidad regular (dispersión regular).
- Si $CV\geq60\%$, los datos presentan heterogeneidad (dispersión alta).
```r
CV_peso <- (DE_peso/mean(Weight))*100
```
# Medidas de posición (Cuantiles)
Son las medidas que dividen en cantidades iguales la data. Cuartiles, Deciles, Percentiles, Quinteles, Terciles, etc. son ejemplos de medidas de posición. Se usa la d