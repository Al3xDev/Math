#include "CoordSystem.h"
#include <cmath>


PolarCoord::PolarCoord():
	r(0.0), alfa(0.0) {}
PolarCoord::PolarCoord(float _r, float _alfa):
	r(_r), alfa(_alfa) {}
PolarCoord::PolarCoord(PolarCoord& _PolarCoord):
	r(_PolarCoord.r), alfa(_PolarCoord.alfa) {}

void PolarCoord::Set(PolarCoord& _PolarCoord)
{
	r=_PolarCoord.r;
	alfa=_PolarCoord.alfa;
}
void PolarCoord::Set(float _r, float _alfa) { r=_r; alfa=_alfa; }

float PolarCoord::GetX() { return cos(alfa)*r; }
float PolarCoord::GetY() { return sin(alfa)*r; }
Vector2f PolarCoord::GetXY()
{
	Vector2f temp;
	temp.x=r*cos(alfa);
	temp.y=r*sin(alfa);
	return temp;
}

CylindricalCoord::CylindricalCoord() :
    r(0), alfa(0), z(0) {}
CylindricalCoord::CylindricalCoord(float _r, float _alfa, float _z) :
    r(_r), alfa(_alfa), z(_z) {}
CylindricalCoord::CylindricalCoord(CylindricalCoord& _CylindricalCoord) :
    r(_CylindricalCoord.r),
    alfa(_CylindricalCoord.alfa),
    z(_CylindricalCoord.z) {}


void CylindricalCoord::Set(CylindricalCoord& _CylindricalCoord)
{
    r=_CylindricalCoord.r;
    alfa=_CylindricalCoord.alfa;
    z=_CylindricalCoord.z;
}

void CylindricalCoord::Set(float _r, float _alfa, float _z)
{
	r=_r;
	alfa=_alfa;
	z=_z;
}

float CylindricalCoord::GetX() { return r*cos(alfa); }
float CylindricalCoord::GetY() { return r*sin(alfa); }
float CylindricalCoord::GetZ() { return z; }
Vector3f CylindricalCoord::GetXYZ()
{
    Vector3f temp;
    temp.x=r*cos(alfa);
    temp.y=r*sin(alfa);
    temp.z=z;
    return temp;
}



SphericalCoordf::SphericalCoordf()	:
	r(0), alfa(0), beta(0) {}
SphericalCoordf::SphericalCoordf(float _r, float _alfa, float _beta) :
	r(_r), alfa(_alfa), beta(_beta) {}
SphericalCoordf::SphericalCoordf(SphericalCoordf& _SphericalCoordf)
{
	r=_SphericalCoordf.r;
	alfa=_SphericalCoordf.alfa;
	beta=_SphericalCoordf.beta;
}

void SphericalCoordf::Set(SphericalCoordf& _SphericalCoordf)
{
	r=_SphericalCoordf.r;
	alfa=_SphericalCoordf.alfa;
	beta=_SphericalCoordf.beta;
}
void SphericalCoordf::Set(float _r, float _alfa, float _beta)
{
	r=_r;
	alfa=_alfa;
	beta=_beta;
}

float SphericalCoordf::GetX()
{
	return sin(beta)*cos(alfa)*r;
}
float SphericalCoordf::GetY()
{
	return sin(beta)*sin(alfa)*r;
}
float SphericalCoordf::GetZ()
{
	return cos(beta)*r;
}
Vector3f SphericalCoordf::GetXYZ()
{
	Vector3f temp;
	temp.x=sin(beta)*cos(alfa)*r;
	temp.y=sin(beta)*sin(alfa)*r;
	temp.z=cos(beta)*r;
	return temp;
}


SphericalCoordd::SphericalCoordd()	:
	r(0), alfa(0), beta(0) {}
SphericalCoordd::SphericalCoordd(double _r, double _alfa, double _beta) :
	r(_r), alfa(_alfa), beta(_beta) {}
SphericalCoordd::SphericalCoordd(SphericalCoordd& _SphericalCoordf)
{
	r=_SphericalCoordf.r;
	alfa=_SphericalCoordf.alfa;
	beta=_SphericalCoordf.beta;
}

void SphericalCoordd::Set(SphericalCoordd& _SphericalCoordd)
{
	r=_SphericalCoordd.r;
	alfa=_SphericalCoordd.alfa;
	beta=_SphericalCoordd.beta;
}
void SphericalCoordd::Set(double _r, double _alfa, double _beta)
{
	r=_r;
	alfa=_alfa;
	beta=_beta;
}

double SphericalCoordd::GetX()
{
	return sin(beta)*cos(alfa)*r;
}
double SphericalCoordd::GetY()
{
	return sin(beta)*sin(alfa)*r;
}
double SphericalCoordd::GetZ()
{
	return cos(beta)*r;
}

Vector3d SphericalCoordd::GetXYZ()
{
	Vector3d temp;
	temp.x=sin(beta)*cos(alfa)*r;
	temp.y=sin(beta)*sin(alfa)*r;
	temp.z=cos(beta)*r;
	return temp;
}


