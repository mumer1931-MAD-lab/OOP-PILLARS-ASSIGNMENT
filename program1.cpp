#include <iostream>
using namespace std;
class SmartThermostat {
private:
 int targetTemp;
 bool ecoMode;
public:
 SmartThermostat() {
 targetTemp = 24;
 ecoMode = false;
 }
 void setTemperature(int temp) {
 if (temp >= 16 && temp <= 30) {
 targetTemp = temp;
 cout << "Target temperature set to " << targetTemp << " C." << endl;
 } else {
 cout << "Temperature out of safe operating limits (16-30 C)!" << endl;
 }
 }
 int getTemperature() {
 return targetTemp;
 }
};
int main() {
 SmartThermostat ac;
 ac.setTemperature(22);
 ac.setTemperature(10);
 cout << "Current AC setting: " << ac.getTemperature() << " C" << endl;
 return 0;
}
