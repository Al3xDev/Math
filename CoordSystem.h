#ifndef COORD_SYSTEM_H
#define COORD_SYSTEM_H
#include "../Vector/VectorF.h"

///2D coord - 2*Floats
class PolarCoord
{
public:
    ///distance from origin
    float r;
    ///angle (r,Ox)
    float alfa;
	PolarCoord();
	PolarCoord(float,float);
	PolarCoord(PolarCoord&);

	inline float GetR();
	inline float GetAlfa();

	inline void Set(PolarCoord&);
	inline void SetR(float);
	inline void SetAlfa(float);

	///Cartesian Coord
	inline float GetX();
	inline float GetY();
	Vector2f GetXY();
};

/// 3D Coord System - 3*Floats
class CylindricalCoord
{
public:
	///distande from origin
	float r;
    ///angle (r,Ox)
    float alfa;
    ///z coord
    float z;

    CylindricalCoord();
	CylindricalCoord(float,float,float);
	CylindricalCoord(CylindricalCoord&);

	inline float GetR();
	inline float GetAlfa();
	inline void Set(CylindricalCoord&);
	inline void SetR(float);
	inline void SetAlfa(float);
	inline void SetZ(float);

	///Cartesian Coord

	float GetX();
	float GetY();
	float GetZ();
	Vector3f GetXYZ();
};



/// 3D Coord System - 3*Floats
class SphericalCoordf
{
public:
	///distance from origin
	float r;
    ///angle (r,Ox)
    float alfa;
    ///angle (r,Oz)
    float beta;

	SphericalCoordf();
	SphericalCoordf(float,float,float);
	SphericalCoordf(SphericalCoordf&);

	inline float GetR();
	inline float GetAlfa();
	inline float GetBeta();

	inline void Set(SphericalCoordf&);
	inline void SetR(float);
	inline void SetAlfa(float);
	inline void SetBeta(float);

	///Cartesian Coord

	float GetX();
	float GetY();
	float GetZ();
	Vector3f GetXYZ();
};

/// 3D Coord System - 3*Double
class SphericalCoordd
{
public:
	///distance from origin
	double r;
    ///angle (r,Ox)
    double alfa;
    ///angle (r,Oz)
    double beta;

	SphericalCoordd();
	SphericalCoordd(double,double,double);
	SphericalCoordd(SphericalCoordd&);

	inline double GetR();
    inline double GetAlfa();
	inline double GetBeta();

	inline void Set(SphericalCoordd&);
	inline void SetR(double);
	inline void SetAlfa(double);
	inline void SetBeta(double);

	///Cartesian Coord

    double GetX();
    double GetY();
    double GetZ();
    ///Vector3d GetXYZ();
};


#endif
};


#endif
