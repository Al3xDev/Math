#ifndef COORD_SYSTEM_H
#define COORD_SYSTEM_H

class PolarCoord
{
public:
    float r,alfa;
	PolarCoord();
	PolarCoord(float,float);
	PolarCoord(PolarCoord&);

	inline float GetR();
	inline float GetAlfa();

	inline void SetR(float);
	inline void SetAlfa(float);

	///Cartesian Coord
	inline float GetX();
	inline float GetY();
	Vector2f GetXY();
};


class CylindricalCoord
{
public:
	float r,alfa,z;
	CylindricalCoord();
	CylindricalCoord(float,float,float);
	CylindricalCoord(CylindricalCoord&);

	inline float GetR();
	inline float GetAlfa();
	inline float GetZ();
	inline void SetR(float);
	inline void SetAlfa(float);
	inline void SetZ(float);

	///Cartesian Coord
	float GetX();
	float GetY();
	Vector3f GetXYZ();
};



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
	inline void SetR(double);
	inline void SetAlfa(double);
	inline void SetBeta(double);

	///Cartesian Coord
    double GetX();
    double GetY();
    double GetZ();
    Vector3f GetXYZ();
};


#endif
