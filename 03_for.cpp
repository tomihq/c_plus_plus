#include <iostream>

int main(){
    int sum = 0;
    for(int i = 0; i<=100; i++){
        sum+=i;
    }
    std::cout << "La suma de los primeros 100 numeros es " << sum << std::endl;
    return 0;
}