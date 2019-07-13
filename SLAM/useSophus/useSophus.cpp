#include <iostream>
#include <cmath>
using namespace std;

#include <Eigen/Core>
#include <Eigen/Geometry>

#include "sophus/so3.hpp"
#include "sophus/se3.hpp"

int main()
{
    Eigen::Matrix3d R = Eigen::AngleAxisd(M_PI/2, Eigen::Vector3d(0,0,1)).toRotationMatrix();
    Sophus::SO3 SO3_R(R);
    Sophus::SO3 SO3_v(0, 0, M_PI/2);
    Eigen::Quaterniond q(R);
    Sophus::SO3 SO3_q(q);
    cout << "SO(3) from matrix: " << SO3_R << endl;
}