//Escribir un programa que pida al usuario dos números y los sume. En C++ .


   #include <iostream> 

int main() {
    
    int numero1, numero2;
    int resultado; 

    std::cout << "Ingrese el numero 1: ";
    std::cin >> numero1;

    std::cout << "Ingrese el numero 2: ";
    std::cin >> numero2;

    resultado = numero1 + numero2;

    std::cout << "El resultado de la suma es: " << resultado << std::endl;

    return 0; 
}
