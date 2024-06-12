
#Tabla de Multiplicar: Escribe un programa que muestre la tabla de multiplicar de un número dado por el usuario.

numero = int(input("Introduce un número para mostrar su tabla de multiplicar: "))
i = 0
while i <= 10:  
    resultado = numero * i
    print(f"{numero} x {i} = {resultado}")
    i += 1  
