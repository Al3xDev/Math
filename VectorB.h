#ifndef VECTOR_B_H
#define VECTOR_B_H
#include <cmath>
#include <ostream>
#include <cstdint>

class Vector2b
{
public:
    bool x,y;
    ///Constructori
    Vector2b();
    Vector2b(bool, bool);
    Vector2b(const Vector2b&);
    Vector2b(Vector2b*);
    Vector2b(uint16_t);
    ///Functi Get
    inline bool GetX();
    inline bool GetY();
    inline uint16_t GetXY();
    /// Functi Set
    inline void Set(bool, bool);
    inline void Set(const Vector2b&);
    inline void Set(uint16_t);
    inline void SetX(bool);
    inline void SetY(bool);
    /// Functi logice
    inline void And(const Vector2b&);
    inline void Or(const Vector2b&);
    inline void Xor(const Vector2b&);
    inline void Not();
    inline void NotX();
    inline void NotY();
    /// Functi Test
    inline bool AllSet();
    inline bool AnySet();
    /// Functi Display
    void Display(std::ostream&);
    /// Operatori
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
    inline bool GetX();
    inline bool GetY();
    inline bool GetZ();
    inline uint32_t GetXYZ();
    /// Functi Set
    inline void Set(bool, bool, bool);
    inline void Set(const Vector3b&);
    inline void Set(uint32_t);
    inline void SetX(bool);
    inline void SetY(bool);
    inline void SetZ(bool);
    /// Functi logice
    inline void And(const Vector3b&);
    inline void Or(const Vector3b&);
    inline void Xor(const Vector3b&);
    inline void Not();
    inline void NotX();
    inline void NotY();
    inline void NotZ();
    /// Functi Test
    inline bool AllSet();
    inline bool AnySet();
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
    inline bool GetX();
    inline bool GetY();
    inline bool GetZ();
    inline bool GetW();
    inline uint32_t GetXYZW();
    /// Functi Set
    inline void Set(bool, bool, bool, bool);
    inline void Set(const Vector4b&);
    inline void SetX(bool);
    inline void SetY(bool);
    inline void SetZ(bool);
    inline void SetW(bool);
    /// Functi logice
    inline void And(const Vector4b&);
    inline void Or(const Vector4b&);
    inline void Xor(const Vector4b&);
	inline void Not();
    inline void NotX();
    inline void NotY();
    inline void NotZ();
    inline void NotW();
    /// Functi Test
    inline bool AllSet();
    inline bool AnySet();
    /// Functi Display
    void Display(std::ostream&);
    /// Operatori
    Vector4b& operator=(const Vector4b&);
    const Vector4b operator and(const Vector4b&);
    const Vector4b operator or (const Vector4b&);
    const Vector4b operator not();
    const Vector4b operator xor(const Vector4b&);
};



#endif // VECTOR_B_H
