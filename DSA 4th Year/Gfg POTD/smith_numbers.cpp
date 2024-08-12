#include<bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to calculate the sum of digits
int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

// Function to calculate the sum of digits of prime factors
int primeFactorsSum(int num) {
    int sum = 0;
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            sum += digitSum(i);
            num /= i;
        }
    }
    return sum;
}

// Function to check if a number is a Smith number
int smithNum(int n) {
    if (isPrime(n)) {
        return 0; // If n is prime, it cannot be a Smith number
    }

    int digitSumN = digitSum(n);
    int primeSum = primeFactorsSum(n);

    return (digitSumN == primeSum) ? 1 : 0;
}

int main() {
    // Example usage
    int n1 = 4;
    int n2 = 378;

    cout << "Is " << n1 << " a Smith number? " << smithNum(n1) << endl;
    cout << "Is " << n2 << " a Smith number? " << smithNum(n2) << endl;
    int n3=7;
    cout << "Is " << n3 << " a Smith number? " << smithNum(n3) << endl;

    return 0;
}


