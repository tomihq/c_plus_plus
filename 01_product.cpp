//Dado dos números, devuelva la multiplicación de ellos. Los números deben ser tomados por entrada de teclado.
#include <iostream>

int main(){
    int n1 = 0, n2 = 0;
    std::cout << "Ingrese el par de numeros que desea multiplicar" << std::endl;
    std::cin >> n1 >> n2;
    std::cout << "El resultado de la multiplicacion de los numeros: " << n1 << " y " << n2 << " es " << n1 * n2;
    return 0; 
}