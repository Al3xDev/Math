#ifndef VECTOR_B_H
#define VECTOR_B_H
#include <ostream>
#include "VectorCom.h"

class Vector2b
{
public:
    bool x,y;
    Vector2b();
    Vector2b(bool, bool);
    Vector2b(const Vector2b&);
    Vector2b(Vector2b*);
    Vector2b(uint16_t);
    uint16_t GetXY();
    void Set(bool, bool);
    void Set(const Vector2b&);
    void Set(uint16_t);
    void And(const Vector2b&);
    void Or(const Vector2b&);
    void Xor(const Vector2b&);
    void Not();
    bool AllSet();
    bool AnySet();
    void Display(std::ostream&);
    Vector2b& operator=(const Vector2b &_Vector2b);
    const Vector2b operator and(const Vector2b&);
    const Vector2b operator or (const Vector2b&);
    const Vector2b operator not();
    const Vector2b operator xor(const Vector2b&);
};

class Vector3b
{
public:
    bool x,y,z;
    ///Constructori
    Vector3b();
    Vector3b(bool, bool, bool);
    Vector3b(const Vector3b&);
    Vector3b(Vector3b*);
    ///Functi Get
    uint32_t GetXYZ();
    /// Functi Set
    void Set(bool, bool, bool);
    void Set(const Vector3b&);
    void Set(uint32_t);
    /// Functi logice
    void And(const Vector3b&);
    void Or(const Vector3b&);
    void Xor(const Vector3b&);
    void Not();
    /// Functi Test
    bool AllSet();
    bool AnySet();
    /// Functi Display
    void Display(std::ostream&);
    /// Operatori
    Vector3b& operator=(const Vector3b&);
    const Vector3b operator and(const Vector3b&);
    const Vector3b operator or (const Vector3b&);
    const Vector3b operator not();
    const Vector3b operator xor(const Vector3b&);

};

class Vector4b
{
public:
    bool x,y,z,w;
    /// Constructori
    Vector4b();
    Vector4b(bool, bool, bool, bool);
    Vector4b(const Vector4b&) ;
    Vector4b(uint32_t);
    /// Functi Get
    uint32_t GetXYZW();
    /// Functi Set
    void Set(bool, bool, bool, bool);
    void Set(const Vector4b&);
    /// Functi logice
    void And(const Vector4b&);
    void Or(const Vector4b&);
    void Xor(const Vector4b&);
    void Not();
    /// Functi Test
    bool AllSet();
    bool AnySet();
    /// Functi Display
    void Display(std::ostream&);
    /// Operatori
    Vector4b& operator=(const Vector4b&);
    const Vector4b operator and(const Vector4b&);
    const Vector4b operator or(const Vector4b&);
    const Vector4b operator not();
    const Vector4b operator xor(const Vector4b&);
};



#endif // VECTOR_B_H
