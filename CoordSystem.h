#ifndef COORD_SYSTEM_H
#define COORD_SYSTEM_H
#include "../Vector/VectorF.h"

/// 3D Coord System
class SphericalCoordf
{
public:
	float r,alfa,beta;
	SphericalCoordf();
	SphericalCoordf(float,float,float);
	SphericalCoordf(SphericalCoordf&);

	inline float GetR();
	inline float GetAlfa();
	inline float GetBeta();
	inline void SetR(float);
	inline void SetAlfa(float);
	inline void SetBeta(float);

	///Cartesian Coord
	float GetX();
	float GetY();
	float GetZ();
	Vector3f GetXYZ();
};

class SphericalCoordd
{
public:
	double r,alfa,beta;
	SphericalCoordd();
	SphericalCoordd(double,double,double);
	SphericalCoordd(SphericalCoordd&);

	inline double GetR();
    inline double GetAlfa();
	inline double GetBeta();
	inline void SetR();
	inline void SetAlfa();
	inline void SetBeta();

	///Cartesian Coord
    double GetX();
    double GetY();
    double GetZ();
    /// VECTOR3D
};


#endif
