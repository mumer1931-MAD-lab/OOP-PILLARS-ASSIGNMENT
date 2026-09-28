#include <iostream>
#include <string>
using namespace std;
class UserProfile {
private:
 string username;
 string bioText;
public:
 UserProfile(string user) {
 username = user;
 bioText = "Default bio";
 }
 void updateBio(string newBio) {
 if (newBio.length() <= 80) {
 bioText = newBio;
 cout << "Bio updated successfully for @" << username << endl;
 } else {
 cout << "Error: Bio exceeds the 80 character limit!" << endl;
 }
 }
 string getBio() {
 return bioText;
 }
};
int main() {
 UserProfile user("tech_nomad");
 user.updateBio("Full-stack developer building scalable web systems and cloud apps.");
 cout << "Active Bio: " << user.getBio() << endl;
 return 0;
}
