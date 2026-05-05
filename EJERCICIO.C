def calculadora():
    try:
        # Captura de datos
        n1 = float(input("Ingresa el primer número: "))
        n2 = float(input("Ingresa el segundo número: "))

        print("\n--- Resultados ---")
        
        # Operaciones básicas
        print(f"Suma: {n1 + n2}")
        print(f"Resta: {n1 - n2}")
        print(f"Multiplicación: {n1 * n2}")
        
        # División y derivados (validando división por cero)
        if n2 != 0:
            print(f"División: {n1 / n2}")
            print(f"Cociente (División entera): {n1 // n2}")
        else:
            print("División/Cociente: No se puede dividir por cero.")

        # Potencia
        print(f"Potencia ($n1^{{n2}}$): {n1 ** n2}")

        # Comparaciones
        if n1 > n2:
            print(f"Comparación: {n1} es mayor que {n2}")
        elif n1 < n2:
            print(f"Comparación: {n1} es menor que {n2}")
        else:
            print(f"Comparación: Ambos números son iguales")

        # Impresión de rango (Ciclo)
        print(f"\nSerie desde {n1} hasta {n2}:")
        
        # Convertimos a entero para el rango
        inicio = int(n1)
        fin = int(n2)
        
        if inicio <= fin:
            for i in range(inicio, fin + 1):
                print(i, end=" ")
        else:
            # En caso de que el primer número sea mayor, imprimimos hacia atrás
            for i in range(inicio, fin - 1, -1):
                print(i, end=" ")
        print() # Salto de línea final

    except ValueError:
        print("Error: Por favor, ingresa solo números válidos.")

# Ejecutar la calculadora
calculadora()