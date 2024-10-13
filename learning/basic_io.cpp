#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;
    std::cout << "This is a test" << 48 << 56 << std::endl;

    // Reading an input integer from the user
    int age;
    std::cout << "How old are you? ";
    std::cin >> age;
    std::cout << "You are " << age << " years old" << std::endl;

    // Reading a string from the user
    char buff[100];
    std::cout << "What is your name? ";
    std::cin >> buff;
    std::cout << "Your name is " << buff << std::endl;

    // Alternative string reading
    char full_name[100];
    std::cout << "What is your full name? ";
    std::cin.getline(full_name, 100, '\n');
    std::cout << "Your full name is " << full_name << std::endl;
    return 0;
}