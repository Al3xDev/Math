#include "VectorF.h"
#include <cmath>


Vector2f::Vector2f() :
    x(0.0), y(0.0) {}
Vector2f::Vector2f(float _x, float _y) :
    x(_x), y(_y) {}
Vector2f::Vector2f(const Vector2f& _Vector2f) :
    x(_Vector2f.x), y(_Vector2f.y) {}

void Vector2f::Set(float _x, float _y) { x=_x; y=_y; }
void Vector2f::Set(Vector2f& _Vector2f) { x=_Vector2f.x; y=_Vector2f.y; }
Vector2f Vector2f::GetFormat(uint16_t ch)
{
    Vector2f temp(x,y);
    switch(ch)
    {
        case VF::yx:
            temp.x=y;
            temp.y=x;
            break;
        default:
            break;
    }
    return temp;
}
float Vector2f::Lenght() { return sqrt(x*x+y*y);}
void Vector2f::Normalize() { float lenght=sqrt(x*x+y*y); x=x/lenght; y=y/lenght; }
void Vector2f::Display(std::ostream& out) { out<<"x: "<<x<<"\ny: "<<y<<"\n"; }

Vector2f& Vector2f::operator=(const Vector2f& _Vector2f) { x=_Vector2f.x; y=_Vector2f.y; return *this; }

bool Vector2f::operator==(const Vector2f& _Vector2f) { return (x==_Vector2f.x and y==_Vector2f.y); }

Vector2f Vector2f::operator+(Vector2f _Vector2f) { _Vector2f.x+=x; _Vector2f.y+=y; return _Vector2f; }
void Vector2f::operator+=(const Vector2f& _Vector2f) { x+=_Vector2f.x; y+=_Vector2f.y;}

Vector2f Vector2f::operator-(Vector2f _Vector2f) { _Vector2f.x-=x; _Vector2f.y-=y; return _Vector2f; }
Vector2f Vector2f::operator-() { return Vector2f(-x,-y); }
void Vector2f::operator-=(const Vector2f& _Vector2f) { x-=_Vector2f.x; y-=_Vector2f.y; }

Vector2f Vector2f::operator*(Vector2f _Vector2f) { _Vector2f.x*=x; _Vector2f.y*=y; return _Vector2f; }
void Vector2f::operator*=(const Vector2f& _Vector2f) { x*=_Vector2f.x; y*=_Vector2f.y; }

Vector2f Vector2f::operator*(float scal) { Vector2f temp; temp.x=x*scal; temp.y=y*scal; return temp; }
void Vector2f::operator*=(float scal) { x=x*scal; y=y*scal; }


Vector3f::Vector3f() :
    x(0.0), y(0.0), z(0.0) {}
Vector3f::Vector3f(float _x, float _y, float _z) :
    x(_x), y(_y), z(_z) {}
Vector3f::Vector3f(const Vector3f& _Vector3f) :
    x(_Vector3f.x), y(_Vector3f.y), z(_Vector3f.z) {}

void Vector3f::Set(float _x, float _y, float _z) { x=_x; y=_y; z=_z;}
void Vector3f::Set(Vector3f& _Vector3f) { x=_Vector3f.x; y=_Vector3f.y; z=_Vector3f.z; }

Vector2f Vector3f::GetFormat(uint16_t ch)
{
    Vector2f temp(x,y);
    switch(ch)
    {
        case VF::xz:
            temp.y=z;
            break;
        case VF::yx:
            temp.x=y;
            temp.y=x;
            break;
        case VF::yz:
            temp.x=y;
            temp.y=z;
            break;
        case VF::zx:
            temp.x=z;
            temp.y=x;
            break;
        case VF::zy:
            temp.x=z;
            temp.y=y;
            break;
        default:
            break;
    }
    return temp;
}

Vector3f Vector3f::GetFormat(uint8_t ch)
{
    Vector3f temp(x,y,z);
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


float Vector3f::Lenght() { return sqrt(x*x+y*y+z*z);}
void Vector3f::Normalize() { float lenght=sqrt(x*x+y*y+z*z); x=x/lenght; y=y/lenght; z=z/lenght; }
void Vector3f::Display(std::ostream& out) { out<<"x: "<<x<<"\ny: "<<y<<"\nz: "<<z<<"\n"; }
Vector3f Vector3f::operator-()
{
    return Vector3f(-x,-y,-z);
}
Vector3f& Vector3f::operator=(const Vector3f& _Vector3f) { x=_Vector3f.x; y=_Vector3f.y; z=_Vector3f.z; return *this; }

bool Vector3f::operator==(const Vector3f& _Vector3f) { return (x==_Vector3f.x and y==_Vector3f.y and z==_Vector3f.z); }

Vector3f Vector3f::operator+(Vector3f _Vector3f) { _Vector3f.x+=x; _Vector3f.y+=y; _Vector3f.z+=z; return _Vector3f; }
void Vector3f::operator+=(const Vector3f& _Vector3f) { x+=_Vector3f.x; y+=_Vector3f.y; z+=_Vector3f.z; }

Vector3f Vector3f::operator-(Vector3f _Vector3f) { _Vector3f.x-=x; _Vector3f.y-=y; _Vector3f.z-=z; return _Vector3f; }
void Vector3f::operator-=(const Vector3f& _Vector3f) { x-=_Vector3f.x; y-=_Vector3f.y; z-=_Vector3f.z; }

Vector3f Vector3f::operator*(Vector3f _Vector3f) { _Vector3f.x*=x; _Vector3f.y*=y; _Vector3f.z*=z; return _Vector3f; }
void Vector3f::operator*=(const Vector3f& _Vector3f) { x*=_Vector3f.x; y*=_Vector3f.y; }

Vector3f Vector3f::operator*(float scal) { Vector3f temp; temp.x=x*scal; temp.y=y*scal; temp.z=z*scal; return temp; }
void Vector3f::operator*=(float scal) { x=x*scal; y=y*scal; z=z*scal; }



Vector4f::Vector4f() :
    x(0.0), y(0.0), z(0.0), w(0.0) {}
Vector4f::Vector4f(float _x, float _y, float _z, float _w) :
    x(_x), y(_y), z(_z), w(_w) {}
Vector4f::Vector4f(const Vector4f& _Vector4f) :
    x(_Vector4f.x), y(_Vector4f.y), z(_Vector4f.z), w(_Vector4f.w) {}

void Vector4f::Set(float _x, float _y, float _z, float _w) { x=_x; y=_y; z=_z; w=_w; }
void Vector4f::Set(Vector4f& _Vector4f) { x=_Vector4f.x; y=_Vector4f.y; z=_Vector4f.z; w=_Vector4f.w; }

Vector2f Vector4f::GetFormat(uint16_t ch)
{
   Vector2f temp(x,y);
   switch(ch)
   {
        case VF::wx:
            temp.x=w;
            temp.y=x;
            break;
        case VF::wy:
            temp.x=w;
            break;
        case VF::wz:
            temp.x=w;
            temp.y=z;
            break;
        case VF::xw:
            temp.y=w;
            break;
        case VF::xz:
            temp.y=z;
            break;
        case VF::yw:
            temp.x=y;
            temp.y=w;
            break;
        case VF::yx:
            temp.x=y;
            temp.y=x;
            break;
        case VF::yz:
            temp.x=y;
            temp.y=z;
            break;
        case VF::zw:
            temp.x=z;
            temp.y=w;
            break;
        case VF::zx:
            temp.x=z;
            temp.y=x;
            break;
        case VF::zy:
            temp.x=z;
            break;
        default:
            break;
    }
    return temp;
}
Vector3f Vector4f::GetFormat(uint8_t ch)
{
    Vector3f temp(x,y,z);
    switch(ch)
        {
            case VF::wxy:
                temp.x=w;
                temp.y=x;
                temp.z=y;
                break;
            case VF::wxz:
                temp.x=w;
                temp.y=x;
                break;
            case VF::wyx:
                temp.x=w;
                temp.z=x;
                break;
            case VF::wyz:
                temp.x=w;
                break;
            case VF::wzx:
                temp.x=w;
                temp.y=z;
                temp.z=x;
                break;
            case VF::wzy:
                temp.x=w;
                temp.y=z;
                temp.z=y;
                break;
            case VF::xwy:
                temp.y=w;
                temp.z=y;
                break;
            case VF::xwz:
                temp.y=w;
                break;
            case VF::xyw:
                temp.z=w;
                break;
            case VF::xzw:
                temp.y=z;
                temp.z=w;
                break;
            case VF::ywx:
                temp.x=y;
                temp.y=w;
                temp.z=x;
                break;
            case VF::ywz:
                temp.x=y;
                temp.y=w;
                break;
            case VF::yxw:
                temp.x=y;
                temp.y=x;
                temp.z=w;
                break;
            case VF::yxz:
                temp.x=y;
                temp.y=x;
                break;
            case VF::yzw:
                temp.x=y;
                temp.y=z;
                temp.z=w;
                break;
            case VF::yzx:
                temp.x=y;
                temp.y=z;
                temp.z=x;
                break;
            case VF::zwx:
                temp.x=z;
                temp.y=w;
                temp.z=x;
                break;
            case VF::zwy:
                temp.x=z;
                temp.y=w;
                temp.z=y;
                break;
            case VF::zxw:
                temp.x=z;
                temp.y=x;
                temp.z=w;
                break;
            case VF::zxy:
                temp.x=z;
                temp.y=x;
                temp.z=y;
                break;
            case VF::zyw:
                temp.x=z;
                temp.z=w;
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

float Vector4f::Lenght() { return sqrt(x*x+y*y+z*z);}
void Vector4f::Normalize() { float lenght=sqrt(x*x+y*y+z*z); x=x/lenght; y=y/lenght; z=z/lenght; }
void Vector4f::Display(std::ostream& out) { out<<"x: "<<x<<"\ny: "<<y<<"\nz: "<<z<<"\nw: "<<w<<"\n"; }

Vector4f& Vector4f::operator=(const Vector4f& _Vector4f) { x=_Vector4f.x; y=_Vector4f.y; z=_Vector4f.z; w=_Vector4f.w; return *this; }

bool Vector4f::operator==(const Vector4f& _Vector4f) { return (x==_Vector4f.x and y==_Vector4f.y and z==_Vector4f.z and w==_Vector4f.w); }

Vector4f Vector4f::operator+(Vector4f _Vector4f) { _Vector4f.x+=x; _Vector4f.y+=y; _Vector4f.z+=z; _Vector4f.w+=w; return _Vector4f; }
void Vector4f::operator+=(const Vector4f& _Vector4f) { x+=_Vector4f.x; y+=_Vector4f.y; z+=_Vector4f.z; w+=_Vector4f.w; }

Vector4f Vector4f::operator-(Vector4f _Vector4f) { _Vector4f.x-=x; _Vector4f.y-=y; _Vector4f.z-=z; _Vector4f.w-=w; return _Vector4f; }
Vector4f Vector4f::operator-() { return Vector4f(-x,-y,-z,-w); }
void Vector4f::operator-=(const Vector4f& _Vector4f) { x-=_Vector4f.x; y-=_Vector4f.y; z-=_Vector4f.z; w-=_Vector4f.w; }

Vector4f Vector4f::operator*(Vector4f _Vector4f) { _Vector4f.x*=x; _Vector4f.y*=y; _Vector4f.z*=z; _Vector4f.w*=w; return _Vector4f; }
void Vector4f::operator*=(const Vector4f& _Vector4f) { x*=_Vector4f.x; y*=_Vector4f.y; z*=_Vector4f.z; w*=_Vector4f.w; }

Vector4f Vector4f::operator*(float scal) { Vector4f temp; temp.x=x*scal; temp.y=y*scal; temp.z=z*scal; temp.w=w*scal; return temp; }
void Vector4f::operator*=(float scal) { x=x*scal; y=y*scal; z=z*scal; w=w*scal; }
