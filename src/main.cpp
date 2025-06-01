#include <iostream>
#include <cmath>
#include "vector.hpp"

int main()
{
    Vector2D vec(1.0, 1.0);

    
    vec.normalizeVector();
    std::cout << "Vectors: " << vec.x << " , " << vec.y << std::endl;
    std::cout << "Mag of Vectors: " << vec.getMag() << std::endl;
    std::cout << "Dir Vectors: " << vec.getDirX() << " , " << vec.getDirY() << std::endl;
    std::cout << "Mag of Dir Vectors: " << sqrt(vec.getDirX() * vec.getDirX() + vec.getDirY() * vec.getDirY()) << std::endl;

    std::cout << "Angle of Vectors: " << vec.getAngle() << std::endl;

    return 0;
}