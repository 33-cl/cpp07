#pragma once

template <typename T>
class Array
{
    private:
        T               *_tab;
        unsigned int    _size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        ~Array();

        Array&      operator=(const Array& other);
        T&          operator[](unsigned int index);
        const T&    operator[](unsigned int index) const;

        unsigned int    size() const;
};

template <typename T>
Array<T>::Array() : _size(0)
{
    _tab = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
    _tab = new T[_size];
}

template <typename T>
Array<T>::Array(const Array& other)
{
    _size = other._size;

    _tab = new T[_size];
    for (size_t i = 0; i < _size; i++)
        _tab[i] = other._tab[i];
}

template <typename T>
Array<T>::~Array()
{
    delete[] _tab;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other)
{
    _size = other._size;

    delete[] _tab;
    _tab = new T[_size];
    if (this != &other) {
        for (size_t i = 0; i < _size; i++)
            _tab[i] = other._tab[i];       
    }
    return *this;
}


template <typename T>
T&  Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw   std::out_of_range("Index out of range");
    return _tab[index];
}

template <typename T>
const T&  Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw   std::out_of_range("Index out of range");
    return _tab[index];
}

template <typename T>
unsigned int    Array<T>::size() const
{
    return _size;
}