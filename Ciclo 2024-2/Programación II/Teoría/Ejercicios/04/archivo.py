import numpy as np
import matplotlib.pyplot as plt

# Parámetros
L = 2 * np.pi  # Período de la onda cuadrada
x = np.linspace(0, 2*L, 1000)  # Valores de x en el intervalo de un período

# Cálculo de la onda cuadrada aproximada usando los primeros cinco términos impares
y = (4 / np.pi) * (np.sin(2 * np.pi * x / L) +
                   (1/3) * np.sin(6 * np.pi * x / L) +
                   (1/5) * np.sin(10 * np.pi * x / L) +
                   (1/7) * np.sin(14 * np.pi * x / L) +
                   (1/9) * np.sin(18 * np.pi * x / L))

# Graficar la onda cuadrada aproximada
plt.plot(x, y, label="Aproximación de la onda cuadrada (5 términos)")
plt.title("Expansión de Fourier de una Onda Cuadrada")
plt.xlabel("x")
plt.ylabel("y(x)")
plt.grid(True)
plt.legend()
plt.show()