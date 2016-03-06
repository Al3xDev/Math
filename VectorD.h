#ifndef VECTOR_D_H
#define VECTOR_D_H
#include <iostream>
#include "VectorCom.h"

class Vector3d
{
public:
    double x,y,z;
    Vector3d();
    Vector3d(double,double,double);
    Vector3d(const Vector3d&);
    void Set(double,double,double);
    void Set(Vector3d&);
    double Lenght();
    void Normalize();
    void Display(std::ostream&);
    bool operator==(const Vector3d&);
    Vector3d& operator=(const Vector3d&);
    Vector3d operator+(Vector3d);
    void operator+=(const Vector3d&);
    Vector3d operator-(Vector3d);
    void operator-=(const Vector3d&);
    Vector3d operator*(Vector3d);
    Vector3d operator*(double);
    void operator*=(const Vector3d&);
    void operator*=(const double);
};



#endif // VECTOR_D_H
