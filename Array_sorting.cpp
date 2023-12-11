#include <iostream>
using namespace std;

void bubbleSortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void displaySortedArray(int arr[], int size) {
    std::cout << "Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int maxSize = 100;
    int arr[maxSize];
    int size, choice;

    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;

    std::cout << "Enter the array elements:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Choose sorting order:\n";
    std::cout << "1. Ascending Order\n";
    std::cout << "2. Descending Order\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
            bubbleSortAscending(arr, size);
            break;
        case 2:
            bubbleSortDescending(arr, size);
            break;
        default:
            std::cout << "Invalid choice. Sorting in ascending order by default.\n";
            bubbleSortAscending(arr, size);
    }

    displaySortedArray(arr, size);

    return 0;
}