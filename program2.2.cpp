#include <iostream>
using namespace std;
class Spacecraft {
public:
 void initializeSystems() {
 cout << "[1] Telemetry and life-support active." << endl;
 }
};
class RocketBooster : public Spacecraft {
public:
 void igniteEngines() {
 cout << "[2] Rocket boosters ignited: Orbit achieved." << endl;
 }
};
class LunarLander : public RocketBooster {
public:
 void touchSurface() {
 cout << "[3] Landing gear deployed: Touched down on Lunar surface." << endl;
 }
};
int main() {
 LunarLander apollo;
 apollo.initializeSystems();
 apollo.igniteEngines();
 apollo.touchSurface();
 return 0;
}
