#ifndef FIBONACCIRANGE_H
#define FIBONACCIRANGE_H

#include "8-1-1.h"

class FibonacciRange{
    private:
        const int max;
    public:
        explicit FibonacciRange(int max) : max{max}{}

        FibonacciIterator begin() const{
            return FibonacciIterator{};
        }

        int end() const{
            return max;
        }
};

#endif