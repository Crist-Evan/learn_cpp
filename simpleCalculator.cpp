#include <iostream>

int main() {

    char op;
    double x;
    double y;
    double z;

    std::cout << "================== CALCULATOR ==================\n";

    std::cout << "Put the operation ('+','-','*','/'): ";
    std::cin >> op;
    std::cout << "Put first number: ";
    std::cin >> x;
    std::cout << "Put second number: ";
    std::cin >> y;
    
    switch (op)
    {
    case '+':
        z = x + y;
        std::cout << "Result: " << z << '\n';
        break;
    case '-':
        z = x - y;
        std::cout << "Result: " << z << '\n';
        break;
    case '*':
        z = x * y;
        std::cout << "Result: " << z << '\n';
        break;
    case '/':
        z = x / y;
        std::cout << "Result: " << z << '\n';
        break;
    default: 
        std::cout << "Please use only ('+','-','*','/') \n" ;
        break;
    }

    std::cout << "================================================\n";

    return 0;
}