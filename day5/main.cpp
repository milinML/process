#include <iostream>

void changeValue(int num) {
    num = 100;
    std::cout << "Inside function: " << num << std::endl;
}

int main() {
    int value = 50;
    changeValue(value);
    std::cout << "Outside function: " << value << std::endl;
    return 0;
}