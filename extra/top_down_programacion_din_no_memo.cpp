#include <iostream>
#include <vector>
#include <chrono>
using namespace std::chrono;

long long fibonacci(int n)
{
    
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    auto start = high_resolution_clock::now();
    int n = 0;
    std::cout << "Ingrese un numero para calcular fibonacci" << std::endl;
    std::cin >> n;
    long long fibo = fibonacci(n);
    std::cout << "Fibonacci de " << n << " es " << fibo << std::endl;

    // chrono
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "El tiempo de ejecucion es: " << duration.count() << " milisegundos" << std::endl;

    return 0;
}