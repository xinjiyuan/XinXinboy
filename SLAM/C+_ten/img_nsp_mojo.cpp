#include <math.h>
#include <string.h>
#include <string>
#include <cstdlib>
#include <random>
#include <algorithm>

namespace mojo
{
    enum pad_type{zero, edge, median_edge};

    class matrix
    {
        int _size;
        int capacity;
        float *_x_mem;
        void delete_x() { delete[] _x_mem; x = NULL; _x_mem = NULL;}
        float *new_x(const int size) {_x_mem = new float[size + 8 + 7]; x=(float *)(((uintptr_t)_x_mem+32) & ~(uintptr_t)0x1F); return x;}
    public:
        matrix(/* args */);
        ~matrix();
    };
    
    matrix::matrix(/* args */)
    {
    }
    
    matrix::~matrix()
    {
    }
    
}