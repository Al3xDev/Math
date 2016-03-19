#ifndef VECTOR_COM_H
#define VECTOR_COM_H

#include <cmath>

struct VF
{
    /// 2D
    static const uint16_t xy=0, xz=1, xw=2, yx=3, yz=4, yw=5, zx=6, zy=7, zw=8, wx=9, wy=10, wz=11;
    /// 3D
    static const uint8_t xyz=12, xzy=13, yxz=14, yzx=15, zxy=16, zyx=17,
                  xyw=18, xzw=19, xwy=20, xwz=21, yxw=22, yzw=23,
                  ywx=24, ywz=25, zxw=26, zyw=27, zwx=28, zwy=29,
                  wxy=30, wxz=31, wyx=32, wyz=33, wzx=34, wzy=35;
};


#endif // VECTOR_COM_H
