#include <iostream>
using namespace std;
struct Point3D {
    double x, y, z;
};
void shearX(Point3D& point, double shearFactor) {
    point.x += shearFactor * point.y;
    point.z += shearFactor * point.y;
}
int main() {
    Point3D myPoint = {1.0, 3.0, 5.0};
    cout << "Original Point: (" << myPoint.x << ", " << myPoint.y << ", " << myPoint.z << ")\n";
    double shearFactor = 2.0;
    shearX(myPoint, shearFactor);
    cout << "Point after shearing: (" << myPoint.x << ", " << myPoint.y << ", " << myPoint.z << ")\n";
    return 0;
}
