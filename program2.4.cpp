#include <iostream>
using namespace std;
class HeartRateMonitor {
public:
 void trackPulse() {
 cout << "Heart Rate: 72 BPM (Resting)" << endl;
 }
};
class NavigationUnit {
public:
 void getCoordinates() {
 cout << "GPS: 32.0836 N, 72.6711 E" << endl;
 }
};
class FitnessSmartWatch : public HeartRateMonitor, public NavigationUnit {
public:
 void startWorkoutSession() {
 cout << "--- Workout Tracking Initialized ---" << endl;
 trackPulse();
 getCoordinates();
 }
};
int main() {
 FitnessSmartWatch watch;
 watch.startWorkoutSession();
 return 0;
}
