#ifndef VECTOR_F_H
#define VECTOR_F_H

#include <ostream>
#include "VectorCom.h"

class Vector2f
{
public:
	float x,y;
	Vector2f();
	Vector2f(float,float);
	Vector2f(const Vector2f&);
	void Set(float,float);
	void Set(Vector2f&);
	Vector2f GetFormat(uint16_t);
	float Lenght();
	void Normalize();
	void Display(std::ostream&);
	bool operator==(const Vector2f&);
	Vector2f& operator=(const Vector2f&);
	Vector2f operator+(Vector2f);
	void operator+=(const Vector2f&);
	Vector2f operator-(Vector2f);
	void operator-=(const Vector2f&);
	Vector2f operator*(Vector2f);
	Vector2f operator*(float);
	void operator*=(const Vector2f&);
	void operator*=(float);
};

class Vector3f
{
public:
    float x,y,z;
    Vector3f();
    Vector3f(float,float,float);
    Vector3f(const Vector3f&);
    void Set(float,float,float);
    void Set(Vector3f&);
    Vector2f GetFormat(uint16_t);
    Vector3f GetFormat(uint8_t);
    float Lenght();
    void Normalize();
    void Display(std::ostream&);
    bool operator==(const Vector3f&);
    Vector3f& operator=(const Vector3f&);
    Vector3f operator=(Vector3f);
    Vector3f operator+(Vector3f);
    void operator+=(const Vector3f&);
    Vector3f operator-(Vector3f);
    void operator-=(const Vector3f&);
    Vector3f operator*(Vector3f);
    Vector3f operator*(float);
    void operator*=(const Vector3f&);
    void operator*=(const float);
};

class Vector4f
{
public:
    float x,y,z;
    /// w isn't use at length() and normalize()
    float w;
    Vector4f();
    Vector4f(float,float,float,float);
    Vector4f(const Vector4f&);
    void Set(float,float,float,float);
    void Set(Vector4f&);
    Vector2f GetFormat(uint16_t);
    Vector3f GetFormat(uint8_t);
    float Lenght();
    void Normalize();
    void Display(std::ostream&);
    bool operator==(const Vector4f&);
    Vector4f& operator=(const Vector4f&);
    Vector4f operator+(Vector4f);
    void operator+=(const Vector4f&);
    Vector4f operator-(Vector4f);
    void operator-=(const Vector4f&);
    Vector4f operator*(Vector4f);
    Vector4f operator*(float);
    void operator*=(const Vector4f&);
    void operator*=(float);
};

#endif // VECTOR_F_H
