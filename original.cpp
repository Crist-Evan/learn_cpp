#include <iostream>

int main(){

    //This Comment Selection!

    /*
        Multiline
        Comment
        WOW!
    */

    /* Output ex.
    std::cout << "I Like Milk!" << '\n';
    std::cout << "It's Very Nice!" << '\n';
    */

    // int = number
    int item = 50;

    // double = decimal number
    double price = 9.99;
    double total = item * price;

    // char = single character
    char quality = 'A';

    // bool = true or false
    bool customer = false;

    // string = text
    std::string food = "Super Milk";

    //const = cannot change by any variable (UPPERCASE)
    const double PHI = 3.14159265358979323846;
    const int RADIUS = 100;
    const double AREA = 2 * PHI * RADIUS;

    std::cout << '\n';
    std::cout << "Store Area : " << AREA << "m^2" << '\n';
    std::cout << '\n';
    std::cout << "Food : " << food << '\n';
    std::cout << "Quality : " << quality << '\n';
    std::cout << "Stock : " << item << '\n';
    std::cout << "Price : " << price << '$' << '\n';
    std::cout << "Total (All) : " << total << '$' << '\n';

    return 0;

}