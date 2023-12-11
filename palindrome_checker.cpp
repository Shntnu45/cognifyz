#include <iostream>
#include <cctype>
using namespace std;

std::string removeNonAlphanumeric(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (std::isalnum(c)) {
            result += std::tolower(c);
        }
    }
    return result;
}

bool isPalindrome(const std::string& str) {
    int start = 0;
    int end = str.length() - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            return false; 
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    std::string inputPhrase;

    std::cout << "Enter a word or phrase: ";
    std::getline(std::cin, inputPhrase);

    std::string cleanedPhrase = removeNonAlphanumeric(inputPhrase);

    if (isPalindrome(cleanedPhrase)) {
        std::cout << "'" << inputPhrase << "' is a palindrome." << std::endl;
    } else {
        std::cout << "'" << inputPhrase << "' is not a palindrome." << std::endl;
    }

    return 0;
}