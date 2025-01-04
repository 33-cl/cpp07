#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template <typename T_function, typename T_array>
void    iter(T_array *array, size_t len, T_function f)
{
    for (size_t i = 0; i < len; i++)
        f(array[i]);
}

#endif