#include <iostream> 

int main() {
    int edad = 0; 
    std::cout << "Por favor, ingrese su edad y le diremos a que grupo pertenece" << std::endl;
    std::cin >> edad;
    if(edad <= 12){
        std::cout << "Primera edad";
    }else if(edad > 12 && edad <= 40){
        std::cout << "Segunda edad";
    }else if(edad > 40 && edad <= 70){
        std::cout << "Tercera edad";
    }else {
        std::cout << "Cuarta edad";
    }

    return 0; 
}