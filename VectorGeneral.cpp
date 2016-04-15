#include "VectorGeneral.h"

float Distance(Vector2f v1, Vector2f v2)
{
    return sqrt((v1.x-v2.x)*(v1.x-v2.x)+(v1.y-v2.y)*(v1.y-v2.y));
}
float Distance(Vector3f v1, Vector3f v2)
{
    return sqrt((v1.x-v2.x)*(v1.x-v2.x)+(v1.y-v2.y)*(v1.y-v2.y)+(v1.z-v2.z)*(v1.z-v2.z));
}
double Distance(Vector3d v1, Vector3d v2)
{
    return sqrt((v1.x-v2.x)*(v1.x-v2.x)+(v1.y-v2.y)*(v1.y-v2.y)+(v1.z-v2.z)*(v1.z-v2.z));
}
/// w isn't use at Distance
float DistanceV4XYZ(Vector4f v1, Vector4f v2)
{
    return sqrt((v1.x-v2.x)*(v1.x-v2.x)+(v1.y-v2.y)*(v1.y-v2.y)+(v1.z-v2.z)*(v1.z-v2.z));
}



float Dot(Vector3f v1, Vector3f v2)
{
    return v1.x*v2.x+v1.y*v2.y+v1.z*v2.z;
}
double Dot(Vector3d v1, Vector3d v2)
{
    return v1.x*v2.x+v1.y*v2.y+v1.z*v2.z;
}
/// w isn't use at DotV4XYZ
float DotV4XYZ(Vector4f v1, Vector4f v2)
{
    return v1.x*v2.x+v1.y*v2.y+v1.z*v2.z;
}


Vector3f Cross(Vector3f v1, Vector3f v2)
{
    Vector3f temp(v1.y*v2.z-v1.z*v2.y,v1.z*v2.x-v1.x*v2.z,v1.x*v2.y-v1.y*v2.x);
    return temp;
}
Vector3d Cross(Vector3d v1, Vector3d v2)
{
    Vector3d temp(v1.y*v2.z-v1.z*v2.y,v1.z*v2.x-v1.x*v2.z,v1.x*v2.y-v1.y*v2.x);
    return temp;
}
/// w isn't use at CrossV4XYZ
Vector4f CrossV4XYZ(Vector4f v1, Vector4f v2)
{
    Vector4f temp(v1.y*v2.z-v1.z*v2.y,v1.z*v2.x-v1.x*v2.z,v1.x*v2.y-v1.y*v2.x,0);
    return temp;
}




Vector3f Reflect(Vector3f I, Vector3f N)
{
    I.x=-I.x;
    I.y=-I.y;
    I.z=-I.z;
    float cos_Dot = I.x*N.x + I.y*N.y + I.z*N.z;
    return Vector3f( 2*N.x*cos_Dot-I.x, 2*N.y*cos_Dot-I.y, 2*N.z*cos_Dot-I.z);
}
/// negative incidence
Vector3f ReflectIn(Vector3f I, Vector3f N)
{
    float cos_Dot = I.x*N.x + I.y*N.y + I.z*N.z;
    return Vector3f( 2*N.x*cos_Dot-I.x, 2*N.y*cos_Dot-I.y, 2*N.z*cos_Dot-I.z);
}
Vector3d Reflect(Vector3d I, Vector3d N)
{
    I.x=-I.x;
    I.y=-I.y;
    I.z=-I.z;
    float cos_Dot = I.x*N.x + I.y*N.y + I.z*N.z;
    return Vector3d( 2*N.x*cos_Dot-I.x, 2*N.y*cos_Dot-I.y, 2*N.z*cos_Dot-I.z);
}
/// negative incidence
Vector3d ReflectIn(Vector3d I, Vector3d N)
{
    float cos_Dot = I.x*N.x + I.y*N.y + I.z*N.z;
    return Vector3d( 2*N.x*cos_Dot-I.x, 2*N.y*cos_Dot-I.y, 2*N.z*cos_Dot-I.z);
}
/// w isn't use at ReflectV4XYZ
Vector4f ReflectV4XYZ(Vector4f I, Vector4f N)
{
    I.x=-I.x;
    I.y=-I.y;
    I.z=-I.z;
    float cos_Dot = I.x*N.x + I.y*N.y + I.z*N.z;
    return Vector4f( 2*N.x*cos_Dot-I.x, 2*N.y*cos_Dot-I.y, 2*N.z*cos_Dot-I.z,0);
}
/// w isn't use at ReflectV4XYZIn
/// negative incidence
Vector4f ReflectV4XYZIn(Vector4f I, Vector4f N)
{
    float cos_Dot = I.x*N.x + I.y*N.y + I.z*N.z;
    return Vector4f( 2*N.x*cos_Dot-I.x, 2*N.y*cos_Dot-I.y, 2*N.z*cos_Dot-I.z,0);
}




Vector3f Faceforward(Vector3f I, Vector3f N)
{
    I.x=-I.x;
    I.y=-I.y;
    I.z=-I.z;
    return (I.x*N.x+I.y*N.y+I.z*N.z)>0 ? N : -N;
}
/// negative incidence
Vector3f FaceforwardIn(Vector3f I, Vector3f N)
{
    return (I.x*N.x+I.y*N.y+I.z*N.z)>0 ? N : -N;
}
Vector3d Faceforward(Vector3d I, Vector3d N)
{
    I.x=-I.x;
    I.y=-I.y;
    I.z=-I.z;
    return (I.x*N.x+I.y*N.y+I.z*N.z)>0 ? N : -N;
}
/// negative incidence
Vector3d FaceforwardIn(Vector3d I, Vector3d N)
{
    return (I.x*N.x+I.y*N.y+I.z*N.z)>0 ? N : -N;
}
/// w isn't use at FaceforwardV4XYZ
Vector4f FaceforwardV4XYZ(Vector4f I, Vector4f N)
{
    I.x=-I.x;
    I.y=-I.y;
    I.z=-I.z;
    return (I.x*N.x+I.y*N.y+I.z*N.z)>0 ? N : -N;
}
/// w isn't use at FaceforwardV4XYZIn
/// negative incidence
Vector4f FaceforwardV4XYZIn(Vector4f I, Vector4f N)
{
    return (I.x*N.x+I.y*N.y+I.z*N.z)>0 ? N : -N;
}


bool AreCollinner(Vector2f v1, Vector2f v2)
{
    return v1.x/v2.x==v1.y/v2.y ? true : false;
}

bool AreCollinner(Vector3f v1, Vector3f v2)
{
    float v1v2_yr=v1.y/v2.y;
    return (v1.x/v2.x==v1v2_yr and v1.z/v2.z==v1v2_yr) ? true : false;
}

/// w isn't use at AreCollinnerV4XYZ
bool AreCollinnerV4XYZ(Vector4f v1, Vector4f v2)
{
    float v1v2_yr=v1.y/v2.y;
    return (v1.x/v2.x==v1v2_yr and v1.z/v2.z==v1v2_yr) ? true : false;
}

bool AreOrthogonal(Vector2f v1, Vector2f v2)
{
    return (v1.x*v2.x+v1.y*v2.y)==0 ? true : false;
}

bool AreOrthogonal(Vector3f v1, Vector3f v2)
{
    return (v1.x*v2.x+v1.y*v2.y +v1.z*v2.z)==0 ? true : false;
}

/// w isn't use at AreOrthogonalV4XYZ
bool AreOrthogonalV4XYZ(Vector4f v1, Vector4f v2)
{
    return (v1.x*v2.x+v1.y*v2.y +v1.z*v2.z)==0 ? true : false;
}

bool IsNull(Vector2f v)
{
    return v.x==0 and v.y==0 ? true : false;
}

bool IsNull(Vector3f v)
{
    return v.x==0 and v.y==0 and v.z==0 ? true : false;
}

/// w isn't use at IsNullV4XYZ
bool IsNullV4XYZ(Vector4f v)
{
    return v.x==0 and v.y==0 and v.z==0 ? true : false;
}

bool IsNormalized(Vector2f v)
{
    return sqrt(v.x*v.x+v.y*v.y)==1 ? true : false;
}

bool IsNormalized(Vector3f v)
{
    return sqrt(v.x*v.x+v.y*v.y+v.z*v.z)==1 ? true : false;
}

/// w isn't use at IsNormalizedV4XYZ
bool IsNormalizedV4XYZ(Vector4f v)
{
    return sqrt(v.x*v.x+v.y*v.y+v.z*v.z)==1 ? true : false;
}

bool AreOrthonormal(Vector2f v1, Vector2f v2)
{
    return  v1.x*v2.x+v1.y*v2.y==0 and sqrt(v2.x*v2.x+v2.y*v2.y)==1 and sqrt(v1.x*v1.x+v1.y*v1.y)==1 ? true : false ;
}

bool AreOrthonormal(Vector3f v1, Vector3f v2)
{
    return  v1.x*v2.x+v1.y*v2.y+v1.z*v2.z==0 and sqrt(v2.x*v2.x+v2.y*v2.y+v2.z*v2.z)==1 and sqrt(v1.x*v1.x+v1.y*v1.y+v1.z*v1.z)==1 ? true : false ;
}

/// w isn't use at AreOrthonormalV4XYZ
bool AreOrthonormalV4XYZ(Vector4f v1, Vector4f v2)
{
    return  v1.x*v2.x+v1.y*v2.y+v1.z*v2.z==0 and sqrt(v2.x*v2.x+v2.y*v2.y+v2.z*v2.z)==1 and sqrt(v1.x*v1.x+v1.y*v1.y+v1.z*v1.z)==1 ? true : false ;
}


Vector3f TriangleNormal(Vector3f V0, Vector3f V1, Vector3f V2)
{
    Vector3f Normal((V1.y-V0.y)*(V2.z-V0.z)-(V1.z-V0.z)*(V2.y-V0.y),
                    (V1.z-V0.z)*(V2.x-V0.x)-(V1.x-V0.x)*(V2.z-V0.z),
                    (V1.x-V0.x)*(V2.y-V0.y)-(V1.y-V0.y)*(V2.x-V0.x));
    Normal.Normalize();
    return Normal;
}








