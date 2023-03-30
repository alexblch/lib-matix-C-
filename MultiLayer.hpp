#include <iostream>
#include <Eigen/Dense>
#include <cmath>

using namespace Eigen;

class MultiLayer
{
private:
    int vectorX, vectorY;
    int res;
    int nbLayers;
    int nbEntry;
    int *Weight;
    Matrix3d data;
public:
    MultiLayer(/* args */);
    ~MultiLayer();
    float sigmoid(float x);
};

MultiLayer::MultiLayer()
{

}

float MultiLayer::sigmoid(float x)
{
    return 1 / (1 + exp(-x));
}

MultiLayer::~MultiLayer()
{
}
