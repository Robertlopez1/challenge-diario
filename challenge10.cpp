#include <iostream>
#include <string>
#include <cctype> // Para std::tolower y std::isspace
using namespace std;

// Función para limpiar la cadena de caracteres (eliminar espacios y convertir a minúsculas)
string cleanString(const string& str) {
    string cleaned;
    for (char c : str) {
        if (!isspace(c)) { // Ignorar espacios
            cleaned += tolower(c); // Convertir a minúsculas
        }
    }
    return cleaned;
}

// Función para verificar si una cadena es un palíndromo
bool esPalindromo(const string& str) {
    string cleanedStr = cleanString(str);
    int left = 0;
    int right = cleanedStr.length() - 1;

    while (left < right) {
        if (cleanedStr[left] != cleanedStr[right]) {
            return false; // No es un palíndromo
        }
        ++left;
        --right;
    }
    return true; // Es un palíndromo
}

int main() {
    string cadena;
    cout << "Ingrese una cadena de caracteres: ";
    getline(cin, cadena);

    if (esPalindromo(cadena)) {
        cout << "'" << cadena << "' es un palíndromo." << endl;
    } else {
        cout << "'" << cadena << "' no es un palíndromo." << endl;
    }

    return 0;
}
