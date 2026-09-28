#include <iostream>
#include <string>
using namespace std;
class NotificationService {
public:
 virtual void sendAlert(string message) {
 cout << "Broadcasting standard notice: " << message << endl;
 }
 virtual ~NotificationService() {}
};
class SMSAlert : public NotificationService {
public:
 void sendAlert(string message) override {
 cout << "[SMS Gateway] Sending 160-char SMS: " << message << endl;
 }
};
class PushNotification : public NotificationService {
public:
 void sendAlert(string message) override {
 cout << "[FCM Cloud] Pushing app notification banner: " << message << endl;
 }
};
int main() {
 NotificationService* notifier = new SMSAlert();
 notifier->sendAlert("OTP verification: 9382");
 delete notifier;
 notifier = new PushNotification();
 notifier->sendAlert("New message alert received.");
 delete notifier;
 return 0;
}
