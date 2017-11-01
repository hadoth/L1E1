#include <iostream>

unsigned int power(unsigned int x, unsigned int n) {
    unsigned int partialPower;

    if (n == 0) {
        return 1;
    } else {
        partialPower = power(x, n/2);
        if (n%2 == 0){
            return partialPower * partialPower;
        } else {
            return x * partialPower * partialPower;
        }
    }
}

int main() {
    unsigned int x;
    unsigned int n;
    bool cont = true;
    bool askAgain = true;
    std::string val = "f";
    std::cout << "This script calculates the value of x^n"<< std::endl;
    while (cont) {
        std::cout << "Please provide value of x: ";
        std::cin >> x;
        std::cout << "Please provide value of n: ";
        std::cin >> n;
        std::cout << power(x, n) << std::endl;

        do {
            std::cout<< "Do you like to continue? [y/n]";
            std::cin >> val;
            cont = val == "y";
            askAgain = (val != "y" && val !="n");
            if (askAgain) {
                std::cout<< "Command \"" << val << "\" not recognized." << std::endl;
            }
        } while (askAgain);
    }

    return 0;
}