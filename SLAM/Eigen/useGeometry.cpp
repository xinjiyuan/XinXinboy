#include <iostream>
#include <cmath>

using namespace std;

#include <Eigen/Core>
//Eigen几何模块
#include <Eigen/Geometry>

int main()
{
    //Eigen/Geometry提供各种旋转和平移表示
    Eigen::Matrix3d rotation_matrix = Eigen::Matrix3d::Identity();
    Eigen::Matrix3f a;
    //3d旋转矩阵直接用Matrix3d或Matrix3f
    //旋转向量用AngleAxisd,其底层不是matrix,但运算可当做矩阵
    Eigen::AngleAxisd rotation_vector (M_PI/4, Eigen::Vector3d(0,0,1));//沿z轴旋转45度
    cout.precision(3);
    //用matrix()换成矩阵
    cout << "rotation matrix = \n" << rotation_vector.matrix() << endl;
    cout << "M_PI/4 = " << M_PI/4 << endl;
    //可直接赋值
    rotation_matrix = rotation_vector.toRotationMatrix();
    //用AngleAxis可以进行坐标转换
    Eigen::Vector3d v(1,0,0);
    Eigen::Vector3d v_rotated = rotation_vector * v;
    cout << "(1,0,0)after rotation = " << v_rotated.transpose()<<endl;
    cout << v_rotated.transpose()(0,0) << endl;
    //使用旋转矩阵
    v_rotated = rotation_matrix * v;
    cout << "(1,0,0)after rotation = " << v_rotated.transpose() << endl;

    //使用欧拉角:将旋转矩阵转换成欧拉角
    Eigen::Vector3d euler_angles = rotation_matrix.eulerAngles(2,1,0); //ZYX的顺序
    cout << "yaw pitch roll = " << euler_angles.transpose() << endl;
    
    //欧式变换矩阵使用Eigen::Isometry
    Eigen::Isometry3d T = Eigen::Isometry3d::Identity(); //实为4*4的矩阵
    T.rotate(rotation_vector); //按照rotation_vector旋转
    T.pretranslate(Eigen::Vector3d(1,3,4)); //平移向量为(1,3,4)
    cout << "Transform matrix = \n" << T.matrix() << endl;

    //用变换矩阵进行坐标变换
    Eigen::Vector3d v_transformed = T*v; //R*v*t
    cout << "v transformed = " << v_transformed.transpose() << endl;

    //四元数
    //可以直接把AngleAxis赋值给四元数,反之亦然
    Eigen::Quaterniond q = Eigen::Quaterniond(rotation_vector);
    cout << "quaternion = \n" << q.coeffs() << endl;//coeffs顺序为(x,y,z,w),w为实部，其余为虚部
    //也可以赋值给它旋转矩阵
    q = Eigen::Quaterniond(rotation_matrix);
    cout << "quaternion = \n" << q.coeffs() << endl;
    //使用四元数旋转一个向量，使用重载的乘法即可
    v_rotated = q*v; //在数学上是qvq^{-1}
    cout << "(1,0,0) after rotation = " << v_rotated.transpose() << endl;
}