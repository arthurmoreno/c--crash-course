#include <cstdio>

enum class Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

struct Calculator {
    Operation operation;
    Calculator (Operation op) { 
        operation = op;
    }

    int calculate(int a, int b) {
        switch (operation)
        {
            case Operation::ADD: {
                return a + b;
                break;
            }
            case Operation::SUBTRACT: {
                return a - b;
                break;
            }
            case Operation::MULTIPLY: {
                return a * b;
                break;
            }
            case Operation::DIVIDE: {
                return a / b;
                break;
            }
            
            default: {
                printf("Not supported operation\n");
                return 0;
            }
        }
    }
};

int main() {
    Calculator calculator{ Operation::ADD };
    // Calculator calculator = { Operation::ADD };
    // Calculator calculator(Operation::ADD);

    int result = calculator.calculate(10, 20);

    printf("Result is %d", result);
    return 0;
}