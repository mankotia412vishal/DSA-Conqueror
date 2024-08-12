#include <iostream>

bool isSymmetric(int x) {
    // Convert the integer to a string for easier digit manipulation
    std::string str = std::to_string(x);
    int n = str.length();

    // Check if the number of digits is even
    if (n % 2 != 0) {
        return false;
    }

    int leftSum = 0;
    int rightSum = 0;

    // Calculate the sum of the left and right halves
    for (int i = 0; i < n / 2; i++) {
        leftSum += (str[i] - '0');
        rightSum += (str[n - i - 1] - '0');
    }

    // Check if the sums are equal
    return leftSum == rightSum;
}

int countSymmetricIntegers(int low, int high) {
    int count = 0;

    for (int i = low; i <= high; i++) {
        if (isSymmetric(i)) {
            count++;
        }
    }

    return count;
}

int main() {
    int low = 1, high = 100;
    int result = countSymmetricIntegers(low, high);
    std::cout << "Count of symmetric integers between " << low << " and " << high << ": " << result << std::endl;

    return 0;
}
