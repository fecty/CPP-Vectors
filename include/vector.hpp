#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <cmath>

template <typename T1, typename T2>
class Vector2D
{
public:
    T1 x;
    T2 y;

    Vector2D(T1 x, T2 y) : x(x), y(y) {}

    double getMag()
    {
        return sqrt(x * x + y * y);
    }

    double getAngle()
    {
        return atan2(y, x);
    }

    double getDirX()
    {
        return x / getMag();
    }
    double getDirY()
    {
        return y / getMag();
    }

    void normalizeVector()
    {
        x = getDirX();
        y = getDirY();
    }

    static Vector2D fromPolar(double mag, double angle)
    {
        return Vector2D<double, double>(mag * cos(angle), mag * sin(angle));
    }

    static Vector2D fromCoords(T1 x, T2 y)
    {
        return Vector2D(x, y);
    }
};

#endif