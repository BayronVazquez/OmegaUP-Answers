#include <iostream>

int main() {
    int numero;

    // Solicitar el número al usuario
    std::cin >> numero;

    // Verificar si el número es divisible por 3
    if (numero % 3 == 0) {
        std::cout << "Si"<< std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}