#include <iostream>
#include <random>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main()
{
     //random
     std::random_device rd;
     std::mt19937 gen(rd());
     std::uniform_real_distribution<> dis(1, 10);
     // Création de deux matrices 3x3
     Matrix3d a;
     for(int i = 0; i < a.rows(); i++)
     {
         for(int j = 0; j < a.cols(); j++)
         {
             a(i,j) = (int)dis(gen);
         }
     }
     std::cout <<  a << " Taille de " << a.rows() << "x" << a.cols()<< std::endl;
  return 0;
}