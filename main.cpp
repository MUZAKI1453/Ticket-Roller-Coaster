#include <iostream>

int main() {
    float height;

    std::cout << "what is your height ?" << std::endl;
    std::cin >> height;

    if (height > 180) {
        std::cout << "can ride" << std::endl;
    } else {
        std::cout << "can't ride" << std::endl;
    }
    return 0;
}
