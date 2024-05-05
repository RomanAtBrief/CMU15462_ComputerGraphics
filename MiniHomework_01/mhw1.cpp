/*
 * File: mhw1.cpp
 * ---------------------
 * This program solves a linear system with three
 * equations and three unknowns.
 *
 * 1.2x + 3.4y + 5.6z = 36.4
 * 7.8x + 9.0y + 1.2z = 87.6
 * 3.4x + 5.6y + 7.8z = 62.8
 *
 */

/* Preprocessor statement always satrts with # */
#include <iostream>
#include <Eigen/Dense>

/* Main program */
int main()
{
    Eigen::Matrix3f A;
    Eigen::Vector3f b;

    // Matrix. Converting system of linear equations to matrix form
    A << 1.2, 3.4, 5.6, 7.8, 9.0, 1.2, 3.4, 5.6, 7.8;
    // Representing constants as a vector b
    b << 36.4, 87.6, 62.8;

    // Console information
    std::cout << "The matrix on linear equation A is:\n"
              << A << std::endl;
    std::cout << "Constants as vector b:\n"
              << b << std::endl;

    // Solving equation and display solution
    Eigen::Vector3f v = A.colPivHouseholderQr().solve(b);
    std::cout << "The solution is: \n"
              << v << std::endl;
}