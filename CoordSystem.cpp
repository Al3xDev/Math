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
