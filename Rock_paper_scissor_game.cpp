#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    std::string choices[] = { "rock", "paper", "scissors" };

    std::string userChoice;
    int computerChoiceIndex = rand() % 3; 

    std::cout << "Enter your choice (rock, paper, or scissors): ";
    std::cin >> userChoice;

    for (char &c : userChoice) {
        c = std::tolower(c);
    }

    std::cout << "You chose: " << userChoice << std::endl;
    std::cout << "Computer chose: " << choices[computerChoiceIndex] << std::endl;

    if (userChoice == "rock") {
        if (choices[computerChoiceIndex] == "paper") {
            std::cout << "Computer wins! Paper covers rock." << std::endl;
        } else if (choices[computerChoiceIndex] == "scissors") {
            std::cout << "You win! Rock smashes scissors." << std::endl;
        } else {
            std::cout << "It's a tie!" << std::endl;
        }
    } else if (userChoice == "paper") {
        if (choices[computerChoiceIndex] == "scissors") {
            std::cout << "Computer wins! Scissors cut paper." << std::endl;
        } else if (choices[computerChoiceIndex] == "rock") {
            std::cout << "You win! Paper covers rock." << std::endl;
        } else {
            std::cout << "It's a tie!" << std::endl;
        }
    } else if (userChoice == "scissors") {
        if (choices[computerChoiceIndex] == "rock") {
            std::cout << "Computer wins! Rock smashes scissors." << std::endl;
        } else if (choices[computerChoiceIndex] == "paper") {
            std::cout << "You win! Scissors cut paper." << std::endl;
        } else {
            std::cout << "It's a tie!" << std::endl;
        }
    } else {
        std::cout << "Invalid choice! Please enter rock, paper, or scissors." << std::endl;
    }

    return 0;
}