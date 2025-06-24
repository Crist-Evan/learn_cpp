#include <iostream>
#include <cmath>

int main(){

    double x;
    double y;
    double z;

    std::cout << "Input A side: ";
    std::cin >> x;
    std::cout << "Input B side: ";
    std::cin >> y;

    z = sqrt(pow(x, 2) + pow(y, 2));
    std::cout << "The C side: " << z;

    return 0;
}