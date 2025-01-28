#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

# include <iostream>

template <typename T>
void    swap(T& val1, T& val2)
{
    T   temp;

    temp = val1;
    val1 = val2;
    val2 = temp;
}

template <typename T>
T   min(const T val1, const T val2)
{
    if (val1 < val2)
        return val1;
    else if (val1 == val2)
        return val1;
    return val2;
}

template <typename T>
T   max(const T val1, const T val2)
{
    if (val1 > val2)
        return val1;
    else if (val1 == val2)
        return val1;
    return val2;
}

#endif