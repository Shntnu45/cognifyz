#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    double totalGrades = 0.0;

    std::cout << "Enter the number of subjects: ";
    std::cin >> numSubjects;

    for (int i = 1; i <= numSubjects; ++i) {
        double grade;
        std::cout << "Enter the grade for subject " << i << ": ";
        std::cin >> grade;

        totalGrades += grade;
    }

    double averageGrade = totalGrades / numSubjects;

    std::cout << "The average grade of the student is: " << averageGrade << std::endl;

    return 0;
}