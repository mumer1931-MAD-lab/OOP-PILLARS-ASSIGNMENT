#include <iostream>
using namespace std;
class Vector2D {
private:
 double x;
 double y;
public:
 Vector2D(double xVal = 0.0, double yVal = 0.0) : x(xVal), y(yVal) {}
 Vector2D operator+(const Vector2D& other) {
 return Vector2D(this->x + other.x, this->y + other.y);
 }
 void printVector() {
 cout << "Vector Position: (" << x << ", " << y << ")" << endl;
 }
};
int main() {
 Vector2D force1(12.5, 4.0);
 Vector2D force2(3.5, 8.5);
 Vector2D netForce = force1 + force2;
 cout << "Combined resultant force:" << endl;
 netForce.printVector();
 return 0;
}
