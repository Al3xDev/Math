#ifndef VECTOR_I_H
#define VECTOR_I_H

#include <ostream>
#include "VectorCom.h"

class Vector2i
{
public:
	int32_t x,y;
	Vector2i();
	Vector2i(int32_t, int32_t);
	Vector2i(const Vector2i&);
	void Set(int32_t, int32_t);
	void Set(Vector2i&);
	void Display(std::ostream &out);
	float Length();
	Vector2i& operator=(const Vector2i&);
	Vector2i operator+(Vector2i);
	void operator+= (const Vector2i&);
	Vector2i operator-(Vector2i);
	void operator-= (const Vector2i&);
	Vector2i operator *(Vector2i);
	void operator *=(const Vector2i&);
	Vector2i operator /(Vector2i);
	void operator /= (const Vector2i&);

};

class Vector3i
{
public:
	int32_t x,y,z;
	Vector3i();
	Vector3i(int32_t, int32_t, int32_t);
	Vector3i(const Vector3i&);
	void Set(int32_t, int32_t, int32_t);
	void Set(Vector3i&);
    void Display(std::ostream&);
	float Length();
	Vector3i& operator=(const Vector3i&);
	Vector3i operator+(Vector3i);
	void operator+=(const Vector3i&);
	Vector3i operator-(Vector3i );
	void operator-= (const Vector3i&);
	Vector3i operator *(Vector3i );
	void operator *=(const Vector3i&);
	Vector3i operator /(Vector3i);
	void operator /= (const Vector3i&);
};


class Vector4i
{
public:
	int32_t x,y,z,w;

	Vector4i();
	Vector4i(int32_t, int32_t, int32_t, int32_t);
	Vector4i(const Vector4i&);
	void Set(int32_t, int32_t, int32_t, int32_t);
	void Set(Vector4i&);
    void Display(std::ostream&);
	float Length();
	Vector4i& operator=(const Vector4i&);
	Vector4i operator+(Vector4i);
	void operator+=(const Vector4i&);
	Vector4i operator-(Vector4i);
	void operator-= (const Vector4i&);
	Vector4i operator *(Vector4i);
	void operator *=(const Vector4i&);
	Vector4i operator /(Vector4i);
	void operator /= (const Vector4i&);
};


#endif // VECTOR_I_H
