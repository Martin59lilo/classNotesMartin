#include <iostream>
using namespace std;

template<typename T> 
class CMiarreglo
{
private:
    T* ptr;
    int size;
public:
    CMiarreglo(T* _ptr, int _size);
    ~CMiarreglo();
    int maximo();
};

