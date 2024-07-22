#include <iostream>

int main(){
    int sum = 0;
    int i = 0; 
    while(i<=100){
        sum+=i;
        ++i;
    }
    std::cout << "La suma de los primeros 100 numeros es " << sum << std::endl;
    return 0;
}