#include "VectorB.h"
#include "VectorI.h"
#include "VectorF.h"
#include "VectorD.h"

Vector2b GenV2b(bool x, bool y) { Vector2b temp(x,y); return temp; }
Vector3b GenV3b(bool x, bool y, bool z) { Vector3b temp(x,y,z); return temp; }
Vector4b GenV4b(bool x, bool y, bool z, bool w) { Vector4b temp(x,y,z,w); return temp; }

Vector2i GenV2i(int x, int y) { Vector2i temp(x,y); return temp; }
Vector3i GenV3i(int x, int y, int z) { Vector3i temp(x,y,z); return temp; }
Vector4i GenV4i(int x, int y, int z, int w) { Vector4i temp(x,y,z,w); return temp; }

Vector2f GenV2f(float x, float y) { Vector2f temp(x,y); return temp; }
Vector3f GenV3f(float x, float y, float z) { Vector3f temp(x,y,z); return temp; }
Vector4f GenV4f(float x, float y, float z, float w) { Vector4f temp(x,y,z,w); return temp; }

Vector3d GenV3d(double x, double y, double z) { Vector3d temp(x,y,z); return temp; }
