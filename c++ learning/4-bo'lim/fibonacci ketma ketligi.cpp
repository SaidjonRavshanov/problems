#include <iostream>

using namespace std;

int Fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

void PrintFibonacciUpTo(int limit) {
    int i = 0;
    int fib;
    while ((fib = Fibonacci(i)) <= limit) {
        cout << fib << " ";
        i++;
    }
}

int main() {
    int limit = 1000;
    PrintFibonacciUpTo(limit);
    return 0;
}

