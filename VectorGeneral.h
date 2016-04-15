#ifndef VECTOR_GENERAL_H
#define VECTOR_GENERAL_H

#include "VectorCom.h"
#include "VectorB.h"
#include "VectorI.h"
#include "VectorF.h"
#include "VectorD.h"

Vector3f TriangleNormal(Vector3f, Vector3f, Vector3f);

float Distance(Vector2f, Vector2f);
float Distance(Vector3f, Vector3f);
double Distance(Vector3d, Vector3d);
/// w isn't use at Distance
float DistanceV4XYZ(Vector4f, Vector4f);



float Dot(Vector3f, Vector3f);
double Dot(Vector3d, Vector3d);
/// w isn't use at DotV4XYZ
float DotV4XYZ(Vector4f, Vector4f);

Vector3f Cross(Vector3f, Vector3f);
Vector3d Cross(Vector3d, Vector3d);
/// w isn't use at CrossV4XYZ
Vector4f CrossV4XYZ(Vector4f, Vector4f);




Vector3f Reflect(Vector3f, Vector3f);
/// negative incidence
Vector3f ReflectIn(Vector3f, Vector3f);
Vector3d Reflect(Vector3d, Vector3d);
/// negative incidence
Vector3d ReflectIn(Vector3d, Vector3d);
/// w isn't use at ReflectV4XYZ
Vector4f ReflectV4XYZ(Vector4f, Vector4f);
/// w isn't use at ReflectV4XYZIn
/// negative incidence
Vector4f ReflectV4XYZIn(Vector4f, Vector4f);



Vector3f Faceforward(Vector3f, Vector3f);
/// negative incidence
Vector3f FaceforwardIn(Vector3f, Vector3f);
Vector3d Faceforward(Vector3d, Vector3d);
/// negative incidence
Vector3d FaceforwardIn(Vector3d, Vector3d);
/// w isn't use at FaceforwardV4XYZ
Vector4f FaceforwardV4XYZ(Vector4f, Vector4f);
/// w isn't use at FaceforwardV4XYZIn
/// negative incidence
Vector4f FaceforwardV4XYZIn(Vector4f, Vector4f);


bool AreCollinner(Vector2f, Vector2f);

bool AreCollinner(Vector3f, Vector3f);
/// w isn't use at AreCollinnerV4XYZ
bool AreCollinnerV4XYZ(Vector4f, Vector4f);
bool AreOrthogonal(Vector2f, Vector2f);

bool AreOrthogonal(Vector3f, Vector3f);

/// w isn't use at AreOrthogonalV4XYZ
bool AreOrthogonalV4XYZ(Vector4f, Vector4f);

bool IsNull(Vector2f);

bool IsNull(Vector3f);


/// w isn't use at IsNullV4XYZ
bool IsNullV4XYZ(Vector4f);
bool IsNormalized(Vector2f);

bool IsNormalized(Vector3f);

/// w isn't use at IsNormalizedV4XYZ
bool IsNormalizedV4XYZ(Vector4f);

bool AreOrthonormal(Vector2f, Vector2f);

bool AreOrthonormal(Vector3f, Vector3f);

/// w isn't use at AreOrthonormalV4XYZ
bool AreOrthonormalV4XYZ(Vector4f, Vector4f);
#endif
