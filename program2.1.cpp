#include <iostream>
#include <string>
using namespace std;
class Patient {
protected:
 string patientName;
 int wardNumber;
public:
 void registerPatient(string name, int ward) {
 patientName = name;
 wardNumber = ward;
 }
};
class ICUPatient : public Patient {
private:
 int ventilatorNumber;
public:
 void assignVentilator(int ventId) {
 ventilatorNumber = ventId;
 }
 void displayICUStatus() {
 cout << "ICU Patient: " << patientName << " | Ward: " << wardNumber 
 << " | Ventilator Unit: #" << ventilatorNumber << endl;
 }
};
int main() {
 ICUPatient p;
 p.registerPatient("Hamza", 4);
 p.assignVentilator(12);
 p.displayICUStatus();
 return 0;
}
