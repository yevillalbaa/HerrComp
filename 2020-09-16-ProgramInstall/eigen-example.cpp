#include <iostream>
#include <eigen3/Eigen/Dense>  // usr/include/eigen3/Eigen/Dense
#include <eigen3/Eigen/Core>   // usr/include/eigen3/Eigen/Core

using Eigen::MatrixXd;

int main()
{
    std::cout << "Eigen major version: 3." << EIGEN_MAJOR_VERSION << std::endl;
    std::cout << "Eigen minor version: 2." << EIGEN_MINOR_VERSION << std::endl;
    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout << m << std::endl;
}
