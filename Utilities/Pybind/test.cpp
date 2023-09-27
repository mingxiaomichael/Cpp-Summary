#include <iostream>
#include <fstream>
#include <math.h>
#include <vector>
#include <ctime>
#include <cmath>
#include <Eigen/Dense>

using namespace Eigen;

void update(Ref<Matrix<double, 20, 1>> q);

int main(){
    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    // std::cout << m << std::endl;
    Matrix<double, 20, 1> q;
    q.setZero();
    // std::cout << q << std::endl;
    double w = q(1,0) + 0.1;
    update(q);
    printf("%f", q(0,0));
}

void update(Ref<Matrix<double, 20, 1>> q){
    q(0,0) = 2;
}

//Update_  done!

//Walking_Update_  done!

//Walking_Compute_Desired_Motors_  done!