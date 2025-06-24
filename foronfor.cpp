#include <iostream>

int main() {

    char symbol;
    int column;
    int rows;

    std::cout << "How many column: ";
    std::cin >> column;
    std::cout << "How many rows: ";
    std::cin >> rows;
    std::cout << "what symbol: ";
    std::cin >> symbol;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= column; j++) {
            std::cout << symbol << ' ';
        }
        std::cout << '\n';
    }

    return 0;
}