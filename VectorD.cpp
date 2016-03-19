#include "VectorD.h"
#include <cmath>


Vector3d::Vector3d() :
    x(0.0), y(0.0), z(0.0) {}
Vector3d::Vector3d(double _x, double _y, double _z) :
    x(_x), y(_y), z(_z) {}
Vector3d::Vector3d(const Vector3d& _Vector3d) :
    x(_Vector3d.x), y(_Vector3d.y), z(_Vector3d.z) {}

void Vector3d::Set(double _x, double _y, double _z) { x=_x; y=_y; z=_z;}
void Vector3d::Set(Vector3d& _Vector3d) { x=_Vector3d.x; y=_Vector3d.y; z=_Vector3d.z; }
Vector3d Vector3d::GetFormat(uint8_t ch)
{
	Vector3d temp;
	switch(ch)
	{
        case VF::xyz:
            break;
        case VF::xzy:
            temp.y=z;
            temp.z=y;
            break;
        case VF::yxz:
            temp.x=y;
            temp.y=x;
            break;
        case VF::yzx:
            temp.x=y;
            temp.y=z;
            temp.z=x;
            break;
        case VF::zxy:
            temp.x=z;
            temp.y=x;
            temp.z=y;
            break;
        case VF::zyx:
            temp.x=z;
            temp.z=x;
            break;
        default:
            break;
        }
	return temp;
}

double Vector3d::Lenght() { return sqrt(x*x+y*y+z*z);}
void Vector3d::Normalize() { double lenght=sqrt(x*x+y*y+z*z); x=x/lenght; y=y/lenght; z=z/lenght; }
void Vector3d::Display(std::ostream& out) { out<<"x: "<<x<<"\ny: "<<y<<"\nz: "<<z<<"\n"; }

Vector3d& Vector3d::operator=(const Vector3d& _Vector3d) { x=_Vector3d.x; y=_Vector3d.y; z=_Vector3d.z; return *this; }

bool Vector3d::operator==(const Vector3d& _Vector3d) { return (x==_Vector3d.x and y==_Vector3d.y and z==_Vector3d.z); }

Vector3d Vector3d::operator+(Vector3d _Vector3d) { _Vector3d.x+=x; _Vector3d.y+=y; _Vector3d.z+=z; return _Vector3d; }
void Vector3d::operator+=(const Vector3d& _Vector3d) { x+=_Vector3d.x; y+=_Vector3d.y; z+=_Vector3d.z; }

Vector3d Vector3d::operator-(Vector3d _Vector3d) { _Vector3d.x-=x; _Vector3d.y-=y; _Vector3d.z-=z; return _Vector3d; }
Vector3d Vector3d::operator-() { return Vector3d(-x,-y,-z); }
void Vector3d::operator-=(const Vector3d& _Vector3d) { x-=_Vector3d.x; y-=_Vector3d.y; z-=_Vector3d.z; }

Vector3d Vector3d::operator*(Vector3d _Vector3d) { _Vector3d.x*=x; _Vector3d.y*=y; _Vector3d.z*=z; return _Vector3d; }
void Vector3d::operator*=(const Vector3d& _Vector3d) { x*=_Vector3d.x; y*=_Vector3d.y; }

Vector3d Vector3d::operator*(double scal) { Vector3d temp; temp.x=x*scal; temp.y=y*scal; temp.z=z*scal; return temp; }
void Vector3d::operator*=(double scal) { x=x*scal; y=y*scal; z=z*scal; }
