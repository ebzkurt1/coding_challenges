#include <iostream>


void Add (int a, int b, int &result) {
    // Add two numbers an return the result through a reference parameter
    result = a + b;
}


void Factorial (int a, int &result) {
    // Find factorial of a number and return that through a reference parameter
    if (a <= 1) {
        result = 1;
        return;
    }
    result = 1;
    for (int i = 1; i <= a; i++) {
        result = result * i;
    }
}


void Swap (int &a, int &b) {
    // Swap a and b
    int temp = a;
    a = b;
    b = a;
}


int main() {
    int a = 5;
    int b = 10;
    int result = 0;
    Add(a, b, result);
    std::cout << a << " + " << b << " = " << result << std::endl;

    Swap(a, b);
    std::cout << a << " + " << b << " = " << result << std::endl;

    int f = 5;
    Factorial(f, result);
    std::cout << f << "! = " << result << std::endl;
    return 0;
}