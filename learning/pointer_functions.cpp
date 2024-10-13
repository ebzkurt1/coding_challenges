# include <iostream>

int Add(int *a, int *b) {
    return *a + *b;
}


void AddVal(int *a, int *b, int *result) {
    *result = *a + *b;
}


void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


void Factorial(int *a, int* result) {
    if (*a <= 1) {
        *result = 1;
        return;
    }
    int temp = 1;
    for (int i = 1; i <= *a; i++)
        temp = temp * i;
    *result = temp;
}


int main() {
    int a = 5;
    int b = 10;
    int result = Add(&a, &b);
    std::cout << a << " + " << b << " = " << result << std::endl;

    int c = 5;
    int d = 10;
    result = 0;
    AddVal(&c, &d, &result);
    std::cout << c << " + " << d << " = " << result << std::endl;

    Swap(&a, &b);
    std::cout << a << " + " << b << " = " << result << std::endl;

    int f = 5;
    Factorial(&f, &result);
    std::cout << f << "! = " << result << std::endl;

    return 0;
}