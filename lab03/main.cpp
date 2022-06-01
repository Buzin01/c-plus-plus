#include <iostream>
#include "lab3.h"

int main()
{
    Triangle t;
    t.set_point(0, 0, 0);
    t.set_point(1, 3, 3);
    t.set_point(2, 4, 4);
    t.print();

    Sphere s;
    s.set_center(0, 0, 0);
    s.set_radius(5);
    s.print();

    Cube cub;
    cub.set_point(0, 0, 0, 0);
    cub.set_point(1, 0, 0, 5);
    cub.set_point(2, 5, 0, 5);
    cub.set_point(3, 5, 0, 0);
    cub.set_point(4, 5, 5, 0);
    cub.set_point(5, 0, 5, 0);
    cub.set_point(6, 0, 5, 5);
    cub.set_point(7, 5, 5, 5);
    cub.print();

    Cuboid boid;
    boid.set_point(0, 0, 0, 0);
    boid.set_point(1, 0, 0, 8);
    boid.set_point(2, 6, 0, 8);
    boid.set_point(3, 6, 0, 0);
    boid.set_point(4, 6, 10, 0);
    boid.set_point(5, 0, 10, 0);
    boid.set_point(6, 0, 10, 8);
    boid.set_point(7, 6, 10, 8);
    boid.print();

    TetrahedralPrism p;
    p.set_point(0, 0, 0, 0);
    p.set_point(1, 0, 3, 0);
    p.set_point(2, 3, 3, 0);
    p.set_point(3, 3, 0, 0);
    p.set_point(4, 3, 0, 3);
    p.set_point(5, 0, 0, 6);
    p.set_point(6, 0, 3, 6);
    p.set_point(7, 3, 3, 6);
    p.print();

    return 0;
}