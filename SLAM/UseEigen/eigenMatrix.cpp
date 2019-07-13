#include <iostream>
#include <ctime>

using namespace std;

//Eigen部分
#include <Eigen/Core>
//稠密矩阵的代数运算(逆，特征值....)
#include <Eigen/Dense>

#define MATRIX_SIZE 50

//Eigen基本类型的使用

int main()
{
    //声明一个2*3的float矩阵
    Eigen::Matrix<float, 2, 3> matrix_23;
    //Eigen提供很多内置类型，实质是Eigen::Matrix类型
    //Vector3d实质上是Eigen::Matrix<double, 3, 1>
    Eigen::Vector3d v_3d;
    //Matrix3d实质上是Eigen::Matrix<double, 3, 3>
    Eigen::Matrix3d matrix_33 = Eigen::Matrix3d::Zero();//初始化为0
    //不确定矩阵大小时可用动态大小矩阵
    Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> matrix_dynamic;
    //more simple
    Eigen::MatrixXd matrix_x;

    //对矩阵操作
    matrix_23 << 1,2,3,4,5,6;
    cout << matrix_23 << endl;

    for(int i=0; i<2; i++)
        for(int j=0; j<3; j++)
            cout << matrix_23(i,j) << endl;
    
    v_3d << 3,2,1;
    //矩阵和向量相乘(结果是矩阵)
    //以下是错误的：
    // Eigen::Matrix<doubel, 2, 1> result_wrong_type = matrix_23 * v_3d;
    Eigen::Matrix<double, 2, 1> result = matrix_23.cast<double>() * v_3d;
    cout << result << endl;

    //关于矩阵维度的问题
    //以下是错误的：
    // Eigen::Matrix<double, 2, 3> result_wrong_dimension = matrix_23.cast<double>() * v_3d;
    //可以这样：
    //Eigen::Matrix<double, Eigen::Dynamic, Eigen::Dynamic> result_wrong_dimension = matrix_23.cast<double>() * v_3d;
    // cout << result_wrong_dimension << endl;

    //矩阵运算可直接用对应运算符
    matrix_33 = Eigen::Matrix3d::Random();
    cout << matrix_33 << endl << endl;
    //转置
    cout << matrix_33.transpose() << endl << endl;
    //各元素和
    cout << matrix_33.sum() << endl << endl;
    //迹
    cout << matrix_33.trace() << endl << endl;
    //数乘
    cout << 10*matrix_33 << endl << endl;
    //逆
    cout << matrix_33.inverse() << endl << endl;
    //行列式
    cout << matrix_33.determinant() << endl << endl;

    //特征值
    Eigen::SelfAdjointEigenSolver<Eigen::Matrix3d> eigen_solver(matrix_33.transpose()*matrix_33);
    cout << "Eigen values = " << eigen_solver.eigenvalues() << endl;
    cout << "Eigen vectors = " << eigen_solver.eigenvectors() << endl;

    //解方程
    //求解matrix_NN * x = v_Nd这个方程
    //N的大小在前面用宏定义了，矩阵随机由随机数产生
    
    Eigen::Matrix<double, MATRIX_SIZE, MATRIX_SIZE> matrix_NN;
    matrix_NN = Eigen::MatrixXd::Random(MATRIX_SIZE, MATRIX_SIZE);
    Eigen::Matrix<double, MATRIX_SIZE, 1> v_Nd;
    v_Nd = Eigen::MatrixXd::Random(MATRIX_SIZE, 1);
    //以下为两种方法：1、直接求逆(运算量大)

    clock_t time_stt = clock();//计时
    Eigen::Matrix<double, MATRIX_SIZE, 1> x = matrix_NN.inverse()*v_Nd;
    cout << "time use in normal invers is " << 1000*(clock() - time_stt)/(double)CLOCKS_PER_SEC << "ms" << endl;

    //使用矩阵分解来求，速度会更快
    time_stt = clock();
    x = matrix_NN.colPivHouseholderQr().solve(v_Nd);
    cout << "time use in Qr compsition is " << 1000*(clock() - time_stt)/(double)CLOCKS_PER_SEC << "ms" << endl;

}