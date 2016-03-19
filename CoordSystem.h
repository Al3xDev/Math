#ifndef COORD_SYSTEM_H
#define COORD_SYSTEM_H
#include "../Vector/VectorD.h"
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

	inline void Set(PolarCoord&);
	inline void Set(float,float);

	///Cartesian Coord
	inline float GetX();
	inline float GetY();
	Vector2f GetXY();

	void Display(std::ostream &out) { out<<"r: "<<r<<"\nangle: "<<alfa<<"\n"; }
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

	inline void Set(CylindricalCoord&);
	inline void Set(float,float,float);

	///Cartesian Coord
	float GetX();
	float GetY();
	float GetZ();
	Vector3f GetXYZ();
	void Display(std::ostream &out) { out<<"r: "<<r<<"\nangle: "<<alfa<<"\nz: "<<z<<"\n"; }
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

	inline void Set(SphericalCoordf&);
	inline void Set(float,float,float);

	///Cartesian Coord

	float GetX();
	float GetY();
	float GetZ();
	Vector3f GetXYZ();
	void Display(std::ostream &out) { out<<"r: "<<r<<"\nangle: "<<alfa<<"\nbeta: "<<beta<<"\n"; }
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

	inline void Set(SphericalCoordd&);
	inline void Set(double,double,double);
	///Cartesian Coord

    double GetX();
    double GetY();
    double GetZ();
    Vector3d GetXYZ();
    void Display(std::ostream &out) { out<<"r: "<<r<<"\nangle: "<<alfa<<"\nbeta: "<<beta<<"\n"; }
};


#endif
