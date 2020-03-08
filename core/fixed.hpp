#pragma once
#include <vector>
#include <cinttypes>
#include <assert.h>
#include <math.h>

#define MAX_WIDTH 256
#define CELL_WIDTH 64

using namespace std;

typedef enum {
    STORE_ONES_COMPLEMENT,
    STORE_TWOS_COMPLEMENT,
} storage_mode;

template<int w_integer = 0, int w_fraction = 64>
class Fixed {
    public:
        //Fixed(int width);
        Fixed(storage_mode st_mode);

        Fixed<w_integer, w_fraction> operator+(const Fixed<w_integer, w_fraction>& other);
        Fixed<w_integer, w_fraction> operator-(const Fixed<w_integer, w_fraction>& other);
        Fixed<w_integer, w_fraction> operator-();

        float toFloat();
        void fromFloat(float val);
    private:
    #if (CELL_WIDTH == 64)
        std::vector<uint64_t> data;
    #endif
        int w_integer_part;
        int w_fractional_part;
        storage_mode mode;
};

/*
template<int w_integer, int w_fraction>
Fixed<w_integer, w_fraction>::Fixed()
{
    w_integer_part = 0;
    w_fractional_part = 64;
    mode = STORE_TWOS_COMPLEMENT;
    data[0] = 0;
}
*/

template<int w_integer, int w_fraction>
Fixed<w_integer, w_fraction>::Fixed(storage_mode st_mode)
{
    assert(w_integer + w_fraction < MAX_WIDTH);

    w_integer_part = w_integer;
    w_fractional_part = w_fraction;
    mode = st_mode;
    
    data.clear();
    data.resize((w_integer + w_fraction) / CELL_WIDTH + 1);
}

template<int w_integer, int w_fraction>
Fixed<w_integer, w_fraction> Fixed<w_integer, w_fraction>::operator+(const Fixed<w_integer, w_fraction>& other)
{

    return other;
}

template<int w_integer, int w_fraction>
Fixed<w_integer, w_fraction> Fixed<w_integer, w_fraction>::operator-(const Fixed<w_integer, w_fraction>& other)
{

    return other;
}

template<int w_integer, int w_fraction>
Fixed<w_integer, w_fraction> Fixed<w_integer, w_fraction>::operator-()
{

}

template<int w_integer, int w_fraction>
void Fixed<w_integer, w_fraction>::fromFloat(const float val)
{

}

template<int w_integer, int w_fraction>
float Fixed<w_integer, w_fraction>::toFloat()
{
    
}