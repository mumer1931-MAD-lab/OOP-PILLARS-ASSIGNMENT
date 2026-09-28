#include <iostream>
#include <string>
using namespace std;
class LibraryResource {
protected:
 string title;
public:
 void setResourceTitle(string t) {
 title = t;
 }
};
class PrintedBook : public LibraryResource {
public:
 void issuePhysicalCopy(int rackNum) {
 cout << "Physical Book "" << title << "" issued from Shelf " << rackNum << endl;
 }
};
class AudioBook : public LibraryResource {
public:
 void streamAudio(string bitrate) {
 cout << "Streaming AudioBook "" << title << "" at quality: " << bitrate << endl;
 }
};
int main() {
 PrintedBook b;
 b.setResourceTitle("Clean Architecture");
 b.issuePhysicalCopy(7);
 AudioBook a;
 a.setResourceTitle("Deep Work");
 a.streamAudio("320 kbps");
 return 0;
}
