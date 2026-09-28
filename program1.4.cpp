#include <iostream>
using namespace std;
class VehicleFuelTank {
private:
 double fuelLitres;
 const double maxCapacity = 50.0;
public:
 VehicleFuelTank() : fuelLitres(5.0) {}
 void addFuel(double litres) {
 if (litres <= 0) {
 cout << "Invalid fuel quantity." << endl;
 return;
 }
 if (fuelLitres + litres <= maxCapacity) {
 fuelLitres += litres;
 cout << "Added " << litres << "L fuel. Current fuel: " << fuelLitres << "L" << endl;
 } else {
 cout << "Overflow warning! Tank capacity is only " << maxCapacity << "L." << endl;
 }
 }
 double getFuelLevel() {
 return fuelLitres;
 }
};
int main() {
 VehicleFuelTank tank;
 tank.addFuel(20.0);
 tank.addFuel(40.0);
 return 0;
}
