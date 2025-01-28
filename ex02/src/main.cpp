#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../inc/Array.hpp"

int main()
{
    // Constructors
    Array<int> arr1;
    Array<int> arr2(5);

    // Fill
    for (unsigned int i = 0; i < arr2.size(); i++) {
        arr2[i] = i * 10;
    }
    std::cout << "arr2 elements: ";
    for (unsigned int i = 0; i < arr2.size(); i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    // Copy constructor
    Array<int> arr3(arr2);
    std::cout << "arr3 size: " << arr3.size() << std::endl;
    std::cout << "arr3 elements: ";
    for (unsigned int i = 0; i < arr3.size(); i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    // Assignment operator
    Array<int> arr4;
    arr4 = arr2;
    std::cout << "arr4 size: " << arr4.size() << std::endl;
    std::cout << "arr4 elements: ";
    for (unsigned int i = 0; i < arr4.size(); i++) {
        std::cout << arr4[i] << " ";
    }
    std::cout << std::endl;

    // Exception
    try {
        std::cout << "Trying to access arr2[5]..." << std::endl;
        std::cout << arr2[5] << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    // Modify an element
    arr2[2] = 100;
    std::cout << "Modified arr2[2]: " << arr2[2] << std::endl;
    std::cout << "Final arr2 elements: ";
    for (unsigned int i = 0; i < arr2.size(); i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}