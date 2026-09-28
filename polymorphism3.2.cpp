#include <iostream>
using namespace std;
class VolumeCalculator {
public:
 double computeVolume(double side) {
 return side * side * side;
 }
 double computeVolume(double radius, double height) {
 return 3.14159 * radius * radius * height;
 }
 double computeVolume(double length, double width, double height) {
 return length * width * height;
 }
};
int main() {
 VolumeCalculator vc;
 cout << "Cube (side 4): " << vc.computeVolume(4.0) << endl;
 cout << "Cylinder (r=3, h=7): " << vc.computeVolume(3.0, 7.0) << endl;
 cout << "Box (l=5, w=2, h=4): " << vc.computeVolume(5.0, 2.0, 4.0) << endl;
 return 0;
}
