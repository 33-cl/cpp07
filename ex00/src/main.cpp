#include <iostream>

struct Data {
    int value;
};

template <typename T>
void    swap(T& val1, T& val2)
{
    T   temp;

    temp = val1;
    val1 = val2;
    val2 = temp;
}

template <typename T>
T   min(T val1, T val2)
{
    if (val1 < val2)
        return val1;
    else if (val1 == val2)
        return val2;
    return val2;
}

template <typename T>
T   max(T val1, T val2)
{
    if (val1 > val2)
        return val1;
    else if (val1 == val2)
        return val2;
    return val2;
}

int main()
{
    // Test with int
    std::cout << "Testing with int:" << std::endl;

    int n1 = 3;
    int n2 = 7;

    std::cout << "Before swap: n1 = " << n1 << ", n2 = " << n2 << std::endl;
    swap(n1, n2);
    std::cout << "After swap: n1 = " << n1 << ", n2 = " << n2 << std::endl;

    std::cout << "Min of n1 and n2: " << min(n1, n2) << std::endl;
    std::cout << "Max of n1 and n2: " << max(n1, n2) << std::endl;

    std::cout << "\n----------------\n" << std::endl;

    // Test with Data
    std::cout << "Testing with Data*:" << std::endl;

    Data* d1 = new Data;
    Data* d2 = new Data;

    d1->value = 5;
    d2->value = 10;

    std::cout << "Before swap: d1->value = " << d1->value << ", d2->value = " << d2->value << std::endl;
    swap(d1, d2);
    std::cout << "After swap: d1->value = " << d1->value << ", d2->value = " << d2->value << std::endl;

    Data* minData = min(d1, d2);
    Data* maxData = max(d1, d2);

    std::cout << "Min data value: " << minData->value << std::endl;
    std::cout << "Max data value: " << maxData->value << std::endl;

    delete d1;
    delete d2;

    return 0;
}