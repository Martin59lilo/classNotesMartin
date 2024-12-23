#include "CMiarreglo.h"

template<typename T>
CMiarreglo<T>::CMiarreglo(T* _ptr, int _size){
    ptr = new T[_size];
    size = _size;
    for (int i = 0; i < size; i++)
    {
        ptr[i] = _ptr[i];
    }
    
}

template<typename T>
CMiarreglo<T>::~CMiarreglo()
{
    delete[] ptr;
}

template<typename T>
int CMiarreglo<T>::maximo(){
    T max_local = ptr[0];
    for (int i = 1; i < size; i++)
    {
        if (ptr[i]>max_local)
        {
            max_local=ptr[i];
        }
    }
    return max_local;
}
