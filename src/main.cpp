#include <iostream>
#include <Eigen/Dense>

int main() {
    // Define 2x2 matrices
    Eigen::Matrix2d A;
    Eigen::Matrix2d B;

    A << 1, 2,
         3, 4;
    B << 2, 3,
         1, 4;

    // Multiply matrices
    Eigen::Matrix2d result = A * B;

    // Output the result
    std::cout << "Result of A * B:\n" << result << std::endl;

    // Basic test to ensure the result is correct
    Eigen::Matrix2d expected;
    expected << 4, 11,
                10, 25;

    if (result.isApprox(expected)) {
        std::cout << "Test passed!" << std::endl;
        return 0;
    } else {
        std::cout << "Test failed!" << std::endl;
        return 1;
    }
}