#include <iostream>
using namespace std;
class RoboticJoint {
public:
 virtual void calibrateSensors() = 0;
 virtual void rotateToAngle(double degrees) = 0;
 virtual ~RoboticJoint() {}
};
class ServoArmJoint : public RoboticJoint {
public:
 void calibrateSensors() override {
 cout << "Zeroing servo encoder home position." << endl;
 }
 void rotateToAngle(double degrees) override {
 cout << "Actuating stepper motor to " << degrees << " degrees rotation." << endl;
 }
};
int main() {
 RoboticJoint* joint = new ServoArmJoint();
 joint->calibrateSensors();
 joint->rotateToAngle(90.0);
 delete joint;
 return 0;
}
