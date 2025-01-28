#include "../inc/iter.hpp"
#include <iostream>

void print_int(int x) {
    std::cout << x << " ";
}

void square(int &x) {
    x *= x;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    size_t len = 5;

    std::cout << "Original array     : ";
    iter(arr, len, print_int);
    std::cout << "\n";

    iter(arr, len, square);

    std::cout << "After modification : ";
    iter(arr, len, print_int);
    std::cout << "\n";

    return 0;
}

// void print_double(double x) {
//     std::cout << x << " ";
// }

// void add_one(double &x) {
//     x += 1.0;
// }

// int main() {
//     double arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
//     size_t len = 5;

//     std::cout << "Original array     : ";
//     iter(arr, len, print_double);
//     std::cout << "\n";

//     iter(arr, len, add_one);

//     std::cout << "After modification : ";
//     iter(arr, len, print_double);
//     std::cout << "\n";

//     return 0;
// }