#include <iostream>
#include <vector>
#include <chrono>
using namespace std::chrono;

int fibonacci(int n, std::vector<int> memo)
{
    if (memo[n] != -1)
    {
        return memo[n];
    }

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}

int main()
{
    auto start = high_resolution_clock::now();
    int n = 0;
    std::cout << "Ingrese un numero para calcular fibonacci" << std::endl;
    std::cin >> n;
    std::vector<int> memo(n + 1, -1);
    int fibo = fibonacci(n, memo);
    std::cout << "Fibonacci de " << n << " es " << fibo << std::endl;

    // chrono
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    std::cout << "El tiempo de ejecucion es: " << duration.count() << " milisegundos" << std::endl;

    return 0;
}