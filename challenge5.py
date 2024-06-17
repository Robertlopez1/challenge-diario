# Crear un Diccionario: Escribe un programa que cree un diccionario a partir de dos listas dadas: una de claves y otra de valores:

# Solicitar al usuario que ingrese la lista de claves
lista = input("Ingrese una lista separada por comas")

# Solicitar al usuario que ingrese la lista de valores

valores_entrada = input("Favor ingresar valores separadas por comas")

claves = lista.split(',')
valores = valores_entrada.split(',')

diccionario = dict(zip(claves, valores))

print("Diccionario creado", diccionario)