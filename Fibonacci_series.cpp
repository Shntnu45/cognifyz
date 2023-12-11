#include <iostream>
using namespace std;

void generateFibonacci(int terms) {
    int first = 0, second = 1, nextTerm;

    std::cout << "Fibonacci Series up to " << terms << " terms: ";

    for (int i = 0; i < terms; ++i) {
        if (i <= 1)
            nextTerm = i;
        else {
            nextTerm = first + second;
            first = second;
            second = nextTerm;
        }
        std::cout << nextTerm << " ";
    }
    std::cout << std::endl;
}

int main() {
    int numberOfTerms;

    std::cout << "Enter the number of terms for the Fibonacci series: ";
    std::cin >> numberOfTerms;

    generateFibonacci(numberOfTerms);

    return 0;
}