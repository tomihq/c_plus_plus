#include <iostream>

int main() {
    int value = 0, sum = 0;
    std::cout << "Por favor, al ingresar un numero presione enter para poder ingresar el siguiente. Para finalizar, ejecute el end of file";
    while(std::cin >> value){
        sum+=value;
    }

    std::cout << "La suma de los numeros ingresados es: " << sum;
    return 0;
}