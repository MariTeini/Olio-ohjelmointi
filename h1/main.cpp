#include <iostream>

int calcSum(int a, int b) {
    return a + b;  // Returns the sum of a and b
}

int calcDiv(int a, int b) {
    if (b != 0) {
        return a / b;  // Returns the result of a divided by b
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
        return 0;  // Return 0 if division by zero occurs
    }
}

int main() {
    int a, b;



    std::cout << "Give the first number: ";
    std::cin >> a;


    std::cout << "Give the second number: ";
    std::cin >> b;


    int sum = calcSum(a, b);
    std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl;


    if (b != 0) {
        int division = calcDiv(a, b);
        std::cout << "The division of " << a << " by " << b << " is " << division << std::endl;
    }

    return 0;
}
