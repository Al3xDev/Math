#include "VectorI.h"
#include <cmath>

Vector2i::Vector2i() :
	x(0), y(0) {}
Vector2i::Vector2i(int32_t _x, int32_t _y) :
	x(_x), y(_y) {}
Vector2i::Vector2i(const Vector2i& _Vector2i) :
	x(_Vector2i.x), y(_Vector2i.y) {}

void Vector2i::Set(int32_t _x, int32_t _y) { x=_x; y=_y; }
void Vector2i::Set(Vector2i& _Vector2i) { x=_Vector2i.x; y=_Vector2i.y; }

void Vector2i::Neg(){ x=-x; y=-y; }

void Vector2i::Display(std::ostream &out)
{
    out<<"x: "<<x<<"\ny: "<<y<<"\n";
}

float Vector2i::Length() { return sqrt(x*x+y*y); }

Vector2i& Vector2i::operator=(const Vector2i &_Vector2i)
{
	x=_Vector2i.x;
	y=_Vector2i.y;
	return *this;
}
Vector2i Vector2i::operator+(Vector2i _Vector2i)
{
	_Vector2i.x=x+_Vector2i.x;
	_Vector2i.y=y+_Vector2i.y;
	return _Vector2i;
}
void Vector2i::operator+=(const Vector2i& _Vector2i)
{
	x=x+_Vector2i.x;
	y=y+_Vector2i.y;
}
Vector2i Vector2i::operator-(Vector2i _Vector2i)
{
	_Vector2i.x=x-_Vector2i.x;
	_Vector2i.y=y-_Vector2i.y;
	return _Vector2i;
}
void Vector2i::operator-= (const Vector2i& _Vector2i)
{
	x=x-_Vector2i.x;
	y=y-_Vector2i.y;
}
Vector2i Vector2i::operator *(Vector2i _Vector2i)
{
	_Vector2i.x*=x;
	_Vector2i.y*=y;
	return _Vector2i;
}
void Vector2i::operator *=(const Vector2i &_Vector2i)
{
	x*=_Vector2i.x;
	y*=_Vector2i.y;
}

Vector2i Vector2i::operator /(Vector2i _Vector2i)
{
	_Vector2i.x/=x;
	_Vector2i.y/=y;
	return _Vector2i;
}
void Vector2i::operator /= (const Vector2i& _Vector2i)
{
	x/=_Vector2i.x;
	y/=_Vector2i.y;
}


Vector3i::Vector3i() :
	x(0), y(0), z(0) {}
Vector3i::Vector3i(int32_t _x, int32_t _y, int32_t _z) :
	x(_x), y(_y), z(_z) {}
Vector3i::Vector3i(const Vector3i& _Vector3i) :
	x(_Vector3i.x), y(_Vector3i.y), z(_Vector3i.z) {}

void Vector3i::Set(int32_t _x, int32_t _y, int32_t _z) { x=_x; y=_y; z=_z; }
void Vector3i::Set(Vector3i& _Vector3i){ x=_Vector3i.x; y=_Vector3i.y; z=_Vector3i.z; }
void Vector3i::Neg() { x=-x; y=-y; z=-z;}


void Vector3i::Display(std::ostream &out) { out<<"x: "<<x<<"\ny: "<<y<<"\nz: "<<z<<"\n"; }

float Vector3i::Length() { return sqrt(x*x+y*y+z*z); }

Vector3i& Vector3i::operator=(const Vector3i &_Vector3i)
{
	x=_Vector3i.x;
	y=_Vector3i.y;
	z=_Vector3i.z;
	return *this;
}
Vector3i Vector3i::operator+(Vector3i _Vector3i)
{
	_Vector3i.x=x+_Vector3i.x;
	_Vector3i.y=y+_Vector3i.y;
	_Vector3i.z=z+_Vector3i.z;
	return _Vector3i;
}
void Vector3i::operator+=(const Vector3i& _Vector3i)
{
	x=x+_Vector3i.x;
	y=y+_Vector3i.y;
	z=z+_Vector3i.z;
}
Vector3i Vector3i::operator-(Vector3i _Vector3i)
{
	_Vector3i.x=x-_Vector3i.x;
	_Vector3i.y=y-_Vector3i.y;
	_Vector3i.z=z-_Vector3i.z;
	return _Vector3i;
}
void Vector3i::operator-= (const Vector3i& _Vector3i)
{
	x=x-_Vector3i.x;
	y=y-_Vector3i.y;
	z=z-_Vector3i.z;
}
Vector3i Vector3i::operator *(Vector3i _Vector3i)
{
	_Vector3i.x*=x;
	_Vector3i.y*=y;
	_Vector3i.z*=z;
	return _Vector3i;
}
void Vector3i::operator *=(const Vector3i &_Vector3i)
{
	x*=_Vector3i.x;
	y*=_Vector3i.y;
	z*=_Vector3i.z;
}
Vector3i Vector3i::operator /(Vector3i _Vector3i)
{
	_Vector3i.x/=x;
	_Vector3i.y/=y;
	_Vector3i.z/=z;
	return _Vector3i;
}
void Vector3i::operator /= (const Vector3i& _Vector3i)
{
	x/=_Vector3i.x;
	y/=_Vector3i.y;
	z/=_Vector3i.z;
}


Vector4i::Vector4i() :
	x(0), y(0), z(0), w(0) {}
Vector4i::Vector4i(int32_t _x, int32_t _y, int32_t _z, int32_t _w) :
	x(_x), y(_y), z(_z), w(_w) {}
Vector4i::Vector4i(const Vector4i& _Vector4i) :
	x(_Vector4i.x), y(_Vector4i.y), z(_Vector4i.z), w(_Vector4i.w) {}

void Vector4i::Set(int32_t _x, int32_t _y, int32_t _z, int32_t _w) { x=_x; y=_y; z=_z; w=_w;}
void Vector4i::Set(Vector4i& _Vector4i) { x=_Vector4i.x; y=_Vector4i.y; z=_Vector4i.z; w=_Vector4i.w; }
void Vector4i::Neg() { x=-x; y=-y; z=-z; w=-w; }

void Vector4i::Display(std::ostream &out) { out<<"x: "<<x<<"\ny: "<<y<<"\nz: "<<z<<"\nw: "<<w<<"\n"; }

float Vector4i::Length() { return sqrt(x*x+y*y+z*z); }

Vector4i& Vector4i::operator=(const Vector4i &_Vector4i)
{
	x=_Vector4i.x;
	y=_Vector4i.y;
	z=_Vector4i.z;
	w=_Vector4i.w;
	return *this;
}
Vector4i Vector4i::operator+(Vector4i _Vector4i)
{
	_Vector4i.x=x+_Vector4i.x;
	_Vector4i.y=y+_Vector4i.y;
	_Vector4i.z=z+_Vector4i.z;
	_Vector4i.w=w+_Vector4i.w;
	return _Vector4i;
}
void Vector4i::operator+=(const Vector4i& _Vector4i)
{
	x=x+_Vector4i.x;
	y=y+_Vector4i.y;
	z=z+_Vector4i.z;
	w=w+_Vector4i.w;
}
Vector4i Vector4i::operator-(Vector4i _Vector4i)
{
	_Vector4i.x=x-_Vector4i.x;
	_Vector4i.y=y-_Vector4i.y;
	_Vector4i.z=z-_Vector4i.z;
	_Vector4i.w=w-_Vector4i.w;
	return _Vector4i;
}
void Vector4i::operator-= (const Vector4i& _Vector4i)
{
	x=x-_Vector4i.x;
	y=y-_Vector4i.y;
	z=z-_Vector4i.z;
	w=w-_Vector4i.w;
}
Vector4i Vector4i::operator *(Vector4i _Vector4i)
{
	_Vector4i.x*=x;
	_Vector4i.y*=y;
	_Vector4i.z*=z;
	_Vector4i.w*=w;
	return _Vector4i;
}
void Vector4i::operator *=(const Vector4i &_Vector4i)
{
	x*=_Vector4i.x;
	y*=_Vector4i.y;
	z*=_Vector4i.z;
	w*=_Vector4i.w;
}
Vector4i Vector4i::operator /(Vector4i _Vector4i)
{
	_Vector4i.x/=x;
	_Vector4i.y/=y;
	_Vector4i.z/=z;
	_Vector4i.w/=w;
	return _Vector4i;
}
void Vector4i::operator /= (const Vector4i& _Vector4i)
{
	x/=_Vector4i.x;
	y/=_Vector4i.y;
	z/=_Vector4i.z;
	w/=_Vector4i.w;
}
