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
float Vector2f::Lenght() { return sqrt(x*x+y*y);}
void Vector2f::Normalize() { float lenght=sqrt(x*x+y*y); x=x/lenght; y=y/lenght; }
void Vector2f::Display(std::ostream& out) { out<<"x: "<<x<<"\ny: "<<y<<"\n"; }

Vector2f& Vector2f::operator=(const Vector2f& _Vector2f) { x=_Vector2f.x; y=_Vector2f.y; return *this; }

bool Vector2f::operator==(const Vector2f& _Vector2f) { return (x==_Vector2f.x and y==_Vector2f.y); }

Vector2f Vector2f::operator+(Vector2f _Vector2f) { _Vector2f.x+=x; _Vector2f.y+=y; return _Vector2f; }
void Vector2f::operator+=(const Vector2f& _Vector2f) { x+=_Vector2f.x; y+=_Vector2f.y;}

Vector2f Vector2f::operator-(Vector2f _Vector2f) { _Vector2f.x-=x; _Vector2f.y-=y; return _Vector2f; }
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
float Vector3f::Lenght() { return sqrt(x*x+y*y+z*z);}
void Vector3f::Normalize() { float lenght=sqrt(x*x+y*y+z*z); x=x/lenght; y=y/lenght; z=z/lenght; }
void Vector3f::Display(std::ostream& out) { out<<"x: "<<x<<"\ny: "<<y<<"\nz: "<<z<<"\n"; }

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
float Vector4f::Lenght() { return sqrt(x*x+y*y+z*z);}
void Vector4f::Normalize() { float lenght=sqrt(x*x+y*y+z*z); x=x/lenght; y=y/lenght; z=z/lenght; }
void Vector4f::Display(std::ostream& out) { out<<"x: "<<x<<"\ny: "<<y<<"\nz: "<<z<<"\nw: "<<w<<"\n"; }

Vector4f& Vector4f::operator=(const Vector4f& _Vector4f) { x=_Vector4f.x; y=_Vector4f.y; z=_Vector4f.z; w=_Vector4f.w; return *this; }

bool Vector4f::operator==(const Vector4f& _Vector4f) { return (x==_Vector4f.x and y==_Vector4f.y and z==_Vector4f.z and w==_Vector4f.w); }

Vector4f Vector4f::operator+(Vector4f _Vector4f) { _Vector4f.x+=x; _Vector4f.y+=y; _Vector4f.z+=z; _Vector4f.w+=w; return _Vector4f; }
void Vector4f::operator+=(const Vector4f& _Vector4f) { x+=_Vector4f.x; y+=_Vector4f.y; z+=_Vector4f.z; w+=_Vector4f.w; }

Vector4f Vector4f::operator-(Vector4f _Vector4f) { _Vector4f.x-=x; _Vector4f.y-=y; _Vector4f.z-=z; _Vector4f.w-=w; return _Vector4f; }
void Vector4f::operator-=(const Vector4f& _Vector4f) { x-=_Vector4f.x; y-=_Vector4f.y; z-=_Vector4f.z; w-=_Vector4f.w; }

Vector4f Vector4f::operator*(Vector4f _Vector4f) { _Vector4f.x*=x; _Vector4f.y*=y; _Vector4f.z*=z; _Vector4f.w*=w; return _Vector4f; }
void Vector4f::operator*=(const Vector4f& _Vector4f) { x*=_Vector4f.x; y*=_Vector4f.y; z*=_Vector4f.z; w*=_Vector4f.w; }

Vector4f Vector4f::operator*(float scal) { Vector4f temp; temp.x=x*scal; temp.y=y*scal; temp.z=z*scal; temp.w=w*scal; return temp; }
void Vector4f::operator*=(float scal) { x=x*scal; y=y*scal; z=z*scal; w=w*scal; }




