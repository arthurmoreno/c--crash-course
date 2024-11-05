#include <cstdio>

int absolute_value(int x) {
    // Your code here
    if (x >= 0) return x;
    else {
        return -x;
    }
}

int sum(int a, int b) {
    return a + b;
}

int main() {
    int my_num = 0;
    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));

    int b = 10;
    printf("The sum of %d and %d is %d.\n", my_num, b, sum(my_num, b));
    
}