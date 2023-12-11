#include <iostream>
#include <string>
using namespace std;


std::string reverseString(const std::string& str) {
    int length = str.length();
    std::string reversedString;

    for (int i = length - 1; i >= 0; --i) {
        reversedString += str[i];
    }

    return reversedString;
}

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::string reversed = reverseString(inputString);

    std::cout << "Reversed string: " << reversed << std::endl;

    return 0;
}