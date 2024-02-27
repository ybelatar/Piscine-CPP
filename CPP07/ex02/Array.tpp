
template <typename T>
Array<T>::Array():
    _array(new T[0]),
    _size(0)
{}


template <typename T>
Array<T>::Array(const unsigned int &size):
    _array(new T[size]),
    _size(size)
{
    for (unsigned int i = 0; i < size; i++)
        _array[i] = 0;
}

template <typename T>
Array<T>::Array(const Array &array)
{
    _array = new T[array.size()];
    _size = array.size();
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = array._array[i];
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &array)
{
    if (this == &array)
        return (*this);
    delete[] _array;
    _array = new T[array.size()];
    _size = array.size();
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = array._array[i];
    return (*this);
}

template <typename T>
T &Array<T>::operator[](const int &index)
{
    if (index < 0 || index >= (int)_size)
        throw std::range_error("Index error : out of range");
    return (_array[index]);
}


template <typename T>
int Array<T>::size() const
{
    return (_size);
}