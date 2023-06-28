#ifndef VECTOR2D_H_
#define VECTOR2D_H_

namespace util {

    template <typename T> class Vector2D {
    public:

        T x;
        T y;


        explicit Vector2D(const T i_x = 0, const T i_y = 0)
            : x(i_x)
            , y(i_y)
        {
        }
    };
}

#endif
