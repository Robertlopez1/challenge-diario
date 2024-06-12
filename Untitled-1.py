

def invertir_cadena_recursiva(cadena):
    if len(cadena) == 0:
        return cadena
    else:
        return cadena[-1] + invertir_cadena_recursiva(cadena[:-1])

# Solicitar entrada al usuario
cadena = input("Introduce una cadena de caracteres: ")
cadena_invertida = invertir_cadena_recursiva(cadena)
print(f"La cadena invertida es: {cadena_invertida}")