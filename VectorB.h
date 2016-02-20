#ifndef VECTOR_B_H
#define VECTOR_B_H

class Vector2b
{
public:
    bool x,y;
    ///Constructori
    Vector2b():
        x(false),y(false) {}
    Vector2b(bool _x, bool _y) :
        x(_x),y(_y) {}
    Vector2b(const Vector2b& _Vector2b) :
        x(_Vector2b.x),y(_Vector2b.y) {}
    Vector2b(Vector2b* _Vector2b) :
        x(_Vector2b->x), y(_Vector2b->y) {}
    Vector2b(uint16_t _xy) { x=(_xy & 0x100)>>8; y=_xy & 0x1;}

    ///Functi Get
    inline bool GetX() { return x; }
    inline bool GetY() { return y; }
    inline uint16_t GetXY() { return uint16_t(x*256+y*1); }
    /// Functi Set
    inline void Set(bool _x, bool _y) { x=_x; y=_y; }
    inline void Set(const Vector2b& _Vector2b) { x=_Vector2b.x; y=_Vector2b.y; }
    inline void Set(uint16_t _xy) { x=(_xy & 0x100)>>8; y=_xy & 0x1; }
    inline void SetX(bool _x) { x=_x; }
    inline void SetY(bool _y) { y=_y; }
    /// Functi logice
    inline void And(const Vector2b& _Vector2b) { x=x and _Vector2b.x; y=y and _Vector2b.y; }
    inline void Or(const Vector2b& _Vector2b) { x=x or _Vector2b.x; y=y or _Vector2b.y; }
    inline void Xor(const Vector2b& _Vector2b) { x=x xor _Vector2b.x; y=y xor _Vector2b.y; }
    inline void Not() { x=!x; y=!y; }
    inline void NotX() { x=!x; }
    inline void NotY() { y=!y; }
    /// Functi Test
    inline bool AllSet() { return x and y; }
    inline bool AnySet() { return x or y; }
    /// Functi Display
    void Display(std::ostream& out)
    {
    	out<<"x: "<<x<<"\ny: "<<y<<"\n";
    }
    /// Operatori
    Vector2b& operator=(const Vector2b &_Vector2b)	{ x=_Vector2b.x; y=_Vector2b.y; return *this;}
    const Vector2b operator and(const Vector2b &_Vector2b)
    {
    	Vector2b temp;
    	temp.x=_Vector2b.x and x;
    	temp.y=_Vector2b.y and y;
    	return temp;
    }
    const Vector2b operator or (const Vector2b &_Vector2b)
    {
    	Vector2b temp;
    	temp.x=_Vector2b.x or x;
    	temp.y=_Vector2b.y or y;
    	return temp;
    }
    const Vector2b operator not()
    {
    	Vector2b temp;
    	temp.x=!x;
    	temp.y=!y;
    	return temp;
    }
    const Vector2b operator xor(const Vector2b &_Vector2b)
    {
    	Vector2b temp;
    	temp.x=_Vector2b.x xor x;
    	temp.y=_Vector2b.y xor y;
    	return temp;
    }
};

class Vector3b
{
public:
    bool x,y,z;
        ///Constructori
    Vector3b():
        x(false),y(false),z(false) {}
    Vector3b(bool _x, bool _y, bool _z) :
        x(_x),y(_y),z(_z) {}
    Vector3b(const Vector3b& _Vector3b) :
        x(_Vector3b.x),y(_Vector3b.y), z(_Vector3b.z) {}

    Vector3b(Vector3b* _Vector3b) :
        x(_Vector3b->x), y(_Vector3b->y), z(_Vector3b->z) {}
    ///Functi Get
    inline bool GetX() { return x; }
    inline bool GetY() { return y; }
    inline bool GetZ() { return z; }
    inline uint32_t GetXYZ() { return x*65537+y*256+z*1; }
    /// Functi Set
    inline void Set(bool _x, bool _y, bool _z) { x=_x; y=_y; z=_z;}
    inline void Set(const Vector3b& _Vector3b) { x=_Vector3b.x; y=_Vector3b.y; z=_Vector3b.z; }
    inline void Set(uint32_t _xyz) { x=(_xyz & 0x10000)>>16; y=(_xyz & 0x100)>>8; z=_xyz & 0x1; }
    inline void SetX(bool _x) { x=_x; }
    inline void SetY(bool _y) { y=_y; }
    inline void SetZ(bool _z) { z=_z; }
    /// Functi logice
    inline void And(const Vector3b& _Vector3b) { x=x and _Vector3b.x; y=y and _Vector3b.y; z=z and _Vector3b.z; }
    inline void Or(const Vector3b& _Vector3b) { x=x or _Vector3b.x; y=y or _Vector3b.y; z=z and _Vector3b.z; }
    inline void Xor(const Vector3b& _Vector3b) { x=x xor _Vector3b.x; y=y xor _Vector3b.y; z=z and _Vector3b.z; }
    inline void Not() { x=!x; y=!y; z=!z; }
    inline void NotX() { x=!x; }
    inline void NotY() { y=!y; }
    inline void NotZ() { z=!z; }
    /// Functi Test
    inline bool AllSet() { return x and y and z; }
    inline bool AnySet() { return x or y or z; }
    /// Functi Display
    void Display(std::ostream& out)
    {
    	out<<"x: "<<x<<"\ny: "<<y<<"\nz: "<<z<<"\n";
    }
    /// Operatori
    Vector3b& operator=(const Vector3b &_Vector3b)	{ x=_Vector3b.x; y=_Vector3b.y; z=_Vector3b.z; return *this;}
    const Vector3b operator and(const Vector3b &_Vector3b)
    {
    	Vector3b temp;
    	temp.x=_Vector3b.x and x;
    	temp.y=_Vector3b.y and y;
    	temp.z=_Vector3b.z and z;
    	return temp;
    }
    const Vector3b operator or (const Vector3b &_Vector3b)
    {
    	Vector3b temp;
    	temp.x=_Vector3b.x or x;
    	temp.y=_Vector3b.y or y;
    	temp.z=_Vector3b.z or z;
    	return temp;
    }
    const Vector3b operator not()
    {
    	Vector3b temp;
    	temp.x=!x;
    	temp.y=!y;
    	temp.z=!z;
    	return temp;
    }
    const Vector3b operator xor(const Vector3b &_Vector3b)
    {
    	Vector3b temp;
    	temp.x=_Vector3b.x xor x;
    	temp.y=_Vector3b.y xor y;
    	temp.z=_Vector3b.z xor z;
    	return temp;
    }

};

class Vector4b
{
public:
    bool x,y,z,w;
    /// Constructori
    Vector4b() :
        x(false), y(false), z(false) {}
    Vector4b(bool _x, bool _y, bool _z, bool _w) :
        x(_x), y(_y), z(_z), w(_w) {}
    Vector4b(const Vector4b& _Vector4b) :
        x(_Vector4b.x), y(_Vector4b.y), z(_Vector4b.z), w(_Vector4b.w) {}
    Vector4b(uint32_t _xyzw)
    {
        x=(_xyzw & 0x1000000)>>24;
        y=(_xyzw & 0x10000)>>16;
        z=(_xyzw & 0x100)>>8;
        w=(_xyzw & 0x1);
    }
    /// Functi Get
    inline bool GetX() { return x; }
    inline bool GetY() { return y; }
    inline bool GetZ() { return z; }
    inline bool GetW() { return w; }
    inline uint32_t GetXYZW() { return x*16777216+y*65537+y*256+w*1; }
    /// Functi Set
    inline void Set(bool _x, bool _y, bool _z, bool _w) { x=_x; y=_y; z=_z; w=_w; }
    inline void Set(const Vector4b& _Vector4b) { x=_Vector4b.x;
                                                 y=_Vector4b.y;
                                                 z=_Vector4b.z;
                                                 w=_Vector4b.w; }
    inline void SetX(bool _x) { x=_x; }
    inline void SetY(bool _y) { y=_y; }
    inline void SetZ(bool _z) { z=_z; }
    inline void SetW(bool _w) { w=_w; }
    /// Functi logice
    inline void And(const Vector4b& _Vector4b) { x=x and _Vector4b.x; y=y and _Vector4b.y; z=z and _Vector4b.z; w=w and _Vector4b.w; }
    inline void Or(const Vector4b& _Vector4b) { x=x or _Vector4b.x; y=y or _Vector4b.y; z=z and _Vector4b.z; w=w or _Vector4b.w; }
    inline void Xor(const Vector4b& _Vector4b) { x=x xor _Vector4b.x; y=y xor _Vector4b.y; z=z and _Vector4b.z; w=w xor _Vector4b.w;}
	inline void Not() { x=!x; y=!y; z=!z; w=!w; }
    inline void NotX() { x=!x; }
    inline void NotY() { y=!y; }
    inline void NotZ() { z=!z; }
    inline void NotW() { w=!w; }
    /// Functi Test
    inline bool AllSet() { return x and y and z and w; }
    inline bool AnySet() { return x or y or z or w; }
    /// Functi Display
    void Display(std::ostream& out)
    {
    	out<<"x: "<<x<<"\ny: "<<y<<"\nz: "<<z<<"\nw: "<<w<<"\n";
    }
    /// Operatori
    Vector4b& operator=(const Vector4b &_Vector4b)	{ x=_Vector4b.x; y=_Vector4b.y; z=_Vector4b.z; w=_Vector4b.w; return *this;}
    const Vector4b operator and(const Vector4b &_Vector4b)
    {
    	Vector4b temp;
    	temp.x=_Vector4b.x and x;
    	temp.y=_Vector4b.y and y;
    	temp.z=_Vector4b.z and z;
    	temp.w=_Vector4b.w and w;
    	return temp;
    }
    const Vector4b operator or (const Vector4b &_Vector4b)
    {
    	Vector4b temp;
    	temp.x=_Vector4b.x or x;
    	temp.y=_Vector4b.y or y;
    	temp.z=_Vector4b.z or z;
    	temp.w=_Vector4b.w or w;
    	return temp;
    }
    const Vector4b operator not()
    {
    	Vector4b temp;
    	temp.x=!x;
    	temp.y=!y;
    	temp.z=!z;
    	temp.w=!w;
    	return temp;
    }
    const Vector4b operator xor(const Vector4b &_Vector4b)
    {
    	Vector4b temp;
    	temp.x=_Vector4b.x xor x;
    	temp.y=_Vector4b.y xor y;
    	temp.z=_Vector4b.z xor z;
    	temp.w=_Vector4b.w xor w;
    	return temp;
    }
};



#endif // VECTOR_B_H
