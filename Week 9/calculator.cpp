#include <iostream>

enum class Operation{
    Add,
    Subtract,
    Multiply,
    Divide
};

class Calculator{
    private:
        Operation c_operation;
    public:
        Calculator(Operation operation): c_operation(operation){};

        Operation get_operation(){
            return c_operation;
        }

        inline int calculate(int a, int b){
            switch(get_operation()){
                case Operation::Add: {return a + b;}
                case Operation::Subtract: {return a - b;}
                case Operation::Multiply: {return a * b;}
                case Operation::Divide: {return a / b;}
                }
            }
};

int main(){
    Calculator addition(Operation::Add);
    Calculator subtraction(Operation::Subtract);
    Calculator multiplication(Operation::Multiply);
    Calculator division(Operation::Divide);

    std::cout << addition.calculate(1, 2) << std::endl;
    std::cout << subtraction.calculate(1, 2) << std::endl;
    std::cout << multiplication.calculate(8, 7) << std::endl;
    std::cout << division.calculate(12, 4) << std::endl;
}