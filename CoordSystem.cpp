#include "CoordSystem.h"
#include <cmath>

SphericalCoordf::SphericalCoordf()	:
	r(1), alfa(0), beta(0) {}
SphericalCoordf::SphericalCoordf(float _r, float _alfa, float _beta) :
	r(_r), alfa(_alfa), beta(_beta) {}
SphericalCoordf::SphericalCoordf(SphericalCoordf& _SphericalCoordf)
{
	r=_SphericalCoordf.r;
	alfa=_SphericalCoordf.alfa;
	beta=_SphericalCoordf.beta;
}

float SphericalCoordf::GetR() { return r; }
float SphericalCoordf::GetAlfa() { return alfa; }
float SphericalCoordf::GetBeta() { return beta; }
void SphericalCoordf::SetR(float _r) { r=_r; }
void SphericalCoordf::SetAlfa(float _alfa) { alfa=_alfa; }
void SphericalCoordf::SetBeta(float _beta) { beta=_beta; }

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
	r(1), alfa(0), beta(0) {}
SphericalCoordd::SphericalCoordd(double _r, double _alfa, double _beta) :
	r(_r), alfa(_alfa), beta(_beta) {}
SphericalCoordd::SphericalCoordd(SphericalCoordd& _SphericalCoordf)
{
	r=_SphericalCoordf.r;
	alfa=_SphericalCoordf.alfa;
	beta=_SphericalCoordf.beta;
}

double SphericalCoordd::GetR() { return r; }
double SphericalCoordd::GetAlfa() { return alfa; }
double SphericalCoordd::GetBeta() { return beta; }
void SphericalCoordd::SetR(double _r) { r=_r; }
void SphericalCoordd::SetAlfa(double _alfa) { alfa=_alfa; }
void SphericalCoordd::SetBeta(double _beta) { beta=_beta; }

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
Vector3f SphericalCoordd::GetXYZ()
{
	Vector3f temp;
	temp.x=sin(beta)*cos(alfa)*r;
	temp.y=sin(beta)*sin(alfa)*r;
	temp.z=cos(beta)*r;
	return temp;
}

PolarCoord::PolarCoord():
	r(1.0), alfa(0.0) {}
PolarCoord::PolarCoord(float _r, float _alfa):
	r(_r), alfa(_alfa) {}
PolarCoord::PolarCoord(PolarCoord& _PolarCoord):
	r(_PolarCoord.r), alfa(_PolarCoord.alfa) {}

float PolarCoord::GetR() { return r; }
float PolarCoord::GetAlfa() { return alfa; }

void PolarCoord::SetR(float _r) { r=_r; }
void PolarCoord::SetAlfa(float _alfa) { alfa=_alfa; }

float PolarCoord::GetX() { return cos(alfa)*r; }
float PolarCoord::GetY() { return sin(alfa)*r; }
Vector2f PolarCoord::GetXY()
{
	Vector2f temp;
	temp.x=r*cos(alfa);
	temp.y=r*sin(alfa);
	return temp;
}
