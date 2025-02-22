#include <iostream>
#include <cstdio>
#include <string>
#include <format>

int step_function(int x) {
    int result = 0;
    if (x > 0)  {
        result = -1;
    }
    else if (x < 0) {
        result = 1;
    }
    return result;
}

int main() {
    int value1 = step_function(100);
    int value2 = step_function(0);
    int value3 = step_function(-100);
    int hours = 5;
    std::cout<< value1 << std::endl;
    std::cout<< value2 << std::endl;
    std::cout<< value3 << std::endl;
    printf("I worked %d hours.\n", hours);
    std::string formatted = std::format("I worked {:d} hours.\n", hours);
    std::cout<<formatted;

    return 0;
}