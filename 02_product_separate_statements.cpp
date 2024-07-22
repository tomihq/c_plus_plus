//Dado dos números, devuelva la multiplicación de ellos. Los números deben ser tomados por entrada de teclado. Las operaciones de cin y cout deben ser atómicas.
#include <iostream>

int main(){
    int n1 = 0, n2 = 0;
    std::cout << "Ingrese el par de numeros que desea multiplicar" << std::endl;
    std::cin >> n1;
    std::cin >> n2;
    std::cout << "El resultado de la multiplicacion de los numeros: ";
    std::cout << n1;
    std::cout << " y "; 
    std::cout << n2;
    std::cout << " es ";
    std::cout << n1 * n2;
    return 0; 
}