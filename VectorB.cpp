#include "VectorB.h"

/// #################
/// VECTOR2B ########
/// #################

Vector2b::Vector2b():
    x(false),y(false) {}
Vector2b::Vector2b(bool _x, bool _y) :
    x(_x),y(_y) {}
Vector2b::Vector2b(const Vector2b& _Vector2b) :
    x(_Vector2b.x),y(_Vector2b.y) {}
Vector2b::Vector2b(Vector2b* _Vector2b) :
    x(_Vector2b->x), y(_Vector2b->y) {}
Vector2b::Vector2b(uint16_t _xy) { x=(_xy & 0x100)>>8; y=_xy & 0x1;}

///Functi Get
bool Vector2b::GetX() { return x; }
bool Vector2b::GetY() { return y; }
uint16_t Vector2b::GetXY() { return uint16_t(x*256+y*1); }
/// Functi Set
void Vector2b::Set(bool _x, bool _y) { x=_x; y=_y; }
void Vector2b::Set(const Vector2b& _Vector2b) { x=_Vector2b.x; y=_Vector2b.y; }
void Vector2b::Set(uint16_t _xy) { x=(_xy & 0x100)>>8; y=_xy & 0x1; }
void Vector2b::SetX(bool _x) { x=_x; }
void Vector2b::SetY(bool _y) { y=_y; }
/// Functi logice
void Vector2b::And(const Vector2b& _Vector2b) { x=x and _Vector2b.x; y=y and _Vector2b.y; }
void Vector2b::Or(const Vector2b& _Vector2b) { x=x or _Vector2b.x; y=y or _Vector2b.y; }
void Vector2b::Xor(const Vector2b& _Vector2b) { x=x xor _Vector2b.x; y=y xor _Vector2b.y; }
void Vector2b::Not() { x=!x; y=!y; }
void Vector2b::NotX() { x=!x; }
void Vector2b::NotY() { y=!y; }
/// Functi Test
bool Vector2b::AllSet() { return x and y; }
bool Vector2b::AnySet() { return x or y; }
/// Functi Display
void Vector2b::Display(std::ostream& out)
{
	out<<"x: "<<x<<"\ny: "<<y<<"\n";
}
/// Operatori
Vector2b& Vector2b::operator=(const Vector2b &_Vector2b)	{ x=_Vector2b.x; y=_Vector2b.y; return *this;}
const Vector2b Vector2b::operator and(const Vector2b &_Vector2b)
{
	Vector2b temp;
	temp.x=_Vector2b.x and x;
	temp.y=_Vector2b.y and y;
	return temp;
}
const Vector2b Vector2b::operator or (const Vector2b &_Vector2b)
{
	Vector2b temp;
	temp.x=_Vector2b.x or x;
	temp.y=_Vector2b.y or y;
	return temp;
}
const Vector2b Vector2b::operator not()
{
	Vector2b temp;
	temp.x=!x;
	temp.y=!y;
	return temp;
}
const Vector2b Vector2b::operator xor(const Vector2b &_Vector2b)
{
	Vector2b temp;
	temp.x=_Vector2b.x xor x;
	temp.y=_Vector2b.y xor y;
	return temp;
}

/// #################
/// VECTOR3B ########
/// #################

Vector3b::Vector3b():
    x(false),y(false),z(false) {}
Vector3b::Vector3b(bool _x, bool _y, bool _z) :
    x(_x),y(_y),z(_z) {}
Vector3b::Vector3b(const Vector3b& _Vector3b) :
    x(_Vector3b.x),y(_Vector3b.y), z(_Vector3b.z) {}

Vector3b::Vector3b(Vector3b* _Vector3b) :
    x(_Vector3b->x), y(_Vector3b->y), z(_Vector3b->z) {}
///Functi Get
bool Vector3b::GetX() { return x; }
bool Vector3b::GetY() { return y; }
bool Vector3b::GetZ() { return z; }
uint32_t Vector3b::GetXYZ() { return x*65537+y*256+z*1; }
/// Functi Set
void Vector3b::Set(bool _x, bool _y, bool _z) { x=_x; y=_y; z=_z;}
void Vector3b::Set(const Vector3b& _Vector3b) { x=_Vector3b.x; y=_Vector3b.y; z=_Vector3b.z; }
void Vector3b::Set(uint32_t _xyz) { x=(_xyz & 0x10000)>>16; y=(_xyz & 0x100)>>8; z=_xyz & 0x1; }
void Vector3b::SetX(bool _x) { x=_x; }
void Vector3b::SetY(bool _y) { y=_y; }
void Vector3b::SetZ(bool _z) { z=_z; }
/// Functi logice
void Vector3b::And(const Vector3b& _Vector3b) { x=x and _Vector3b.x; y=y and _Vector3b.y; z=z and _Vector3b.z; }
void Vector3b::Or(const Vector3b& _Vector3b) { x=x or _Vector3b.x; y=y or _Vector3b.y; z=z and _Vector3b.z; }
void Vector3b::Xor(const Vector3b& _Vector3b) { x=x xor _Vector3b.x; y=y xor _Vector3b.y; z=z and _Vector3b.z; }
void Vector3b::Not() { x=!x; y=!y; z=!z; }
void Vector3b::NotX() { x=!x; }
void Vector3b::NotY() { y=!y; }
void Vector3b::NotZ() { z=!z; }
/// Functi Test
bool Vector3b::AllSet() { return x and y and z; }
bool Vector3b::AnySet() { return x or y or z; }
/// Functi Display
void Vector3b::Display(std::ostream& out)
{
	out<<"x: "<<x<<"\ny: "<<y<<"\nz: "<<z<<"\n";
}
/// Operatori
Vector3b& Vector3b::operator=(const Vector3b &_Vector3b)	{ x=_Vector3b.x; y=_Vector3b.y; z=_Vector3b.z; return *this;}
const Vector3b Vector3b::operator and(const Vector3b &_Vector3b)
{
	Vector3b temp;
	temp.x=_Vector3b.x and x;
	temp.y=_Vector3b.y and y;
	temp.z=_Vector3b.z and z;
	return temp;
}
const Vector3b Vector3b::operator or (const Vector3b &_Vector3b)
{
	Vector3b temp;
	temp.x=_Vector3b.x or x;
	temp.y=_Vector3b.y or y;
	temp.z=_Vector3b.z or z;
	return temp;
}
const Vector3b Vector3b::operator not()
{
	Vector3b temp;
	temp.x=!x;
	temp.y=!y;
	temp.z=!z;
	return temp;
}
const Vector3b Vector3b::operator xor(const Vector3b &_Vector3b)
{
	Vector3b temp;
	temp.x=_Vector3b.x xor x;
	temp.y=_Vector3b.y xor y;
	temp.z=_Vector3b.z xor z;
	return temp;
}
/// #################
/// VECTOR4B ########
/// #################

Vector4b::Vector4b() :
    x(false), y(false), z(false) {}
Vector4b::Vector4b(bool _x, bool _y, bool _z, bool _w) :
    x(_x), y(_y), z(_z), w(_w) {}
Vector4b::Vector4b(const Vector4b& _Vector4b) :
    x(_Vector4b.x), y(_Vector4b.y), z(_Vector4b.z), w(_Vector4b.w) {}
Vector4b::Vector4b(uint32_t _xyzw)
{
    x=(_xyzw & 0x1000000)>>24;
    y=(_xyzw & 0x10000)>>16;
    z=(_xyzw & 0x100)>>8;
    w=(_xyzw & 0x1);
}
/// Functi Get
bool Vector4b::GetX() { return x; }
bool Vector4b::GetY() { return y; }
bool Vector4b::GetZ() { return z; }
bool Vector4b::GetW() { return w; }
uint32_t Vector4b::GetXYZW() { return x*16777216+y*65537+y*256+w*1; }
/// Functi Set
void Vector4b::Set(bool _x, bool _y, bool _z, bool _w) { x=_x; y=_y; z=_z; w=_w; }
void Vector4b::Set(const Vector4b& _Vector4b) { x=_Vector4b.x;
                                             y=_Vector4b.y;
                                             z=_Vector4b.z;
                                             w=_Vector4b.w; }
void Vector4b::SetX(bool _x) { x=_x; }
void Vector4b::SetY(bool _y) { y=_y; }
void Vector4b::SetZ(bool _z) { z=_z; }
void Vector4b::SetW(bool _w) { w=_w; }
/// Functi logice
void Vector4b::And(const Vector4b& _Vector4b) { x=x and _Vector4b.x; y=y and _Vector4b.y; z=z and _Vector4b.z; w=w and _Vector4b.w; }
void Vector4b::Or(const Vector4b& _Vector4b) { x=x or _Vector4b.x; y=y or _Vector4b.y; z=z and _Vector4b.z; w=w or _Vector4b.w; }
void Vector4b::Xor(const Vector4b& _Vector4b) { x=x xor _Vector4b.x; y=y xor _Vector4b.y; z=z and _Vector4b.z; w=w xor _Vector4b.w;}
void Vector4b::Not() { x=!x; y=!y; z=!z; w=!w; }
void Vector4b::NotX() { x=!x; }
void Vector4b::NotY() { y=!y; }
void Vector4b::NotZ() { z=!z; }
void Vector4b::NotW() { w=!w; }
/// Functi Test
bool Vector4b::AllSet() { return x and y and z and w; }
bool Vector4b::AnySet() { return x or y or z or w; }
/// Functi Display
void Vector4b::Display(std::ostream& out)
{
	out<<"x: "<<x<<"\ny: "<<y<<"\nz: "<<z<<"\nw: "<<w<<"\n";
}
/// Operatori
Vector4b& Vector4b::operator=(const Vector4b &_Vector4b)	{ x=_Vector4b.x; y=_Vector4b.y; z=_Vector4b.z; w=_Vector4b.w; return *this;}
const Vector4b Vector4b::operator and(const Vector4b &_Vector4b)
{
	Vector4b temp;
	temp.x=_Vector4b.x and x;
	temp.y=_Vector4b.y and y;
	temp.z=_Vector4b.z and z;
	temp.w=_Vector4b.w and w;
	return temp;
}
const Vector4b Vector4b::operator or (const Vector4b &_Vector4b)
{
	Vector4b temp;
	temp.x=_Vector4b.x or x;
	temp.y=_Vector4b.y or y;
	temp.z=_Vector4b.z or z;
	temp.w=_Vector4b.w or w;
	return temp;
}
const Vector4b Vector4b::operator not()
{
	Vector4b temp;
	temp.x=!x;
	temp.y=!y;
	temp.z=!z;
	temp.w=!w;
	return temp;
}
const Vector4b Vector4b::operator xor(const Vector4b &_Vector4b)
{
	Vector4b temp;
	temp.x=_Vector4b.x xor x;
	temp.y=_Vector4b.y xor y;
	temp.z=_Vector4b.z xor z;
	temp.w=_Vector4b.w xor w;
	return temp;
}
