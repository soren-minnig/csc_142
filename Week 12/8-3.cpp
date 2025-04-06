#include "8-1-1.h"
#include "8-1-2.h"
#include "8-2.h"

#include <iostream>

int main(){
    std::cout << "Fibonacci: ";
    for (const auto &i : FibonacciRange{5000}){
        std::cout << i << ' ';
    }

    std::cout << "\n";

    PrimeNumberRange prime {5000};
    std::cout << "Prime: ";
    std::cout << prime.getCurrent() << ' ';

    while (true){
        int n{++prime};
        if (n < 0) return true;

        std::cout << n << ' ';
    }

    return 0;

}