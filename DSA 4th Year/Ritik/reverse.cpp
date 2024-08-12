#include <iostream>
#include <string>

int main() {
    std::string str = "Hello World!";
    int sum = 0;
    for (char c : str) {
        sum += static_cast<int>(c);
    }
    std::cout << "Sum of ASCII values: " << sum << std::endl;
    return 0;
}